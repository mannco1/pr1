class figure {
private:
    float x1, x2, x3, x4;
    float y1, y2, y3, y4;
    float S;
    float P;

public:



    figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4);

    void show();
       
    

    void set_fig(float X1, float X2, float X3, float X4, float Y1, float Y2, float Y3, float Y4);
    

    bool is_prug();

    bool is_square();

    bool is_romb();
    
bool is_in_circle();
bool is_out_circle();
};