#include <stdio.h>
long long a[10000];
int main()
{
    int t, n;
    scanf("%d",&t); //����ƶq
    for (int i=0;i<t;i++){
        scanf(" N = %d",&n); //�x�}�j�p
        for (int j=0; j<n*n; j++) scanf("%lld",&a[j]); //��J����
        int i=0, j=n*n-1;
        while (i<=j){
            if(a[i] != a[j]) break; //��٤������۵�
            if (a[i]<0) break; //�������t��
            i++, j--; //��٤����ۦP�A�~����
        }
        if (i>j) printf("Test #%d: Symmetric.\n",t);
        else printf("Test #%d: Non-symmetric.\n",t);
    }
}
