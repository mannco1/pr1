#include <iostream>
#include "figure.h"
#include <cmath>
using namespace std;



class figure {
private:
    float x1, x2, x3, x4;
    float y1, y2, y3, y4;
    float S;
    float P;

public:



    figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4) {


        float ab = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        float bc = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        float cd = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
        float da = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));

        P = ab + bc + cd + da;

        float s = P / 2;

        S = sqrt((s - ab) * (s - bc) * (s - cd) * (s - da));
    }

    void show() {
        cout << "����������: (" << x1 << "," << y1 << ") (" << x2 << "," << y2 << ") (" << x3 << "," << y3 << ") (" << x4 << "," << y4 << ")" ;
        cout << "P: " << P ;
        cout << "S: " << S ;
    }

    void set_fig(float X1, float X2, float X3, float X4, float Y1, float Y2, float Y3, float Y4)
    {

    };

    bool is_prug() {
        float ab = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        float bc = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        float cd = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
        float da = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
        if ((ab == cd && bc == da) || (ab == bc && cd == da) || (ab == da && bc == cd)) {
            return true;
        }
        return false;
    }


    bool is_square() {
        float ab = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        float bc = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        float cd = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
        float da = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));

        return (ab == cd && cd == bc && bc == da);
    }

    bool is_romb() {
        float ab = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        float bc = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        float cd = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
        float da = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
        float diag1 = sqrt(pow(x2 - x4, 2) + pow(y2 - y4, 2));
        float diag2 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
        if (ab == bc && bc == cd && cd == da) {
            if (diag1 == diag2) {
                return true;
            }
        }

        return false;
    }
    bool is_in_circle() {
        float ab = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        float bc = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        float cd = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
        float da = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));

        double radius = (ab * bc * cd * da) / (4 * S);

        if (radius >= (sqrt(2) * max({ ab, bc, cd, da })) / 2) {
            return true;
        }
        else {
            return false;
        }
    }
    bool is_out_circle() {

        float ab = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        float bc = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        float cd = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
        float da = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));

        double radius = (ab * bc * cd * da) / (4 * S);

        if (radius <= (min({ ab, bc, cd, da })) / 2) {
            return true;
        }
        else {
            return false;
        }
    }
};