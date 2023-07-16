#include <bits/stdc++.h> 
void sortStack(stack<int> &stack)
{
	// Write your code here
	  std::vector<int> aux;//dynamic variable to store the top element
    while (!stack.empty()) { //check whether the stack is empty or not
        aux.push_back(stack.top());//pushing the element on the top of the stack
        stack.pop();//pop the very first element
    }

    std::sort(aux.begin(), aux.end());

    for (int num : aux) {
        stack.push(num);
    }
}