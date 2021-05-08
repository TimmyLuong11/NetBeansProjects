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
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/another_file.o \
	${OBJECTDIR}/auto_ex.o \
	${OBJECTDIR}/diceroll.o \
	${OBJECTDIR}/dyn_arr.o \
	${OBJECTDIR}/forc99.o \
	${OBJECTDIR}/global.o \
	${OBJECTDIR}/hiding.o \
	${OBJECTDIR}/loc_stat.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/manydice.o \
	${OBJECTDIR}/parta.o \
	${OBJECTDIR}/partb.o \
	${OBJECTDIR}/r_drive0.o \
	${OBJECTDIR}/r_drive1.o \
	${OBJECTDIR}/rand0.o \
	${OBJECTDIR}/regis_ex.o \
	${OBJECTDIR}/s_and_r.o \
	${OBJECTDIR}/static_ext_ex.o \
	${OBJECTDIR}/static_int_ex.o \
	${OBJECTDIR}/static_no_link.o \
	${OBJECTDIR}/where.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/chapter12.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/chapter12.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/chapter12 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/another_file.o: another_file.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/another_file.o another_file.c

${OBJECTDIR}/auto_ex.o: auto_ex.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/auto_ex.o auto_ex.c

${OBJECTDIR}/diceroll.o: diceroll.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/diceroll.o diceroll.c

${OBJECTDIR}/dyn_arr.o: dyn_arr.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/dyn_arr.o dyn_arr.c

${OBJECTDIR}/forc99.o: forc99.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/forc99.o forc99.c

${OBJECTDIR}/global.o: global.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/global.o global.c

${OBJECTDIR}/hiding.o: hiding.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/hiding.o hiding.c

${OBJECTDIR}/loc_stat.o: loc_stat.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/loc_stat.o loc_stat.c

${OBJECTDIR}/main.o: main.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.c

${OBJECTDIR}/manydice.o: manydice.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/manydice.o manydice.c

${OBJECTDIR}/parta.o: parta.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/parta.o parta.c

${OBJECTDIR}/partb.o: partb.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/partb.o partb.c

${OBJECTDIR}/r_drive0.o: r_drive0.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/r_drive0.o r_drive0.c

${OBJECTDIR}/r_drive1.o: r_drive1.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/r_drive1.o r_drive1.c

${OBJECTDIR}/rand0.o: rand0.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/rand0.o rand0.c

${OBJECTDIR}/regis_ex.o: regis_ex.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/regis_ex.o regis_ex.c

${OBJECTDIR}/s_and_r.o: s_and_r.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/s_and_r.o s_and_r.c

${OBJECTDIR}/static_ext_ex.o: static_ext_ex.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/static_ext_ex.o static_ext_ex.c

${OBJECTDIR}/static_int_ex.o: static_int_ex.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/static_int_ex.o static_int_ex.c

${OBJECTDIR}/static_no_link.o: static_no_link.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/static_no_link.o static_no_link.c

${OBJECTDIR}/where.o: where.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/where.o where.c

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
