//Ernesto Soltero
//File: includes.h
//Description: Contains all the headers and constants 

#ifndef _INCLUDES_H
#define _INCLUDES_H

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <StorageObject.h>
#include <Counter.h>
#include <BusALU.h>
#include <Clock.h>
#include <Bus.H>
#include <Memory.h>
#include <Clearable.h>

//Address bus
extern Bus abus;
//Data bus
extern Bus dbus;
//Instruction register
extern StorageObject ir;
//Program Counter
extern Counter pc;
//New program counter
extern Counter npc;
//Main Arithmetic Logic Unit
extern BusALU mainAlu;
//Prefetch ALU
extern BusALU preAlu;
//Primary Memory
extern Memory mem;
//Address register
extern Counter addr;
//S1 register
extern Counter s1;
//S2 register
extern Counter s2;
//S3 register
extern Clearable s3;

void setup();

#endif
