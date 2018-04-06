/*
��Ŀ������
��������N(N>1)���������ĸ�����
��ͬ����������Ҫ�ظ����㡣��120=2*2*2*3*5������5����������
���룺
�����ж���������ݣ�ÿ��������ݵ�������һ��������N��(1<N<10^9)��
�����
����ÿ�����ݣ����N���������ĸ�����

�������룺
120
���������
5
��ʾ��
ע�⣺1����N������������NΪ������N��N����������
*/

#include <stdio.h>
bool mark[100001];
int prime[100001];
int primeSize;
void init(){
    primeSize=0;
    for(int i=2;i<=100000;i++){
        if(mark[i]==true) continue;
        prime[primeSize++]=i;
        if(i>=1000) continue;
        for(int j=i*i;j<=100000;j+=i){
            mark[j]=true;
        }
    }
}
int main(){
    init();
    int n;
    while(scanf("%d",&n)!=EOF){
        int ansPrime[30];
        int ansSize=0;
        int ansNum[30];
        for(int i=0;i<primeSize;i++){
            if(n%prime[i]==0){
                ansPrime[ansSize]=prime[i];
                ansNum[ansSize]=0;
                while(n%prime[i]==0){
                    ansNum[ansSize]++;
                    n/=prime[i];
                }
                ansSize++;
                if(n==1) break;
            }
        }
        if(n!=1){
            ansPrime[ansSize]=n;
            ansNum[ansSize++]=1;
        }
        int ans=0;
        for(int i=0;i<ansSize;i++){
            ans+=ansNum[i];
        }
        printf("%d\n",ans);
    }
    return 0;
}
