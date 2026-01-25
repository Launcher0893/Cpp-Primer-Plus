@echo off
echo 正在清理编译生成的可执行文件...
echo.

:: 删除所有.exe文件
for /r %%f in (*.exe) do (
    echo 删除: %%f
    del "%%f"
)

echo.
echo 清理完成！
pause
