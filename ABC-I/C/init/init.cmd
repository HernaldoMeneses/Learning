@echo off

rem set directory="structures"
rem set Script="01_structure.c"

set directory="var"
set Script="casting.c"

:functios_
cd .. & cd "%directory%" & dir & pause
gcc "%Script%" & pause
a.exe
goto :eof

call functions_
