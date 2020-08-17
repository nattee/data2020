#include <iostream>

using namespace std;

main(){
	int N, M, R;
	cin >> N >> M >> R;
	int a[N][M];
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin >> a[i][j];
		}
	}
	for(int anscase=0;anscase<R;anscase++){
		int startR, startC, endR, endC;
		cin >> startR >> startC >> endR >> endC;
		startR-=1;
		startC-=1;
		endR-=1;
		endC-=1;
		if(startR>endR || startC>endC){
			cout << "INVALID" << endl;
			continue;
		}
		if(endR<0 || endC<0 || startR>N-1 || startC>M-1){
			cout << "OUTSIDE" << endl;
			continue;
		}
		if(startR<0) startR=0;
		if(startC<0) startC=0;
		//if(endR>N) endR=N;
		//if(endC>M) endC=M;
		if(endR>N-1) endR=N-1;
		if(endC>M-1) endC=M-1;
		int max = a[startR][startC]; // <---
		for(int i=startR;i<=endR;i++){
			for(int j=startC;j<=endC;j++){
				if(a[i][j]>max) max = a[i][j];
			}
		}
		cout << max << endl;
	}
}
