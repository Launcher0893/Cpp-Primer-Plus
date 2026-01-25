@echo off
echo Cleaning compiled executable files...
echo.

:: Delete all .exe files
for /r %%f in (*.exe) do (
    echo Deleting: %%f
    del "%%f"
)

echo.
echo Cleaning completed!
pause
