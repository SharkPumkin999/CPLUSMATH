#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

bool canDivide(vector<long long>& weights, int n, long long limit) {
    int pairs = 0;
    int left = 0, right = 2 * n - 1;

    while (left < right) {
        if (weights[left] + weights[right] <= limit) {
            left++;
            right--;
            pairs++;
        } else {
            right--;
        }
    }

    return pairs == n;
}

long long findMinBicycleLimit(vector<long long>& weights, int n) {
    sort(weights.begin(), weights.end());
    long long leftLimit = weights[0];
    long long rightLimit = weights[2 * n - 1];
    long long result = -1;

    while (leftLimit <= rightLimit) {
        long long midLimit = (leftLimit + rightLimit) / 2;

        if (canDivide(weights, n, midLimit)) {
            result = midLimit;
            rightLimit = midLimit - 1;
        } else {
            leftLimit = midLimit + 1;
        }
    }

    return result;
}

int main() {
    ifstream inputFile("BICYCLE.INP");
    int n;
    inputFile >> n;
    vector<long long> weights(2 * n);

    for (int i = 0; i < 2 * n; i++) {
        inputFile >> weights[i];
    }

    inputFile.close();

    long long minLimit = findMinBicycleLimit(weights, n);

    ofstream outputFile("BICYCLE.OUT");
    outputFile << minLimit << endl;
    outputFile.close();

    return 0;
}
