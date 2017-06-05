#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DICTSIZE 4                                     //�ֵ�����󵥴���
#define WORDSIZE 21                                    //������󳤶� + 1

char puzzle[4][4] = {
    { 't', 'h', 'i', 's' },
    { 'w', 'a', 't', 's' },
    { 'o', 'a', 'h', 'g' },
    { 'f', 'g', 'g', 't' },
};                                                        //����
char * dict[DICTSIZE] = { "this", "two", "fat", "that" }; //�ֵ�

int wordExist(int x, int y, int dir, int maxChars, char * retWord);

int main(void)
{    
    char word[WORDSIZE];

    for (int i = 0; i < 4; i++)                       ����//��
    {
        for (int j = 0; j < 4; j++)                   ����//��
        {
            for (int d = 0; d < 8; d++)              ���� //����
            {
                for (int n = 1; n <= 4; n++)          ����//����ַ���
                {
                    if (wordExist(i, j, d, n, word))
                    {
                        printf("%s\n", word);
                        break;
                    }
                }
            }
        }
    }

    system("pause");
    return 0;
}

/*
�����Ƿ��е��ʴ���
����У����ҵ��ĵ�һ������д��retWord
����λ��(x, y)������dir
*/
int wordExist(int x, int y, int dir, int maxChars, char * retWord)
{
    char str[WORDSIZE];
    int ct = 0;
    int k = 0;

    for (int i = 0; i < maxChars; i++)
    {
        //���(x, y)����һ���ַ�
        str[ct] = puzzle[x][y];
        str[ct + 1] = '\0';
        
        //��str���ֵ��ڱ���
        for (int j = 0; j < DICTSIZE; j++)
        {
            if (strcmp(str, dict[j]) == 0)
            {
                strcpy(retWord, dict[j]);
                return 1;
            }
        }
        ct++;

        //ȷ����һ���ַ�λ��(x,y)
        switch (dir)
        {
        case 0:        //������
            y++;
            break;
        case 1:        //���ҵ���
            y--;
            break;
        case 2:        //���ϵ���
            x++;
            break;
        case 3:        //���µ���
            x--;
            break;
        case 4:        //�����ϵ�����
            x++;
            y++;
            break;
        case 5:        //�����µ�����
            x--;
            y--;
            break;
        case 6:        //�����ϵ�����
            x--;
            y++;
            break;
        case 7:        //�����µ�����
            x++; 
            y--;
            break;
        default:
            puts("Direction error.");
            return 0;
        }
    }
    return 0;
}