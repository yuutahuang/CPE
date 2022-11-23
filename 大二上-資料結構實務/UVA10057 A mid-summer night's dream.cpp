#include<stdio.h>
#include<stdlib.h>
int x[1000000];
int compare(const void *a, const void *b)
{
    return(*(int*)a - *(int*)b);
}
int main()
{
    int n, A1, A2, count;
    while(scanf("%d", &n) != EOF){
        for(int i = 0; i < n; i++) scanf("%d", &x[i]);
        qsort(x, n, sizeof(int), compare);
        A1 = x[(n - 1) / 2];
        A2 = x[n / 2];
        count = 0;
        for(int i = 0; i < n; i++){
            if(x[i] == A1 || x[i] == A2){
                count++;
            }
        }
        printf("%d %d %d\n", A1, count, A2 - A1 + 1);
    }
}
