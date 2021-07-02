/**
* @file Anagram.cpp
* @author Пензенский Є.Г., гр. 515-а
* @date 19 июнь 2021
* @brief Практическая работа
*
* Перевод строки в Анаграмму
*/
// подключение библиотек
#include <iostream>
#include <time.h>
#include <Windows.h>
#include "Debug/Anagram.tlog/tool/tool/Source.cpp"
#pragma warning(disable : 4996)
// using-директива сообщает компилятору, что мы используем все объекты из пространства имен std

// главная функция
int main()
{
    // замена шрифта в консоле
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    // выделение памяти под указатель
    char* text = (char*)malloc(1024);
    cout << "Введите текст для перевода в анаграмму: ";
    // считывание до символа новой строки
    cin.getline(text, 1024);
    // вызов функций
    toAnagramm(removeStr(text));
}