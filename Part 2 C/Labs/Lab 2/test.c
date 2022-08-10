#include <stdio.h>

int fun(int s[][4], int n, int k);

int main()

{

   int a[4][4] = { {1,2,3,4},{11,12,13,14},{21,22,23,24},{31,32,33,34}};

   printf("%d\n",fun(a,4,0));

   return 0;

}

int fun(int s[][4], int n, int k)

{

   int m,i;

   m=s[0][k];

   for (i=0;i<n;i++)

      if (s[i][k]>m) m=s[i][k];

   return m;

}