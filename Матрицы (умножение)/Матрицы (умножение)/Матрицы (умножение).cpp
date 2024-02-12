// ��

#include <iostream>
#include <random>

int main()
{
    // ��������� ���������� - ����������� ������� �� ����������� � ��������� 
    int n1, m1;
    int n2, m2;


    // ��������� �������� ��������� ��������
    int start = 0;
    int end = 5;


    while (true){
        // ������� � ������� ������ � ��������� ����
        printf("������� ��� ����� ����� ��� ������� ����������� ������� a: ");
        scanf_s("%d%d", &n1, &m1);

        printf("������� ��� ����� ����� ��� ������� ����������� ������� b: ");
        scanf_s("%d%d", &n2, &m2);
        
        printf("\n\n");

        if (n1 != m2) {
            printf("���������� ����� � ������ ������� ������ ��������� ��������� �������� �� ������ �������");
        }
        else {
            break;
        }
    }


    // ��������� ������ 
    int** a = new int* [n1];
    int** b = new int* [n2];
    int** c = new int* [n1];


    // �������� ������ ��� ������ ������ �������
    for (int i = 0; i < n1; i++) {
        a[i] = new int[m1];
    }
    for (int i = 0; i < n2; i++) {
        b[i] = new int[m2];
    }
    for (int i = 0; i < n1; i++) {
        c[i] = new int[m2];
    }

    // ��������� ������� a � b ���������� �������
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            a[i][j] = rand() % (end - start + 1);
        }
    }
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            b[i][j] = rand() % (end - start + 1);
        }
    }

    // ��������� ������
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < m1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    
    // ������� ������� � �������
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m1; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < m2; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < n1; i++) {
        delete[] a[i];
    }
    for (int i = 0; i < n2; i++) {
        delete[] b[i];
    }
    for (int i = 0; i < n2; i++) {
        delete[] c[i];
    }

    delete[] a;
    delete[] b;
    delete[] c;


    return 0;
}