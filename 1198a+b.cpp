/* 
��Ŀ������
ʵ��һ���ӷ�����ʹ���ܹ����a+b��ֵ��
���룺
�������������a��b������a��b��λ��������1000λ��
�����
�����ж���������ݣ�����ÿ�����ݣ�
���a+b��ֵ��

�������룺
2 6
10000000000000000000 10000000000000000000000000000000
���������
8
10000000000010000000000000000000
*/

#include <stdio.h>
#include <string.h>
struct bigInteger{
    int digit[1000];
    int size;
    void init(){
        for(int i=0;i<1000;i++) digit[i]=0;
        size=0;
    }
    void set(char str[]){
        init();
        int L=strlen(str);
        for(int i=L-1,j=0,t=0,c=1;i>=0;i--){
            t+=(str[i]-'0')*c;
            j++;
            c*=10;
            if(j==4 || i==0){
                digit[size++]=t;
                j=0;
                t=0;
                c=1;
            }
        }
    }
    void output(){
        for(int i=size-1;i>=0;i--){
            if(i!=size-1) printf("%04d",digit[i]);
            else printf("%d",digit[i]);
        }
        printf("\n");
    }
    bigInteger operator + (const bigInteger &A) const {
        bigInteger ret;
        ret.init();
        int carry=0;
        for(int i=0;i<A.size || i<size;i++){
            int tmp=A.digit[i]+digit[i]+carry;
            carry=tmp/10000;
            tmp%=10000;
            ret.digit[ret.size++]=tmp;
        }
        if(carry!=0){
            ret.digit[ret.size++]=carry;
        }
        return ret;
    }
}a,b,c;
char str1[1002],str2[1002];
int main(){
    while(scanf("%s%s",str1,str2)!=EOF){
        a.set(str1);b.set(str2);
        c=a+b;
        c.output();
    }
    return 0;
}
