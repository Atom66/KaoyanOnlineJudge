<<<<<<< HEAD
/*��Ŀ����: 
=======
/*
��Ŀ����: 
>>>>>>> be4136afe956a1db42a5093d6012701d8da66ca4
��һ���������ĳһ��ȵ����нڵ㣬���������Щ�ڵ㣬�������EMPTY����������ȫ��������
��������:
�����ж������ݡ�
ÿ������һ��n(1<=n<=1000)��Ȼ�����е���n���ڵ��������룬������һ��d������ȡ�
�������:
��������е�d������нڵ㣬�ڵ���ÿո���������һ���ڵ��û�пո�

����
4
1 2 3 4
2
���
2 3
*/

#include <stdio.h>
#include <math.h>
using namespace std;
int main(){
    int n;
    int d;
    int a[1002];
    while(scanf("%d",&n)!=EOF){
        for(int i=1;i<=n;i++){
            scanf("%d",&a[i]);
        }
        int k=int(log(n*1.0)/log(2.0));
        scanf("%d",&d);
<<<<<<< HEAD
        if(d>k){//if...else if������˳�����ᵼ�½����Ȼ��ͬ 
            printf("EMPTY\n"); 
=======
        if(d>k){//if...else if������˳�����ᵼ�½����Ȼ��ͬ
            printf("EMPTY\n");
>>>>>>> be4136afe956a1db42a5093d6012701d8da66ca4
        }
        else if(d<k){
            for(int i=(int)pow(2,d-1);i<(int)pow(2,d)-1;i++){
                printf("%d ",a[i]);
            }
            printf("%d\n",a[(int)pow(2,d)-1]);
        }
        else if(d=k){
            for(int i=(int)pow(2,d-1);i<n;i++){
                printf("%d ",a[i]);
            }
            printf("%d\n",a[n]);
        }
    }
    return 0;
}
