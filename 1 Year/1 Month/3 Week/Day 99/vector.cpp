#include<iostream>
#include<vector>
using namespace std;
class Try{
    private:
    vector<int>arr;
    public:
    Try(vector<int>conArr){
        arr=conArr;
    }
    vector<int> Same(int x){
        vector<int> v(2,-1);
        for(int i= 0; i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    cout<<i<<" "<<j;
                    v[i];
                    v[j];
                    return v;
                }
            }
        }
        return v;
    }
};
int main(){
    vector<int>nums={23,55,45,66,64,45,78};
    Try obj(nums);
    obj.Same(45);
    return 0;
}