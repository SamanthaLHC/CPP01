#!/bin/sh

echo "\nDEBUG=========================================================\n"
./HarlFilter DEBUG
echo "\nINFO=========================================================\n"

./HarlFilter INFO
echo "\nWARNING=========================================================\n"

./HarlFilter WARNING
echo "\nERROR=========================================================\n"

./HarlFilter ERROR
echo "\n WRONG PARAM=========================================================\n"

./HarlFilter pouet

echo "\nEMPTY PARAM========================================================\n"

./HarlFilter ""