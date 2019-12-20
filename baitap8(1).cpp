#include <stdio.h>
bool timkiemso (int a[],unsigned int x,int n){
	for (int i=0; i<n; i++){
	 	if (n==a[i]){
			return true;
	
		}	
		return false;
	}
	}


int main (){
	int ary[5]={1,2,3,4,5};
	timkiemso(ary,5,7);
	return 0;
}
