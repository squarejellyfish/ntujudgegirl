class Square
{
    private:
        int len;
    public:
        Square();
        Square(int n);
        int area();
        void setLen(int n);
        int getLen();
};

void cmpSquare(Square &s1, Square &s2);
