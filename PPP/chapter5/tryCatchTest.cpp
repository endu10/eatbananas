#include <vector>
#include <iostream>
#include <string>

template<class R, class A>
R narrow_cast(const A& a)
{
    R r = R(a);
    if (A(r) != a) std::cout<<"info loss"<<std::endl;
    return r;
}


int main(){

    // try{
    //     std::vector<int> v;
    //     for(int x;std::cin>>x;){
    //         v.push_back(x);
    //     }
    //     for(int i=0;i<=v.size();++i){
    //         std::cout<<"v["<<i<<"]=="<<v[i]<<'\n';
    //     }
    // }
    // catch(std::out_of_range){
    //     std::cerr<<"oops range error"<<std::endl;
    //     return 1;
    // }
    // catch(...){
    //     std::cerr<<"something else"<<std::endl;
    //     return 2;
    // }

    char c = 1066;
    int d = narrow_cast<int>(3.4);
    std::cout<<"the value is "<<d<<std::endl;

}