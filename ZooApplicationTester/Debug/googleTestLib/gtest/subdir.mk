################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../googleTestLib/gtest/gtest-all.cc 

CC_DEPS += \
./googleTestLib/gtest/gtest-all.d 

OBJS += \
./googleTestLib/gtest/gtest-all.o 


# Each subdirectory must supply rules for building sources it contributes
googleTestLib/gtest/%.o: ../googleTestLib/gtest/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -I"C:\Users\Tiago Oliveira\eclipse-workspace\fsoft2021_team_8\ZooApplicationTester\googleTestLib" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


