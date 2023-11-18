#include <stdio.h>
#define N 100
int main() {
    char str[N];
    printf("Enter a string : ");
    gets(str);
    float counts[256] = { 0 };
    int j;
    float numb[12];
    int sum = 0;
    int len = strlen(str);
    float a = 0;
  
    for (j = 0; j < len; j++)
    {
        counts[str[j]] = counts[str[j]] + 1;
    }
    for (j = 0; j < 256; j++)
    {
        sum = sum+  counts[j];
    }
    
    numb[0] = 100*(counts[97] / sum);//a
    numb[1] = 100 * (counts[101] / sum);//e
    numb[2] = 100 * (counts[105] / sum);//i
    numb[3] = 100 * (counts[111] / sum);//o
    numb[4] = 100 * (counts[117] / sum);//u
    numb[5] = 100 * (counts[121] / sum);//y
    numb[6] = 100 * (counts[65] / sum);//A
    numb[7] = 100 * (counts[69] / sum);//E
    numb[8] = 100 * (counts[73] / sum);//I
    numb[9] = 100 * (counts[79] / sum);//O
    numb[10] = 100 * (counts[85] / sum);//U
    numb[11] = 100 * (counts[89] / sum);//Y

  /*  for (int h = 0; h < 11; ++h) //Сортуваня чисел
    {
        for (j = h + 1; j < 12; ++j)
        {
            if (numb[h] < numb[j])
            {
                a = numb[h];
                numb[h] = numb[j];
                numb[j] = a;
            }
        }
    }*/

  /*  for (int h = 0; h < 12; h++) // Вивід 1
    {
        printf("%lf\n", numb[h]);
  }*/

  

    printf(" a occurs %2.lf%%.\n", numb[0]); //Вивід 2
    printf(" e occurs %2.lf%%.\n", numb[1]);
    printf(" i occurs %2.lf%%.\n", numb[2]);
    printf(" o occurs %2.lf%%.\n", numb[3]);
    printf(" u occurs %2.lf%%.\n", numb[4]);
    printf(" y occurs %2.lf%%.\n", numb[5]);
    printf(" A occurs %2.lf%%.\n", numb[6]);
    printf(" E occurs %2.lf%%.\n", numb[7]);
    printf(" I occurs %2.lf%%.\n", numb[8]);
    printf(" O occurs %2.lf%%.\n", numb[9]);
    printf(" U occurs %2.lf%%.\n", numb[10]);
    printf(" Y occurs %2.lf%%.\n", numb[11]);
    return 0;
}
