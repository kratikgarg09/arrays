// CPP program to count frequencies of array items

#include<iostream> 
#include <bits/stdc++.h>
using namespace std;





void countFreq(int arr[], int n)
{
	// Mark all array elements as not visited
	vector<bool> visited(n, false);

	// Traverse through array elements and
	// count frequencies
	for (int i = 0; i < n; i++) {

		// Skip this element if already processed
		if (visited[i] == true)
			continue;

		// Count frequency
		int count = 1;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] == arr[j]) {
				visited[j] = true;
				count++;
			}
		}
		cout << arr[i] << " " << count << endl;
	}
}


int main(){ 
    int arr[9] = {1,2,2,2,3,3,3,4,4};
    int n;
    countFreq(arr,9);
    return 0;
}