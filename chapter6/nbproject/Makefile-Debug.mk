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
	${OBJECTDIR}/boolean.o \
	${OBJECTDIR}/cmpflt.o \
	${OBJECTDIR}/do_while.o \
	${OBJECTDIR}/entry.o \
	${OBJECTDIR}/for_13s.o \
	${OBJECTDIR}/for_char.o \
	${OBJECTDIR}/for_cube.o \
	${OBJECTDIR}/for_down.o \
	${OBJECTDIR}/for_geo.o \
	${OBJECTDIR}/for_none.o \
	${OBJECTDIR}/for_show.o \
	${OBJECTDIR}/for_wild.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/postage.o \
	${OBJECTDIR}/power.o \
	${OBJECTDIR}/rows1.o \
	${OBJECTDIR}/rows2.o \
	${OBJECTDIR}/scores_in.o \
	${OBJECTDIR}/summing.o \
	${OBJECTDIR}/sweetie1.o \
	${OBJECTDIR}/sweetie2.o \
	${OBJECTDIR}/t_and_f.o \
	${OBJECTDIR}/trouble.o \
	${OBJECTDIR}/truth.o \
	${OBJECTDIR}/when.o \
	${OBJECTDIR}/while1.o \
	${OBJECTDIR}/while2.o \
	${OBJECTDIR}/zeno.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/chapter6.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/chapter6.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/chapter6 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/boolean.o: boolean.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/boolean.o boolean.c

${OBJECTDIR}/cmpflt.o: cmpflt.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/cmpflt.o cmpflt.c

${OBJECTDIR}/do_while.o: do_while.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/do_while.o do_while.c

${OBJECTDIR}/entry.o: entry.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/entry.o entry.c

${OBJECTDIR}/for_13s.o: for_13s.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/for_13s.o for_13s.c

${OBJECTDIR}/for_char.o: for_char.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/for_char.o for_char.c

${OBJECTDIR}/for_cube.o: for_cube.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/for_cube.o for_cube.c

${OBJECTDIR}/for_down.o: for_down.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/for_down.o for_down.c

${OBJECTDIR}/for_geo.o: for_geo.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/for_geo.o for_geo.c

${OBJECTDIR}/for_none.o: for_none.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/for_none.o for_none.c

${OBJECTDIR}/for_show.o: for_show.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/for_show.o for_show.c

${OBJECTDIR}/for_wild.o: for_wild.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/for_wild.o for_wild.c

${OBJECTDIR}/main.o: main.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.c

${OBJECTDIR}/postage.o: postage.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/postage.o postage.c

${OBJECTDIR}/power.o: power.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/power.o power.c

${OBJECTDIR}/rows1.o: rows1.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/rows1.o rows1.c

${OBJECTDIR}/rows2.o: rows2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/rows2.o rows2.c

${OBJECTDIR}/scores_in.o: scores_in.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/scores_in.o scores_in.c

${OBJECTDIR}/summing.o: summing.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/summing.o summing.c

${OBJECTDIR}/sweetie1.o: sweetie1.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/sweetie1.o sweetie1.c

${OBJECTDIR}/sweetie2.o: sweetie2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/sweetie2.o sweetie2.c

${OBJECTDIR}/t_and_f.o: t_and_f.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/t_and_f.o t_and_f.c

${OBJECTDIR}/trouble.o: trouble.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/trouble.o trouble.c

${OBJECTDIR}/truth.o: truth.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/truth.o truth.c

${OBJECTDIR}/when.o: when.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/when.o when.c

${OBJECTDIR}/while1.o: while1.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/while1.o while1.c

${OBJECTDIR}/while2.o: while2.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/while2.o while2.c

${OBJECTDIR}/zeno.o: zeno.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/zeno.o zeno.c

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
