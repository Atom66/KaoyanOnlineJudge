/*
��Ŀ������ 
������������һ������һ����n����ʾҶ���ĸ�������Ҫ����ЩҶ������ɹ������������ݹ��������ĸ����Щ�����Ȩֵ����weight����Ŀ��Ҫ������н���ֵ��Ȩֵ�ĳ˻�֮�͡�
��������:
�����ж������ݡ�
ÿ���һ������һ����n����������n��Ҷ�ڵ㣨Ҷ�ڵ�Ȩֵ������100��2<=n<=1000����
�������:
���Ȩֵ��

����
5  
1 2 2 5 9
���
37
*/

#include <stdio.h>
#include <queue>
using namespace std;
priority_queue<int,vector<int>,greater<int> > Q; //���һ��>ǰ�Ŀո����� 
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        while(Q.empty()==false) Q.pop();
        for(int i=1;i<=n;i++){
            int x;
            scanf("%d",&x);
            Q.push(x);
        }
        int ans=0;
        while(Q.size()>1){
            int a=Q.top();
            Q.pop();
            int b=Q.top();
            Q.pop();
            ans+=a+b;
            Q.push(a+b);
        }
        printf("%d\n",ans);
    }
    return 0;
}
