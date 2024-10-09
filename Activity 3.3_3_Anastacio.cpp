#include <stdio.h>
#include <math.h>

#define BASE_COST 5.00
#define ADDITIONAL_COST_PER_100G 2.00
#define BASE_WEIGHT 300 // in grams
#define MAX_WEIGHT 1000 // in grams

float calculateCost(int weight) {
    float cost = BASE_COST;

    if (weight > BASE_WEIGHT) {
        int additionalWeight = weight - BASE_WEIGHT;
        
        int additionalUnits = (int)ceil((float)additionalWeight / 100);
        cost += additionalUnits * ADDITIONAL_COST_PER_100G;
    }

    return cost;
}

int main() {
    int weight;

    printf("Enter the weight of the parcel (in grams, up to 1000g): ");
    scanf("%d", &weight);

    if (weight <= 0 || weight > MAX_WEIGHT) {
        printf("Invalid weight. Please enter a weight between 1 and 1000 grams.\n");
        return 1;
    }

    float cost = calculateCost(weight);
    printf("The cost of sending a parcel weighing %d grams is: P%.2f\n", weight, cost);

    return 0;
}
