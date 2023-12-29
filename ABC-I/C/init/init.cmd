@echo off

rem set directory="structures"
rem set Script="04_structure.c"

set directory="strings"
rem set Script="01_strings.c"
rem set Script="02_strings.c"
set Script="03_strings.c"

rem set directory="var"
rem set Script="casting.c"

:functios_
cd .. & cd "%directory%" & dir & pause
gcc "%Script%" & pause
a.exe
goto :eof

call functions_
