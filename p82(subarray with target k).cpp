  if(n == 1)return 1;
        if(A[0] == -1 && A.back() == 1)return 4;
        map<int, vector<int>>indices;
        vector<int>v;
        
        v.push_back(0);
        for(int i=0; i<n; i++){
            v.push_back(v.back() + A[i]);
        }
        for(int i=0; i<n; i++){
            indices[v[i]].push_back(i);
        }
        int diff = INT_MIN;
        for(auto it : indices){
            diff = max(diff, (it.second).back() - (it.second)[0]);
        }
        return diff;