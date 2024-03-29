bool comp(Item a, Item b){
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        return r1>r2;
    }
class Solution
{
    public:
    // static bool comp(Item a, Item b){
    //     double r1 = (double)a.value / (double)a.weight;
    //     double r2 = (double)b.value / (double)b.weight;
    //     return r1>r2;
    // }
    
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr,arr+n,comp);
        
        int currWeight = 0;
        double finalvalue = 0.0;
        
        for(int i=0;i<n ; i++){
            if(currWeight + arr[i].weight <= W){
                currWeight += arr[i].weight;
                finalvalue += arr[i].value;
            }
            
            else{
                int remain = W-currWeight;
                finalvalue += (arr[i].value / (double)arr[i].weight) * (double)remain;
                break;
            }
        }
        return finalvalue;
    }
        
};