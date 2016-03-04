################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Alumnos.cpp \
../src/El\ Zarzal.cpp \
../src/GestorAlumnos.cpp \
../src/GestorAlumnosEnGrado.cpp \
../src/GestorGrados.cpp \
../src/GestorSolicitudes.cpp \
../src/Grados.cpp \
../src/Solicitudes.cpp 

OBJS += \
./src/Alumnos.o \
./src/El\ Zarzal.o \
./src/GestorAlumnos.o \
./src/GestorAlumnosEnGrado.o \
./src/GestorGrados.o \
./src/GestorSolicitudes.o \
./src/Grados.o \
./src/Solicitudes.o 

CPP_DEPS += \
./src/Alumnos.d \
./src/El\ Zarzal.d \
./src/GestorAlumnos.d \
./src/GestorAlumnosEnGrado.d \
./src/GestorGrados.d \
./src/GestorSolicitudes.d \
./src/Grados.d \
./src/Solicitudes.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/El\ Zarzal.o: ../src/El\ Zarzal.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/El Zarzal.d" -MT"src/El\ Zarzal.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


