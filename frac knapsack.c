#include <stdio.h>

struct item {
    int weight, value;
    float ratio;
};

int main() {
    int n, i, j, capacity;
    float total = 0;

    printf("Enter number of items: ");
    scanf("%d",&n);

    struct item arr[n];

    for(i=0;i<n;i++){
        printf("Value and Weight: ");
        scanf("%d%d",&arr[i].value,&arr[i].weight);
        arr[i].ratio = (float)arr[i].value / arr[i].weight;
    }

    printf("Enter capacity: ");
    scanf("%d",&capacity);

    // sort by ratio
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i].ratio < arr[j].ratio){
                struct item temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(i=0;i<n;i++){
        if(capacity >= arr[i].weight){
            total += arr[i].value;
            capacity -= arr[i].weight;
        } else {
            total += arr[i].ratio * capacity;
            break;
        }
    }

    printf("Maximum profit = %.2f", total);

    return 0;
}