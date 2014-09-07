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
CC=gcc.exe
CCC=g++.exe
CXX=g++.exe
FC=gfortran.exe
AS=as.exe

# Macros
CND_PLATFORM=MinGW-Windows
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
	${OBJECTDIR}/Exercicio15.o \
	${OBJECTDIR}/Exercicio3.o \
	${OBJECTDIR}/Exercicio19.o \
	${OBJECTDIR}/Exercicio20.o \
	${OBJECTDIR}/Exercicio4.o \
	${OBJECTDIR}/Exercicio18.o \
	${OBJECTDIR}/Exercicio6.o \
	${OBJECTDIR}/Exercicio8.o \
	${OBJECTDIR}/Exercicio7.o \
	${OBJECTDIR}/Exercicio5.o \
	${OBJECTDIR}/Exercicio11.o \
	${OBJECTDIR}/Exercicio1.o \
	${OBJECTDIR}/Exercicio9.o \
	${OBJECTDIR}/Exercicio16.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/Exercicio13.o \
	${OBJECTDIR}/Exercicio12.o \
	${OBJECTDIR}/Exercicio10.o \
	${OBJECTDIR}/Exercicio14.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ed2014.2_lista_1.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ed2014.2_lista_1.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ed2014.2_lista_1 ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/Exercicio15.o: Exercicio15.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exercicio15.o Exercicio15.c

${OBJECTDIR}/Exercicio3.o: Exercicio3.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exercicio3.o Exercicio3.c

${OBJECTDIR}/Exercicio19.o: Exercicio19.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exercicio19.o Exercicio19.c

${OBJECTDIR}/Exercicio20.o: Exercicio20.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exercicio20.o Exercicio20.c

${OBJECTDIR}/Exercicio4.o: Exercicio4.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exercicio4.o Exercicio4.c

${OBJECTDIR}/Exercicio18.o: Exercicio18.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exercicio18.o Exercicio18.c

${OBJECTDIR}/Exercicio6.o: Exercicio6.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exercicio6.o Exercicio6.c

${OBJECTDIR}/Exercicio8.o: Exercicio8.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exercicio8.o Exercicio8.c

${OBJECTDIR}/Exercicio7.o: Exercicio7.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exercicio7.o Exercicio7.c

${OBJECTDIR}/Exercicio5.o: Exercicio5.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exercicio5.o Exercicio5.c

${OBJECTDIR}/Exercicio11.o: Exercicio11.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exercicio11.o Exercicio11.c

${OBJECTDIR}/Exercicio1.o: Exercicio1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exercicio1.o Exercicio1.c

${OBJECTDIR}/Exercicio9.o: Exercicio9.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exercicio9.o Exercicio9.c

${OBJECTDIR}/Exercicio16.o: Exercicio16.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exercicio16.o Exercicio16.c

${OBJECTDIR}/main.o: main.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.c

${OBJECTDIR}/Exercicio13.o: Exercicio13.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exercicio13.o Exercicio13.c

${OBJECTDIR}/Exercicio12.o: Exercicio12.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exercicio12.o Exercicio12.c

${OBJECTDIR}/Exercicio10.o: Exercicio10.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exercicio10.o Exercicio10.c

${OBJECTDIR}/Exercicio14.o: Exercicio14.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.c) -g -MMD -MP -MF $@.d -o ${OBJECTDIR}/Exercicio14.o Exercicio14.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/ed2014.2_lista_1.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
