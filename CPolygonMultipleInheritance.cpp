#include<iostream>
using namespace  std;

//This is a base class
class CPolygon{
protected:
    float height, width;

public:
    void setWidth(float w)
    {
        width = w;
    }
    float getWidth()
    {
        return width;
    }

    void setHeight(float h)
    {
        height = h;
    }
    float getHeight()
    {
        return height;
    }
};

//Below is another base class
class Volume{
protected:
    float radius;

public:
    static float PI;
    void setRadius(float r)
    {
        radius = r;
    }
    float getRadius()
    {
        return radius;
    }
};

float Volume::PI = (22/7);

//Below is a blue print of calculating the area of a rectangle
class AreaRectangle: public CPolygon{
public:
    float area()
    {
        return (height * width);//These fields will have different  values
    }
};

//Below is a blue print of calculating the area of a triangle
class AreaTriangle: public CPolygon{
public:
    float area()
    {
        return (1 / 2.0 * height * width);
    }
};

//Below is a blue print of calculating the area of a square
class AreaSquare: public CPolygon{
public:
    float area()
    {
        return (height * width);//These fields will have the same  values
    }
};

//Below is a blue print of calculating the area of a cylinder
class AreaCylinder: public CPolygon, public Volume{
public:
    float area()
    {
        return (2 * PI * radius * height);
    }
};

//Below is a blue print of calculating the volume of a cylinder
class VolumeCylinder: public CPolygon, public Volume{
public:
    float area()
    {
        return (PI * radius * radius * height);
    }
};

//Below is a blue print of calculating the volume of a sphere
class VolumeSphere: public Volume{
public:
    float area()
    {
        return (4 / 3.0 * PI * radius * radius * radius);
    }
};

int main()
{
    AreaRectangle rectangle1;
    AreaTriangle  triangle1;
    AreaSquare    square1;
    AreaCylinder a_cylinder1;

    VolumeCylinder v_cylinder1;
    VolumeSphere v_sphere1;

    rectangle1.setHeight(4);
    rectangle1.setWidth(6);

    triangle1.setHeight(8);
    triangle1.setWidth(9);

    square1.setHeight(10);
    square1.setWidth(10);

    a_cylinder1.setRadius(12);
    a_cylinder1.setHeight(5);

    v_cylinder1.setRadius(14);
    v_cylinder1.setHeight(15);

    v_sphere1.setRadius(16);

    cout << "RECTANGLE" << endl;
    cout << "HEIGHT IS " << rectangle1.getHeight() << endl;
    cout << "WIDTH IS " << rectangle1.getWidth() << endl;
    cout << "AREA IS " << rectangle1.area() << endl << endl;

    cout << "TRIANGLE" << endl;
    cout << "HEIGHT IS " << triangle1.getHeight() << endl;
    cout << "BASE IS " << triangle1.getWidth() << endl;
    cout << "AREA IS " << triangle1.area() << endl << endl;

    cout << "SQUARE" << endl;
    cout << "SIDE1 IS " << square1.getHeight() << endl;
    cout << "SIDE2 IS " << square1.getWidth() << endl;
    cout << "AREA IS " << square1.area() << endl << endl;

    cout << "AREA CYLINDER" << endl;
    cout << "RADIUS IS " << a_cylinder1.getRadius() << endl;
    cout << "HEIGHT IS " << a_cylinder1.getHeight() << endl;
    cout << "AREA IS " << a_cylinder1.area() << endl << endl;

    cout << "VOLUME  CYLINDER" << endl;
    cout << "RADIUS IS " << v_cylinder1.getRadius() << endl;
    cout << "HEIGHT IS " << v_cylinder1.getHeight() << endl;
    cout << "VOLUME IS " << v_cylinder1.area() << endl << endl;

    cout << "VOLUME SPHERE" << endl;
    cout << "RADIUS IS " << v_sphere1.getRadius() << endl;
    cout << "VOLUME  IS " << v_sphere1.area() << endl << endl;





    return 0;
}
