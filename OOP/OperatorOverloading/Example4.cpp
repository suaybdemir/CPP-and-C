    #include <iostream>
    using namespace std;


    class F
    {
        private:
            int num;
        public:
            F() : num(0) {}
            void input()
            {
                cin>>num;
            }
            void display()
            {
                cout<<"Display : "<<num<<endl;
            }
    };

    int main(void)
    {
        F n[2];

        for(int i=0 ; i<2 ; i++)
        {
            n[i].input();
        }

        for(int i = 0; i<2 ; i++)
        {
            n[i].display();
        }

        return 0;
    }