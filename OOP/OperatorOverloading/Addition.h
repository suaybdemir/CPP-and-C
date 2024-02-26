#ifndef ADDITION_H
#define ADDITION_H


class Addition 
{
    private:
        int real;
        int img;
    
    public:
    
    //Fill the code here 
    Addition(int real , int img){
        this->real = real;
        this->img = img;
    }
    void setReal(int r)
    {
        real = r;
    }
    void setImg(int i)
    {
        img = i;
    }



    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }
    Addition operator+(Addition a1,Addition a2);
    friend class Add;
};

class Add{
    public:
        Addition operator+(const Addition& a1,const Addition& a2)
        {
            Addition a3;
            a3.setReal(a1.getReal() + a2.getReal() );
            a3.setImg(a1.getImg() + a2.getImg());
            return a3;
        }

};


#endif //ADDITION_H