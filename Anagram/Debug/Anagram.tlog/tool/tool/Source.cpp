#include <iostream>
#pragma warning(disable : 4996)
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