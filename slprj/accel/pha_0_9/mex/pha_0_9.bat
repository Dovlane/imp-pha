@echo off
set MATLAB=C:\Program Files\MATLAB\R2023a
"%MATLAB%\bin\win64\gmake" -f pha_0_9.mk  OPTS="-DTID01EQ=0"
