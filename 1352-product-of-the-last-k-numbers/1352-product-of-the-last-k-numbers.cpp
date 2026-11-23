class ProductOfNumbers {
public:
vector<int>pro;
    ProductOfNumbers() {
        pro={1};
    }
    
    void add(int num) {
        if(num==0) pro={1};
        else pro.push_back(pro.back()*num);
    }
    
    int getProduct(int k) {
        int n=pro.size();
        if(k>=n) return 0;
        return pro[n-1]/pro[n-1-k];
    }
};
