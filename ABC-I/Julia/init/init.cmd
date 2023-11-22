@echo off

set directory="functions"
set Script="01_init_01.jl"

:functios_
rem cd .. & cd "%directory%" & dir & pause
cd ..  & dir & pause
julia "%Script%" & pause
rem a.exe
goto :eof

call functions_
