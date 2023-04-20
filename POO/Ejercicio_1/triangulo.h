class triangulo{
    int b; 
    int h;
    float s;
    public:
        triangulo(){};
        triangulo(int b, int h);
        void setb(int base);
        void seth(int altura);
        int getb();
        int geth();
        float gets();
        void superficie();
};