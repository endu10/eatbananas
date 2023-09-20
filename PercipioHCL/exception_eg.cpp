#include <iostream>

class sample{
    private:
    int val1, val2;
    public:
    void SetData();
    void Division();
};

void sample::SetData(){
    std::cin>>val1>>val2;
}

void sample::Division(){
    std::cout<<val1/val2;
}

int main(){
    sample s;
    s.SetData();
    s.Division();
}