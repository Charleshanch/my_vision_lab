//
//  geometry.h
//  OpenCV_Tutorial
//
//  Created by Chenhao Han on 6/7/17.
//  Copyright © 2017 Chenhao Han. All rights reserved.
//

#ifndef geometry_h
#define geometry_h

#include <iostream>

namespace CH
{

class My2Dpointi
{
public:
    ///@ default constructor
    My2Dpointi()
    {
        x_ = 0;
        y_ = 0;
    }
    
    ///@ 
    My2Dpointi(const int& x, const int& y)
    {
        x_ = x;
        y_ = y;
    }
    
    ///@ copy constuctor
    My2Dpointi(const My2Dpointi& copy):x_(copy.x_),y_(copy.y_){}
    
    friend std::ostream& operator << (std::ostream& os, const My2Dpointi& pt);
    
//    My2Dpointi& operator + (const My2Dpointi& lhs, const My2Dpointi& rhs)
//    {
////        My2Dpointi ret
//        return My2Dpointi(0,0);
//    }

private:
    int x_;
    int y_;
};


std::ostream& operator << (std::ostream& os, const My2Dpointi& pt   )
{
    os << "["<< pt.x_ << ", " << pt.y_ <<"]";
    return os;
}

template <class T>
class Mypoint3d {

};
    
} // namespace CH
#endif /* geometry_h */
