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
    
    ///@ explicit constructor
    My2Dpointi(const int& x, const int& y)
    {
        x_ = x;
        y_ = y;
    }
    
    ///@ copy constuctor
    My2Dpointi(const My2Dpointi& copy):x_(copy.x_),y_(copy.y_){}
    
    ///@ assignment operator overload
    My2Dpointi& operator = (const My2Dpointi& my2dpointi)
    {
        // detect self assignment
        if (this == &my2dpointi)
        {
            return *this;
        }
        
        x_ = my2dpointi.x_;
        y_ = my2dpointi.y_;
        return *this;
    }

    friend std::ostream& operator << (std::ostream& os, const My2Dpointi& pt);

    friend My2Dpointi operator + (const My2Dpointi& ptl, const My2Dpointi& ptr);
    
    friend My2Dpointi operator - (const My2Dpointi& ptl, const My2Dpointi& ptr);
    
    int dot(const My2Dpointi& pt)
    {
        return (x_ * pt.x_ + y_ * pt.y_);
    }
    
    double norm(void)
    {
        return std::sqrt(x_ * x_ + y_ * y_);
    }

private:
    int x_;
    int y_;
};


std::ostream& operator << (std::ostream& os, const My2Dpointi& pt   )
{
    os << "["<< pt.x_ << ", " << pt.y_ <<"]";
    return os;
}

My2Dpointi operator+ (const My2Dpointi& ptl, const My2Dpointi& ptr)
{
    My2Dpointi ret(ptl.x_ + ptr.x_, ptl.y_ + ptr.y_);
    return ret;
}

My2Dpointi operator- (const My2Dpointi& ptl, const My2Dpointi& ptr)
{
    My2Dpointi ret(ptl.x_ - ptr.x_, ptl.y_ - ptr.y_);
    return ret;
}
 
} // namespace CH
#endif /* geometry_h */
