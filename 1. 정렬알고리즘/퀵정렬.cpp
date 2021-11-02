#include <stdio.h>

int num = 10;
int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

void quickSort(int *array, int start, int end) {
	if(start >= end){
		return;
	}
	
	int key = start; // 키는 첫번째 원소
	int i = start + 1;
	int j = end;
	int temp;
	
	while(i <= j) { // 엇갈릴 때까지 반복 
		while(array[i] <= array[key]) { // 키 값보다 큰 값 
			i++;
		}
		while(array[j] >= array[key] && j > start) { // 키 값보다 작은 값을 만날 때까지 
			j--;
		}
		if(i > j) { // 현재 엇가린 상태면 키 값과 교체 
			temp = array[j];
			array[j] = array[key];
			array[key] = temp;
		}
		else{
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
		}
	}
	quickSort(array, start, j-1);
	quickSort(array, j+1, end); 
}

void show(void) {
	for(int i=0;i<num;i++){
		printf("%d ", array[i]);
	}
}

int main() {
	quickSort(array, 0, num - 1);
	show();
}

// 시간복잡도 : O"(N*logN)
// 최악 시간복잡도 : O"(N^2)
// EX) 1 2 3 4 5 6 7 8 9 (이미 정렬된 경우) 
