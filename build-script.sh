#!/bin/bash -e

# This script will build your TASTE system.

# You should not change this file as it was automatically generated.

# If you need additional preprocessing, there are three hook files
# that you can provide and that are called dring the build:
# user_init_pre.sh, user_init_post.sh and user_init_last.sh
# These files will never get overwritten by TASTE.'

# Inside these files you may set some environment variables:
#    C_INCLUDE_PATH=/usr/include/xenomai/analogy/:${C_INCLUDE_PATH}
#    unset USE_POHIC   

CWD=$(pwd)

if [ -t 1 ] ; then
    COLORON="\e[1m\e[32m"
    COLOROFF="\e[0m"
else
    COLORON=""
    COLOROFF=""
fi
INFO="${COLORON}[INFO]${COLOROFF}"

if [ -f user_init_pre.sh ]
then
    echo -e "${INFO} Executing user-defined init script"
    source user_init_pre.sh
fi

# Set up the cache to limit the calls to ASN1SCC in DMT tools
mkdir -p .cache
export PROJECT_CACHE=$(pwd)/.cache

# Use PolyORB-HI-C runtime
USE_POHIC=1

# Set Debug mode by default
DEBUG_MODE=--debug

# Detect models from Ellidiss tools v2, and convert them to 1.3
INTERFACEVIEW=taste_dispatcher_iv.aadl
grep "version => \"2" taste_dispatcher_iv.aadl >/dev/null && {
    echo -e "${INFO} Converting interface view from V2 to V1.3"
    TASTE --load-interface-view taste_dispatcher_iv.aadl --export-interface-view-to-1_3 __iv_1_3.aadl
    INTERFACEVIEW=__iv_1_3.aadl
};

if [ -z "$DEPLOYMENTVIEW" ]
then
    DEPLOYMENTVIEW=DeploymentView.aadl
fi

# Detect models from Ellidiss tools v2, and convert them to 1.3
grep "version => \"2" "$DEPLOYMENTVIEW" >/dev/null && {
    echo -e "${INFO} Converting deployment view from V2 to V1.3"
    TASTE --load-deployment-view "$DEPLOYMENTVIEW" --export-deployment-view-to-1_3 __dv_1_3.aadl
    DEPLOYMENTVIEW=__dv_1_3.aadl
};

SKELS="./"

# Check if Dataview references existing files 
mono $(which taste-extract-asn-from-design.exe) -i "$INTERFACEVIEW" -j /tmp/dv.asn

