@echo off
setlocal enabledelayedexpansion
chcp 65001 >nul

echo ====================================
echo  Автоматическая установка и сборка
echo ====================================
echo.

:: Проверяем, есть ли MSYS2
set MSYS2_PATH=C:\msys64
if exist "%MSYS2_PATH%\ucrt64.exe" (
    echo [OK] MSYS2 найден в %MSYS2_PATH%
    goto :build
)

echo MSYS2 не найден. Скачиваю установщик...
curl -L -o msys2-installer.exe https://github.com/msys2/msys2-installer/releases/latest/download/msys2-x86_64-latest.exe
if %ERRORLEVEL% neq 0 (
    echo [ОШИБКА] Не удалось скачать установщик MSYS2.
    echo Скачайте и установите MSYS2 вручную с https://www.msys2.org/
    pause
    exit /b 1
)

echo Устанавливаю MSYS2. Не закрывайте окно...
msys2-installer.exe install --confirm-command --root %MSYS2_PATH%
del msys2-installer.exe

echo.
echo [OK] MSYS2 установлен. Запускаю сборку...

:build
:: Запускаем MSYS2 и передаём команду на выполнение build.sh
set PROJECT_DIR=%CD:\=/%
set PROJECT_DIR=%PROJECT_DIR::=%
set PROJECT_DIR=/%PROJECT_DIR%

%MSYS2_PATH%\usr\bin\bash.exe -lic "cd %PROJECT_DIR% && bash build.sh"
if %ERRORLEVEL% neq 0 (
    echo.
    echo [ОШИБКА] Сборка завершилась с ошибкой.
    pause
    exit /b 1
)

echo.
echo ====================================
echo  Готово! Запустите DayBook3.exe из папки build
echo ====================================
pause
