#include <stdio.h>

int main_printscanf() {

    // ������Ʈ 
    // �������� ���������� ������ �Լ�
    // �̸�? ���� ������? Ű? ���˸�?

    char name[256];
    printf("�̸��� ������?");
    scanf_s("%s", name, sizeof(name));

    int age;
    printf("���̴�?");
    scanf_s("%d", &age);

    int weight;
    printf("�����Դ�?");
    scanf_s("%d", &weight);

    int height;
    printf("Ű��?");
    scanf_s("%d", &height);

    char crime[256];
    printf("�˸��� ������?");
    scanf_s("%s", crime, sizeof(crime));


    printf("�̸�: %s, ����: %d, ������: %d, Ű: %d, ���˸�: %s\n", name, age, weight, height, crime);


    return 0;
}