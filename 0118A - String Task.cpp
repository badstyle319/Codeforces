#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>

#define LL long long
#define ULL unsigned long long
#define PI 3.14159265

using namespace std;

static int dx[] = {-1,-1,-1,0,0,1,1,1};
static int dy[] = {-1,0,1,-1,1,-1,0,1};

int isVowels(char ch){
	switch(tolower(ch)){
		case 'a':
		case 'o':
		case 'y':
		case 'e':
		case 'u':
		case 'i':
			return 1;
	}
	return 0;
}

int main()
{
	string str;
	cin>>str;
	
	for(int i=0;i<str.length();i++)
		str[i] = tolower(str[i]);
	for(int i=str.length()-1;i>=0;i--)
		if(isVowels(str[i]))
			str.erase(i, 1);
	for(int i=str.length()-1;i>=0;i--)
		if(!isdigit(str[i]))
			str.insert(i, 1, '.');
	
	cout<<str;
	return 0;
}
