#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DICTSIZE 4                                     //字典内最大单词数
#define WORDSIZE 21                                    //单词最大长度 + 1

char puzzle[4][4] = {
    { 't', 'h', 'i', 's' },
    { 'w', 'a', 't', 's' },
    { 'o', 'a', 'h', 'g' },
    { 'f', 'g', 'g', 't' },
};                                                        //字谜
char * dict[DICTSIZE] = { "this", "two", "fat", "that" }; //字典

int wordExist(int x, int y, int dir, int maxChars, char * retWord);

int main(void)
{    
    char word[WORDSIZE];

    for (int i = 0; i < 4; i++)                       　　//行
    {
        for (int j = 0; j < 4; j++)                   　　//列
        {
            for (int d = 0; d < 8; d++)              　　 //方向
            {
                for (int n = 1; n <= 4; n++)          　　//最大字符数
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
查找是否有单词存在
如果有，将找到的第一个单词写入retWord
查找位置(x, y)，方向dir
*/
int wordExist(int x, int y, int dir, int maxChars, char * retWord)
{
    char str[WORDSIZE];
    int ct = 0;
    int k = 0;

    for (int i = 0; i < maxChars; i++)
    {
        //添加(x, y)处的一个字符
        str[ct] = puzzle[x][y];
        str[ct + 1] = '\0';
        
        //拿str到字典内遍历
        for (int j = 0; j < DICTSIZE; j++)
        {
            if (strcmp(str, dict[j]) == 0)
            {
                strcpy(retWord, dict[j]);
                return 1;
            }
        }
        ct++;

        //确定下一个字符位置(x,y)
        switch (dir)
        {
        case 0:        //从左到右
            y++;
            break;
        case 1:        //从右到左
            y--;
            break;
        case 2:        //从上到下
            x++;
            break;
        case 3:        //从下到上
            x--;
            break;
        case 4:        //从左上到右下
            x++;
            y++;
            break;
        case 5:        //从右下到左上
            x--;
            y--;
            break;
        case 6:        //从右上到左下
            x--;
            y++;
            break;
        case 7:        //从左下到右上
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