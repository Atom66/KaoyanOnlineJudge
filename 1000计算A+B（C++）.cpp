/*
题目描述：
求整数a，b的和。
输入：
测试案例有多行，每行为a，b的值。
输出：
输出多行，对应a+b的结果。

样例输入：
1 2
4 5
6 9
样例输出：
3
9
15
*/

#include<iostream>
using namespace std;
int main(){
	int a,b;
	while(cin >> a >> b){
		cout << a + b << endl;
	}
	return 0;
}
