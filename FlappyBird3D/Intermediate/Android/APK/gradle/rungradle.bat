@echo off
setlocal
set GRADLEPATH=%~dp0
set GRADLE_CMD_LINE_ARGS=
:setupArgs
if ""%1""=="""" goto doneStart
set GRADLE_CMD_LINE_ARGS=%GRADLE_CMD_LINE_ARGS% %1
shift
goto setupArgs

:doneStart
subst Z: "%CD%"
pushd Z:
call "%GRADLEPATH%\gradlew.bat" %GRADLE_CMD_LINE_ARGS%
popd
subst Z: /d
