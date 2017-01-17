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
	char ch, ch1, ch2;
	string legal = "YES";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0 && j==0)
				cin>>ch1;
			else if(i==0 && j==1){
				cin>>ch2;
				if(ch1==ch2)
					legal = "NO";
			}
			else{
				cin>>ch;
				if((i==j)||(i+j==n-1)){
					if(ch!=ch1)
						legal = "NO";
				}else{
					if(ch!=ch2)
						legal = "NO";
				}
			}
		}
	}
	cout<<legal;
	return 0;
}
