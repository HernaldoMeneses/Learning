@echo off

set directory="structures"
set Script="03_structure.c"

rem set directory="var"
rem set Script="casting.c"

:functios_
cd .. & cd "%directory%" & dir & pause
gcc "%Script%" & pause
a.exe
goto :eof

call functions_
