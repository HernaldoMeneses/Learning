@echo off

rem set directory="structures"
rem set Script="04_structure.c"

set directory="strings"
set Script="01_strings.c"

rem set directory="var"
rem set Script="casting.c"

:functios_
cd .. & cd "%directory%" & dir & pause
gcc "%Script%" & pause
a.exe
goto :eof

call functions_
