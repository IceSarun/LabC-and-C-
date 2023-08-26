#include <stdio.h>
void exchange_int(int *x,int *y, int count){
    int temp[count];
    for(int i=0;i<count;i++){
        temp[i]=x[i];
    }
    
    for(int i=0;i<count;i++){
        x[i]=y[i];
    }
    for(int i=0;i<count;i++){
        y[i]=temp[i];
    }
}



void print_array(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int x = 1;
    int y = 2;
    int arr_x[] = {1, 2, 3, 4, 5};
    int arr_y[] = {6, 7, 8, 9, 10};

    exchange_int(&x, &y, 1);
    printf("%d %d\n", x, y);
    // // ผลลัพธ์ที่แสดงคือ
    // // 2 1

    exchange_int(arr_x, arr_y, 5);
    print_array(arr_x, 5);
    // ผลลัพธ์ที่แสดงคือ
    // 6 7 8 9 10

    print_array(arr_y, 5);
    // ผลลัพธ์ที่แสดงคือ
    // 1 2 3 4 5
}


