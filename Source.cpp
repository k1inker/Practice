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
#pragma warning(disable : 4996)
// using-директива сообщает компилятору, что мы используем все объекты из пространства имен std
using namespace std;
/*
* перевод текста в анаграмму
* @param result обработанная строка
*/
void toAnagramm(string result) {
    // цикл с конца строки
    for (int i = result.length() - 1; i >= 1; i--)
    {
        // случайный адресс символа из строки
        int j = rand() % result.length();
        // запись символа
        char temp = result[j];
        // меняем местами
        result[j] = result[i];
        result[i] = temp;
    }
    // вывод
    cout << "Анаграмма - " << result;
}
/*
* убирания знаков припинания с строки
* @param text строка веденая пользователем
* return обработанную строку
*/
string removeStr(char* text) {
    string result;
    // разделение на подстроки 
    char* buffer = strtok(text, ",.- ");
    // до конца строки
    while (buffer != NULL)
    {
        // добавление строк
        result += buffer;
        buffer = strtok(NULL, " ,.-");
    }
    return result;
}
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
