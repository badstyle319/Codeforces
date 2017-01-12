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

void reorder(string &s){
	for(int i=0;i<s.length();i++){
		if((i+1)<s.length()){
			if(s[i]=='B' && s[i+1]=='G'){
				swap(s[i], s[i+1]);
				i++;
			}
		}
	}
	
}

int main()
{
	#ifdef CF
		freopen("in.txt", "r", stdin);
	#endif

	int n, t;
	string input;
	
	cin>>n>>t>>input;
	while(t-->0)
		reorder(input);
	cout<<input;
	
	#ifdef CF
		fclose(stdin);
	#endif
	
	return 0;
}
