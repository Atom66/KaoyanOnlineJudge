/*��Ŀ����:
����һ�����������ŵı��ʽ���м���
��������:
���ڶ������ݣ�ÿ������һ�У����ʽ�����ڿո�
�������:
������

����
6/2+3+3*4
���
18
*/

#include <stdio.h>
#include <stack>
using namespace std;
char str[220];
int mat[][5]={
    1,0,0,0,0,
    1,0,0,0,0,
    1,0,0,0,0,
    1,1,1,0,0,
    1,1,1,0,0,
};
stack<double> in;
stack<int> op;
void getOp(bool &reto,int &retn,int &i){
    if(i==0&&op.empty()==true){
        reto=true;
        retn=0;
        return;
    }
    if(str[i]==0){
        reto=true;
        retn=0;
        return;
    }
    if(str[i]>='0'&&str[i]<='9'){
        reto=false;
    }
	else{
        reto=true;
        if(str[i]=='+'){
            retn=1;
        }
        else if(str[i]=='-'){
            retn=2;
        }
        else if(str[i]=='*'){
            retn=3;
        }
        else if(str[i]=='/'){
            retn=4;
        }
        i++;
        return;
    }
    retn=0;
    for(;str[i]>='0'&&str[i]<='9';i++){//���˺þã�ԭ������һ�η������ִ���
    	retn=retn*10+str[i]-'0';
	}
    return;
}
int main(){
        gets(str);
        bool retop;
        int retnum;
        int idx=0;
        while(!in.empty()) in.pop();
        while(!op.empty()) op.pop();
        while(true){
            getOp(retop,retnum,idx);
            if(retop==false){
                in.push((double)retnum);
            }
            else{
                double tmp;
                if(op.empty()==true||mat[retnum][op.top()]==1){
                    op.push(retnum);
                }
                else{
                    while(mat[retnum][op.top()]==0){
                        int ret=op.top();
                        op.pop();
                        double b=in.top();
                        in.pop();
                        double a=in.top();
                        in.pop();
                        if(ret==1) tmp=a+b;
                        else if(ret==2) tmp=a-b;
                        else if(ret==3) tmp=a*b;
                        else tmp=a/b;
                        in.push(tmp);
                    }
                    op.push(retnum);
                }
            }
            if(op.size()==2&&op.top()==0) break;
        }
        printf("%.0f\n",in.top());
}
