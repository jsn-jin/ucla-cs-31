#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
	string s = "hello";
	for(int i = 0; i < s.size(); i++){
		putchar(toupper(s[i]));
	}
}