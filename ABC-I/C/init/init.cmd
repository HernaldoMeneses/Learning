@echo off

set directory="functions"
set Script="03_functions.c"

:functios_
cd .. & cd "%directory%" & dir & pause
gcc "%Script%" & pause
a.exe & pause
goto :eof

call functions_
