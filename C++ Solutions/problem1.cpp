/*Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?*/

#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>

using namespace std;

bool hasSum(vector<int> a, int k){
	unordered_set<int> seen;
	
	for(int i : a){
		if(seen.find(abs(k - i)) == seen.end()){
			seen.insert(i);
		}else if(seen.find(abs(k - i)) != seen.end()){
			return true;
		}
	}
	
	return false;
}

void hasSumTest(vector<int> testArray, int testSum, bool answer){	
	if(answer == hasSum(testArray, testSum)){
		cout << "Passed" << endl;
		return;
	}
	cout << "Failed" << endl;;
}

int main()  
{  
	vector<int> a = {10, 7};
	vector<int> b = {10, 8};
	vector<int> c = {28, 8};
	vector<int> d = {10, 15, 3, 7};
	vector<int> e = {10, 15, 3, 28};
	
	int k = 17;

	hasSumTest(a, k, true);
	hasSumTest(b, k, false);
	hasSumTest(c, k, false);	
	hasSumTest(d, k, true);	
	hasSumTest(d, k, true);	
}  