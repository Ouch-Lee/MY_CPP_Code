
class Box
{
private:
    /* data */
    double length;
    double breadth;
    double height;
public:
    Box(double in_l, double in_d, double in_h):length(in_l), breadth(in_d), height(in_h)
    {
        
    };
    ~Box();

    double getV(void);
    double setL(double len);
    double setD(double bre);
    double setH(double hei);
};

// Box::Box(double in_l, double in_d, double in_h)
// {
//     this->length = in_l;
//     this->breadth = in_d;
//     this->height = in_h;
// }

Box::~Box()
{
}

double Box::setL(double len)
{
    this->length = len;
}
