/*��Ŀ������
��Ҫ��ʱ�򣬾Ͱ�һ������С��һȦ�Ŀ����ȥ��ʹ�ô������¿�ʱ���߿�ɫ���������������Ҫ�ü��������ɣ��ÿ�����ˡ� 
��������:
������һ��������Ԫ�飬�ֱ��ǣ����ߴ�n��nΪ����0<n<80���������������Ļ�ɫ�ַ������ɫ�ַ�������߶�ΪASCII�ɼ��ַ���
�������:
�������һ��Ŀ�ͼ�������Ļ�ɫ�����ɫ�ַ����ڲ��𽻴������������ʱ�������Ľ����Ǳ���ĥ�������������֮��Ӧ��һ�м����

����
11 B A
5 @ W
���
AAAAAAAAA 
ABBBBBBBBBA
ABAAAAAAABA
ABABBBBBABA
ABABAAABABA
ABABABABABA
ABABAAABABA
ABABBBBBABA
ABAAAAAAABA
ABBBBBBBBBA
 AAAAAAAAA 

 @@@ 
@WWW@
@W@W@
@WWW@
 @@@ 

*/

#include <stdio.h>
int main(){
    int outPutBuf[82][82];
    char a,b;
    int n;
    bool firstCase=true;
    while(scanf("%d %c %c",&n,&a,&b)==3){
        if(firstCase==true){
            firstCase=false;
        }
        else printf("\n");
        for(int i=1,j=1;i<=n;i+=2,j++){
            int x=n/2+1,y=x;
            x-=j-1;y-=j-1;
            char c=j%2==1?a:b;
            for(int k=1;k<=i;k++){
                outPutBuf[x+k-1][y]=c;
                outPutBuf[x][y+k-1]=c;
                outPutBuf[x+i-1][y+k-1]=c;
                outPutBuf[x+k-1][y+i-1]=c;
            }
        }
        if(n!=1){
            outPutBuf[1][1]=' ';
            outPutBuf[n][1]=' ';
            outPutBuf[1][n]=' ';
            outPutBuf[n][n]=' ';
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                printf("%c",outPutBuf[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
