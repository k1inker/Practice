/**
* @file Anagram.cpp
* @author ���������� �.�., ��. 515-�
* @date 19 ���� 2021
* @brief ������������ ������
*
* ������� ������ � ���������
*/
// ����������� ���������
#include <iostream>
#include <time.h>
#include <Windows.h>
#include "Debug/Anagram.tlog/tool/tool/Source.cpp"
#pragma warning(disable : 4996)
// using-��������� �������� �����������, ��� �� ���������� ��� ������� �� ������������ ���� std

// ������� �������
int main()
{
    // ������ ������ � �������
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    setlocale(LC_ALL, "Russian");
    // ��������� ������ ��� ���������
    char* text = (char*)malloc(1024);
    cout << "������� ����� ��� �������� � ���������: ";
    // ���������� �� ������� ����� ������
    cin.getline(text, 1024);
    // ����� �������
    toAnagramm(removeStr(text));
}