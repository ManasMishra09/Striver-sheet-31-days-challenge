class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        istringstream iss(s);
        string word;

        while (iss >> word) { //The >> operator is used to read data from the stream (iss) and store it in the variable (word). When this operation is successful, it returns the stream (iss in this case), allowing for chaining of operations.
            st.push(word);
        }

        string result;
        while (!st.empty()) {
            result += st.top() + " ";
            st.pop();
        }

        if (!result.empty()) {
            result.pop_back();
        }

        return result;
    }
};