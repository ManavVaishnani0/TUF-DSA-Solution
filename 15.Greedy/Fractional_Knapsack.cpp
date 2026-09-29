#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Item {
    int value;
    int weight;
};

bool compare(Item a, Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double fractionalKnapsack(vector<Item> &items, int capacity){
    sort(items.begin(), items.end(), compare);
    double totalvalue = 0.0;
    for(int i=0; i<items.size(); i++){
        if(items[i].weight <= capacity){
            capacity -= items[i].weight;
            totalvalue += items[i].value;
        }
        else{
            totalvalue += items[i].value * ((double)capacity / items[i].weight);
            break;
        }
    }
    return totalvalue;
}

int main(){
    int n, capacity;
    cout << "Enter number of items: ";
    cin >> n;
    vector<Item> items(n);
    cout << "Enter value and weight of each item:\n";
    for(int i=0; i<n; i++){
        cin >> items[i].value >> items[i].weight;
    }
    cout << "Enter capacity of knapsack: ";
    cin >> capacity;
    double maxValue = fractionalKnapsack(items, capacity);
    cout << "Maximum value in Knapsack = " << maxValue << endl;
    return 0;
}