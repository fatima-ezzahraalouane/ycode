#include <stdio.h>

int Trouvermax(int arr[], int max){
    int i;
    
    max = arr[0];
    for(i=1; i<7; i++){
        if(arr[i]>max)
        {
            max = arr[i];
        }  
    }
    return max;
}

int main(){
    int arr[7] = {1, 7, -7, 8, 119, 77, 90};
    int max;
   
    max = Trouvermax(arr, max);

    printf("Le Max est : %d \n", max);
    return 0;
}
