#include<bits/stdc++.h>
using namespace std;



void generatePermutations(string s, int index, vector<string>& result) {
    // Base case: If the permutation is complete, add it to the result
    if (index == s.size()) {
        // Check if the first character is not a digit
        if (!isdigit(s[0])) {
            result.push_back(s);
        }
        return;
    }



    // Generate permutations by swapping each character to the current index
    for (int i = index; i < s.size(); i++) {
        swap(s[i], s[index]);
        generatePermutations(s, index + 1, result);
        swap(s[i], s[index]); // Backtrack
    }
}


int main() {  // time and space both - O(n!)
    string input;
    //cout << "Enter an alphanumeric string: ";
    cin >> input;

    vector<string> result;
    generatePermutations(input, 0, result);

    // Print all valid permutations
    for (const string& perm : result) {
        cout << perm << endl;
    }

    return 0;
}


