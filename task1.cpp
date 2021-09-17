#include<iostream>
#include<cmath>
class Point
{
	private:
		double m_x;
		double m_y;
		double m_z;
	public:
		Point(double a = 0.0, double b = 0.0, double c = 0.0) : m_x{a}, m_y{b}, m_z{c}{};
		void print()
		{						std::cout<<"Point("<<m_x<<","<<m_y<<","<<m_z<<")"<<std::endl;
		}
		double getDistance()
		{
			return sqrt(m_x*m_x+m_y*m_y+m_z*m_z);
		}
		double getDistance(Point anotherPoint)
		{
			double disX{anotherPoint.m_x};
			double disY{anotherPoint.m_y};
			double disZ{anotherPoint.m_z};
			return sqrt((m_x-disX)*(m_x-disX)+(m_y-disY)*(m_y-disY)+(m_z-disZ)*(m_z-disZ));
		}
	
};
		
int main()
{
Point first;
Point second(0.0, 0.0, 3.0);
first.print();
second.print();
std::cout<<"Distance: "<<first.getDistance(second)<<std::endl;
return 0;
}