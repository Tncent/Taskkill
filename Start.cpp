#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main() {
	string a;
	getline(cin,a);
	a.insert(0,"ntsd.exe -c q -pn ");
	system(a.c_str());
}
