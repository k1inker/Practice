#include <iostream>
#include <time.h>
#pragma warning(disable : 4996)
using namespace std;
void toAnagramm(string result) {

    for (int i = result.length() - 1; i >= 1; i--)
    {
        int j = rand() % result.length();
        char temp = result[j];
        result[j] = result[i];
        result[i] = temp;
    }
    cout << "Анаграмма - " << result;
}
string removeSigns(char* text) {
    srand(time(0));
    string result;
    char* buffer = strtok(text, ",.- ");
    while (buffer != NULL)
    {
        result += buffer;
        buffer = strtok(NULL, " ,.-");
    }
    return result;
}

int main()
{  
    setlocale(LC_ALL, "Russian");
    char* text = (char*)malloc(1024);
    cout << "Введите текст для перевода в анаграмму\n";
    cin.getline(text, 1024);
    toAnagramm(removeSigns(text));
}