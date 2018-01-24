/*��Ŀ������ 
����n���������밴�Ӵ�С��˳���������ǰm������� 
��������:
ÿ��������������У���һ����������n,m(0<n,m<1000000)���ڶ��а���n��������ͬ���Ҷ���������[-500000,500000]��������
�������:
��ÿ��������ݰ��Ӵ�С��˳�����ǰm�������

����
5 3
3 -35 92 213 -644
���
213 92 3 
*/

#include <stdio.h>
#define OFFSET 500000
int Hash[1000001];

int main(){
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF){
        for(int i=-500000;i<=500000;i++){
        Hash[i+OFFSET]=0;
        }
        for(int i=1;i<n;i++){
        int x;
        scanf("%d",&x);
        Hash[x+OFFSET]=1;
        }
        for(int i=500000;i>=-500000;i--){
            if(Hash[i+OFFSET]==1){
                printf("%d",i);
                m--;
                if(m!=0) printf(" ");
                else{
                    printf("\n");
                    break;
                }
            }
        }
    }
    return 0;
}
