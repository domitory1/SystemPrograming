#include <iostream>
#include <random>

int main()
{
    // ��������� ���������� - ����������� ������� �� ����������� � ��������� 
    int n, m;


    // ��������� �������� ��������� ��������
    int start = 0;
    int end = 1000;


    // ������� � ������� ������ � ��������� ����  
    printf("������� ��� ����� ����� ��� ������� ����������� ������: ");
    scanf_s("%d%d", &n, &m);


    // ��������� ������ 
    int** a = new int* [n];


    // �������� ������ ��� ������ ������ �������
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }


    // ��������� ������� a � b ���������� �������
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = rand() % (end - start + 1);
        }
    }

    // ������� ������� � �������
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}