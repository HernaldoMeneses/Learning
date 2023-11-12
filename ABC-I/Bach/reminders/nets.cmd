@echo off
set /p "minhaString=Wife Rede Name: "
echo Lets Go: %minhaString%

rem set WifeName="ANGELA"
set WifeName=%minhaString%
netsh wlan show profile name=%WifeName% key=clear
pause