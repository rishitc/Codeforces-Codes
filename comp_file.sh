#!/bin/bash
if [ -z $1 ]
then
      echo -e "\033[31;01mERROR:\033[0m No input file provided to compile!"
else
      echo -e "\033[36;01mINFO:\033[0m Compiling $1"
      g++ -Wall -fsanitize=address -std=c++17 $1
      RES=$?
      if [ $RES -eq '0' ]
      then
        echo -e "\033[32;01mSUCCESS:\033[0m Compilation Successful!"
      else
        echo -e "\033[31;01mERROR:\033[0m Compilation Failed!"
      fi
fi
