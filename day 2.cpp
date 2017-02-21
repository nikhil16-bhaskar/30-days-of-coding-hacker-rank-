#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    float meal_cost;
    float tip_per,tip;
    float tax_per,tax;
    int total_cost;
    cin>>meal_cost>>tip_per>>tax_per;
    tip=meal_cost*tip_per/100;
    tax=meal_cost*tax_per/100;
    total_cost=meal_cost+tip+tax;
    cout<<"The total meal cost is "<<total_cost<<" dollars.";

    return 0;
}

