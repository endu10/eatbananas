#include <vector>
#include <iostream>

class solution{
    
    public:

    int maxProduct(std::vector<int> &nums){

        int large1=0, large2=0;
        int large1idx,large2idx;
        for (int i=0;i<nums.size(); ++i){
            if(large1 <= nums[i]){
                large1 =nums[i];
                large1idx =i;
            }
        }
        for (int j=0;j<nums.size();++j){
            if((large2 <= nums[j]) && (nums[j]<=large1)){
                if(j!= large1idx){
                    large2=nums[j];
                }
            }
        } 
        std::cout<< "large1=="<<large1<<" large2=="<<large2<<std::endl;
        
        return (large1-1)* (large2-1);
    }
};

int main(){

    std::vector<int> input = {8,3,5,9};

    solution objSol;
    std::cout<< " sol =="<<objSol.maxProduct(input)<<std::endl;

    return 0;
}