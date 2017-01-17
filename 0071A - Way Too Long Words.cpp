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

int main()
{
	int n;
	
	cin>>n;
	while(n-->0){
		string str;
		cin>>str;
		if(str.length()<=10)
			cout<<str<<endl;
		else
			cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
	}
	
	
	return 0;
}
