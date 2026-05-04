#!/bin/bash
echo "===================================="
echo " Сборка проекта DayBook3"
echo "===================================="

echo "[1/3] Установка зависимостей..."
pacman -S --needed --noconfirm mingw-w64-ucrt-x86_64-qt6-base mingw-w64-ucrt-x86_64-cmake mingw-w64-ucrt-x86_64-gcc

echo "[2/3] Сборка проекта..."
mkdir -p build && cd build
cmake .. -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Release
cmake --build .

echo "[3/3] Копирование библиотек..."
windeployqt6 DayBook3.exe
cp /ucrt64/bin/libgcc_s_seh-1.dll .
cp /ucrt64/bin/libstdc++-6.dll .
cp /ucrt64/bin/libwinpthread-1.dll .

echo "===================================="
echo " Сборка завершена успешно!"
echo " Программа: build/DayBook3.exe"
echo "===================================="
