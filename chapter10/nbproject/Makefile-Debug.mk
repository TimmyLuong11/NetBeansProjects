#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/arf.o \
	${OBJECTDIR}/array2d.o \
	${OBJECTDIR}/bounds.o \
	${OBJECTDIR}/day_mon1.o \
	${OBJECTDIR}/day_mon2.o \
	${OBJECTDIR}/day_mon3.o \
	${OBJECTDIR}/designate.o \
	${OBJECTDIR}/flc.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/no_data.o \
	${OBJECTDIR}/order.o \
	${OBJECTDIR}/pnt_add.o \
	${OBJECTDIR}/ptr_ops.o \
	${OBJECTDIR}/rain.o \
	${OBJECTDIR}/somedata.o \
	${OBJECTDIR}/sum_arr1.o \
	${OBJECTDIR}/sum_arr2.o \
	${OBJECTDIR}/vararr2d.o \
	${OBJECTDIR}/zippo1.o \
	${OBJECTDIR}/zippo2.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/chapter10.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/chapter10.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/chapter10 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/arf.o: arf.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/arf.o arf.c

${OBJECTDIR}/array2d.o: array2d.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/array2d.o array2d.c

${OBJECTDIR}/bounds.o: bounds.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/bounds.o bounds.c

${OBJECTDIR}/day_mon1.o: day_mon1.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/day_mon1.o day_mon1.c

${OBJECTDIR}/day_mon2.o: day_mon2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/day_mon2.o day_mon2.c

${OBJECTDIR}/day_mon3.o: day_mon3.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/day_mon3.o day_mon3.c

${OBJECTDIR}/designate.o: designate.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/designate.o designate.c

${OBJECTDIR}/flc.o: flc.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/flc.o flc.c

${OBJECTDIR}/main.o: main.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.c

${OBJECTDIR}/no_data.o: no_data.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/no_data.o no_data.c

${OBJECTDIR}/order.o: order.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/order.o order.c

${OBJECTDIR}/pnt_add.o: pnt_add.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/pnt_add.o pnt_add.c

${OBJECTDIR}/ptr_ops.o: ptr_ops.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ptr_ops.o ptr_ops.c

${OBJECTDIR}/rain.o: rain.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/rain.o rain.c

${OBJECTDIR}/somedata.o: somedata.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/somedata.o somedata.c

${OBJECTDIR}/sum_arr1.o: sum_arr1.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/sum_arr1.o sum_arr1.c

${OBJECTDIR}/sum_arr2.o: sum_arr2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/sum_arr2.o sum_arr2.c

${OBJECTDIR}/vararr2d.o: vararr2d.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/vararr2d.o vararr2d.c

${OBJECTDIR}/zippo1.o: zippo1.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/zippo1.o zippo1.c

${OBJECTDIR}/zippo2.o: zippo2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/zippo2.o zippo2.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
