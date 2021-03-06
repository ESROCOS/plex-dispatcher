# ======================================================================
#  FILE:  $URL$
# ======================================================================
#  PROJECT:             :  taste_dispatcher
#  VERSION              :  @VERION@
#  LANGUAGE             :  CMake script
#  AUTHOR               :  @AUTHOR@
#  COPYRIGHT            :  @COPYRIGHT@
#  COMPILER             :  cmake version 3.0.2
#  CREATED              :  @CREATED@
#  CLASS                :  -
#  LAST MODIFIED        :  @LASTMODIFIED@
#  GENERATED FROM MODEL :  -
#  ORIGINAL MODEL AUTHOR:  -
# ----------------------------------------------------------------------
#  @DESCRIPTION@
# ----------------------------------------------------------------------
#  HISTORY
#  $History$
# ======================================================================

cmake_minimum_required(VERSION 3.2)

project(taste_dispatcher)

include($ENV{ESROCOS_CMAKE})

#required function call to set up esrocos
esrocos_init()

########### FOR INTEGRATION PROJECTS ##############

#uncomment if you want to add dependencies for the build process (only required in integration projects)
#esrocos_add_dependency(PARTITION <Name Of Partition>
#                       MODULES   <PKG-Config findable module>[,secondmodule,thirdmodule...])

########### FOR COMPONENT PROJECTS ################

#uncomment if you want to export a function
esrocos_export_function("MotionCommandDispatcher" "share/taste_components/dispatchers")
esrocos_export_function("RigidBodyStateDispatcher" "share/taste_components/dispatchers")
esrocos_export_function("JoystickCommandDispatcher" "share/taste_components/dispatchers")
esrocos_export_function("JoystickCommandDispatcher3" "share/taste_components/dispatchers")
esrocos_export_function("DoubleDispatcher" "share/taste_components/dispatchers")
esrocos_export_function("NoArgDispatcher" "share/taste_components/dispatchers")
esrocos_export_function("markermux" "share/taste_components/dispatchers")

#uncomment to export PKG-CONFIG-file
esrocos_export_pkgconfig( VERSION 1.0
                          DESCRIPTION "none"
                          REQUIRES ""
                          LIBS ""
                          STATIC_LIBS "" 
                          C_FLAGS ""
                        ) 
