#include "shapes.hpp"

int main() {

    std::unique_ptr<shapes> ptrShape;
    std::unique_ptr<logging> ptrlg2 = std::make_unique<logging>();

    circle objCircle;
    square objSquare;

    ptrShape = std::make_unique<circle>(objCircle);
    ptrShape->printShape();


    ptrShape = std::make_unique<square>(objSquare);
    ptrShape->printShape();

    ptrlg2->l2g_logs();

}
