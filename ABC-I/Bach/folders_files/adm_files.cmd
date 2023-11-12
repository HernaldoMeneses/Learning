set pwd=%cd% & pause
echo "%pwd%" & pause
cd / & pause
dir & pause
cd /d "%pwd%" & pause
dir & pause

pause
c:
cd %pwd%
dir & pause

cd / & dir & pause
cd %userprofile%\desktop
dir & pause
mkdir temp_files
cd temp_files
echo. > hello_.txt
echo "Hello, World!" > hello.txt
echo echo "Hello, World!" > index.bat
echo echo "Hello, World!" > index.cmd
echo "<html><body><h1>Hello, World!</h1></body></html>" > index.html
pause
cd..
move temp_files %pwd%
cd %pwd%
dir & pause
cd temp_files
rename hello_.txt hello_renameded.txt
rename index.bat index_renameded.bat
type index_renameded.bat & pause
dir & pause