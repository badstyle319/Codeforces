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
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
	#endif
	
	string input;
	
	cin>>input;
	while(input.substr(0, 3)=="WUB")
		input.erase(0, 3);

	int flag = 0;
	for(int i=0;i<input.length();i++){
		if(input.substr(i, 3)=="WUB"){
			flag = 1;
			i+=2;
		}else{
			if(flag){
				cout<<" ";
				flag = 0;
			}
			cout<<input[i];
		}
	}

	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
