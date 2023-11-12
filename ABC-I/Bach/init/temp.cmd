@echo off
for /f "delims=" %%a in ('echo LineByLine') do set title=%%a
start "%title%" cmd
pause
Exit