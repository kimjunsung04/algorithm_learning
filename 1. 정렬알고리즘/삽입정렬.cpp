#include <stdio.h>

int main(){
	int i, j, temp;
	int array[10] = {10,9,8,7,6,5,4,3,2,1};
	for(int i=0;i<9;i++){
		j = i;
		while(array[j] > array[j+1]){
			temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
			j--;
		}
	}

	for(int i=0;i<10;i++){
		printf("%d ", array[i]);
	}
}

// ���������� �ð����⵵ : O(N^2) 
// �� ���ڸ� ������ ��ġ�� �����ϸ� ���?
