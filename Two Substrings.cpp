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

// static int dx[] = {-1,-1,-1,0,0,1,1,1};
// static int dy[] = {-1,0,1,-1,1,-1,0,1};

int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
	#endif

	string input;
	
	int cntXXX=0, cntAB=0, cntBA=0;
	
	cin>>input;
	for(int i=0;i<input.length();){
		if(input.substr(i, 3)=="ABA" || input.substr(i, 3)=="BAB"){
			cntXXX++;
			i+=3;
		}else if(input.substr(i, 2)=="AB"){
			cntAB++;
			i+=2;
		}else if(input.substr(i, 2)=="BA"){
			cntBA++;
			i+=2;
		}else
			i++;
	}
	if(cntXXX>=2 || (cntXXX && (cntAB || cntBA)) ||(cntAB && cntBA) )
		cout<<"YES";
	else
		cout<<"NO";
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
