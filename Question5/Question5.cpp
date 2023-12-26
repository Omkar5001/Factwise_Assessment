#include <iostream>
#include <vector>
using namespace std;

int canCompleteCircuit(const vector<int>& gas, const vector<int>& cost) {
    int totalGas = 0;
    int totalCost = 0;
    int currentTank = 0;
    int startStation = 0;

    for (int i = 0; i < gas.size(); ++i) {
        totalGas += gas[i];
        totalCost += cost[i];
        currentTank += gas[i] - cost[i];

        if (currentTank < 0) {
            currentTank = 0;
            startStation = i + 1;
        }
    }

    return (totalGas >= totalCost) ? startStation : -1;
}

int main() {
    vector<int> gas1 = {1, 2, 3, 4, 5};
    vector<int> cost1 = {3, 4, 5, 1, 2};
    cout << canCompleteCircuit(gas1, cost1) << endl;

    return 0;
}