cd "$SKELS" && rm -f motioncommanddispatcher.zip && zip motioncommanddispatcher motioncommanddispatcher/* && cd $OLDPWD

cd "$SKELS" && rm -f test_motioncommanddispatcherconsumer1.zip && zip test_motioncommanddispatcherconsumer1 test_motioncommanddispatcherconsumer1/* && cd $OLDPWD

cd "$SKELS" && rm -f test_motioncommanddispatcherconsumer2.zip && zip test_motioncommanddispatcherconsumer2 test_motioncommanddispatcherconsumer2/* && cd $OLDPWD

cd "$SKELS" && rm -f test_motioncommanddisapatcherproducer.zip && zip test_motioncommanddisapatcherproducer test_motioncommanddisapatcherproducer/* && cd $OLDPWD

cd "$SKELS" && rm -f rigidbodystatedispatcher.zip && zip rigidbodystatedispatcher rigidbodystatedispatcher/* && cd $OLDPWD

cd "$SKELS" && rm -f test_rigidbodystatedisapatcherproducer.zip && zip test_rigidbodystatedisapatcherproducer test_rigidbodystatedisapatcherproducer/* && cd $OLDPWD

cd "$SKELS" && rm -f test_rigidbodystatedispatcherconsumer1.zip && zip test_rigidbodystatedispatcherconsumer1 test_rigidbodystatedispatcherconsumer1/* && cd $OLDPWD

cd "$SKELS" && rm -f test_rigidbodystatedispatcherconsumer2.zip && zip test_rigidbodystatedispatcherconsumer2 test_rigidbodystatedispatcherconsumer2/* && cd $OLDPWD

cd "$SKELS" && rm -f joystickcommanddispatcher.zip && zip joystickcommanddispatcher joystickcommanddispatcher/* && cd $OLDPWD

cd "$SKELS" && rm -f testjoystickcommanddispatcherproducer.zip && zip testjoystickcommanddispatcherproducer testjoystickcommanddispatcherproducer/* && cd $OLDPWD

cd "$SKELS" && rm -f testjoystickcommanddispatcherconsumer1.zip && zip testjoystickcommanddispatcherconsumer1 testjoystickcommanddispatcherconsumer1/* && cd $OLDPWD

cd "$SKELS" && rm -f testjoystickcommanddispatcherconsumer2.zip && zip testjoystickcommanddispatcherconsumer2 testjoystickcommanddispatcherconsumer2/* && cd $OLDPWD

cd "$SKELS" && rm -f doubledispatcher.zip && zip doubledispatcher doubledispatcher/* && cd $OLDPWD

cd "$SKELS" && rm -f test_doubleproducer.zip && zip test_doubleproducer test_doubleproducer/* && cd $OLDPWD

cd "$SKELS" && rm -f test_double_consumer1.zip && zip test_double_consumer1 test_double_consumer1/* && cd $OLDPWD

cd "$SKELS" && rm -f taste_double_consumer2.zip && zip taste_double_consumer2 taste_double_consumer2/* && cd $OLDPWD

cd "$SKELS" && rm -f noargdispatcher.zip && zip noargdispatcher noargdispatcher/* && cd $OLDPWD

cd "$SKELS" && rm -f testnoargdispatcher.zip && zip testnoargdispatcher testnoargdispatcher/* && cd $OLDPWD

cd "$SKELS" && rm -f test_noarg_consumer1.zip && zip test_noarg_consumer1 test_noarg_consumer1/* && cd $OLDPWD

cd "$SKELS" && rm -f test_noarg_consumer2.zip && zip test_noarg_consumer2 test_noarg_consumer2/* && cd $OLDPWD

[ ! -z "$CLEANUP" ] && rm -rf binary*

if [ -f ConcurrencyView.pro ]
then
    ORCHESTRATOR_OPTIONS+=" -w ConcurrencyView.pro "
elif [ -f ConcurrencyView_Properties.aadl ]
then
    ORCHESTRATOR_OPTIONS+=" -w ConcurrencyView_Properties.aadl "
fi

if [ -f user_init_post.sh ]
then
    echo -e "${INFO} Executing user-defined post-init script"
    source user_init_post.sh
fi

if [ -f additionalCommands.sh ]
then
    source additionalCommands.sh
fi

if [ ! -z "$USE_POHIC" ]
then
    OUTPUTDIR=binary.c
    ORCHESTRATOR_OPTIONS+=" -p "
elif [ ! -z "$USE_POHIADA" ]
then
    OUTPUTDIR=binary.ada
else
    OUTPUTDIR=binary
fi

cd "$CWD" && assert-builder-ocarina.py \
	--fast \
	$DEBUG_MODE \
	--aadlv2 \
	--keep-case \
	--interfaceView "$INTERFACEVIEW" \
	--deploymentView "$DEPLOYMENTVIEW" \
	-o "$OUTPUTDIR" \
	--subC motioncommanddispatcher:"$SKELS"/motioncommanddispatcher.zip \
	--subC test_motioncommanddispatcherconsumer1:"$SKELS"/test_motioncommanddispatcherconsumer1.zip \
	--subC test_motioncommanddispatcherconsumer2:"$SKELS"/test_motioncommanddispatcherconsumer2.zip \
	--subC test_motioncommanddisapatcherproducer:"$SKELS"/test_motioncommanddisapatcherproducer.zip \
	--subC rigidbodystatedispatcher:"$SKELS"/rigidbodystatedispatcher.zip \
	--subC test_rigidbodystatedisapatcherproducer:"$SKELS"/test_rigidbodystatedisapatcherproducer.zip \
	--subC test_rigidbodystatedispatcherconsumer1:"$SKELS"/test_rigidbodystatedispatcherconsumer1.zip \
	--subC test_rigidbodystatedispatcherconsumer2:"$SKELS"/test_rigidbodystatedispatcherconsumer2.zip \
	--subC joystickcommanddispatcher:"$SKELS"/joystickcommanddispatcher.zip \
	--subC testjoystickcommanddispatcherproducer:"$SKELS"/testjoystickcommanddispatcherproducer.zip \
	--subC testjoystickcommanddispatcherconsumer1:"$SKELS"/testjoystickcommanddispatcherconsumer1.zip \
	--subC testjoystickcommanddispatcherconsumer2:"$SKELS"/testjoystickcommanddispatcherconsumer2.zip \
	--subCPP doubledispatcher:"$SKELS"/doubledispatcher.zip \
	--subCPP test_doubleproducer:"$SKELS"/test_doubleproducer.zip \
	--subCPP test_double_consumer1:"$SKELS"/test_double_consumer1.zip \
	--subCPP taste_double_consumer2:"$SKELS"/taste_double_consumer2.zip \
	--subCPP noargdispatcher:"$SKELS"/noargdispatcher.zip \
	--subC testnoargdispatcher:"$SKELS"/testnoargdispatcher.zip \
	--subC test_noarg_consumer1:"$SKELS"/test_noarg_consumer1.zip \
	--subC test_noarg_consumer2:"$SKELS"/test_noarg_consumer2.zip \
	$ORCHESTRATOR_OPTIONS

if [ -f user_init_last.sh ]
then
    echo -e "${INFO} Executing user-defined post-build script"
    source user_init_last.sh
fi

