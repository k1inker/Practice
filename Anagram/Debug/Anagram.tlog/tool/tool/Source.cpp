#include <iostream>
#pragma warning(disable : 4996)
using namespace std;
/*
* ������� ������ � ���������
* @param result ������������ ������
*/
void toAnagramm(string result) {
    // ���� � ����� ������
    for (int i = result.length() - 1; i >= 1; i--)
    {
        // ��������� ������ ������� �� ������
        int j = rand() % result.length();
        // ������ �������
        char temp = result[j];
        // ������ �������
        result[j] = result[i];
        result[i] = temp;
    }
    // �����
    cout << "��������� - " << result;
}
/*
* �������� ������ ���������� � ������
* @param text ������ ������� �������������
* return ������������ ������
*/
string removeStr(char* text) {
    string result;
    // ���������� �� ��������� 
    char* buffer = strtok(text, ",.- ");
    // �� ����� ������
    while (buffer != NULL)
    {
        // ���������� �����
        result += buffer;
        buffer = strtok(NULL, " ,.-");
    }
    return result;
}