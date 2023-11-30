@echo off

set directory="structures"
set Script="02_structure.c"

rem set directory="var"
rem set Script="casting.c"

:functios_
cd .. & cd "%directory%" & dir & pause
gcc "%Script%" & pause
a.exe
goto :eof

call functions_
