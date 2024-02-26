    #include <iostream>
    using namespace std;

    class F
    {
        private:
            int real,img;
        public:
            F() : real(0),img(0) {}
            F(int r , int i) : real(r),img(i) {}    


        int getReal()
        {
            return real;
        }
        int getImg()
        {
            return img;
        }
        friend F operator+(const F& obj1,const F& obj2);

    };

    F operator+(F const& obj1,F const& obj2)
    {
            F obj3;
            obj3.real = obj1.real + obj2.real;
            obj3.img = obj1.img + obj2.img;
            return obj3;
    }

    int main(void)
    {

        int num1,num2;
        int img1,img2;

        cout<<"Enter real numer"<<endl;
        cin>>num1>>num2;
        cout<<"Enter img "<<endl;
        cin>>img1>>img2;

        F obj1(num1,img1);
        F obj2(num2,img2);


        F obj3 = obj1 + obj2;   

        cout<<"Sum : "<<obj3.getReal()<<"+i"<<obj3.getImg()<<endl;


        return 0;
    }