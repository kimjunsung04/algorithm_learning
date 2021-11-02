#include <stdio.h>

int main(){
	int index, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for(int i=0;i<10;i++){
		for(int j=0;j<9-i;j++){
			if(array[j]>array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	
	for(int i=0;i<10;i++){
		printf("%d ", array[i]);
	}
}

// 버블정렬의 시간복잡도 : O(N^2) 
// 옆에있는 값과 비교하여 더 작은값을 앞으로 
