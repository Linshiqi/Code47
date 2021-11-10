#include "Point.h"

namespace Code47
{
	namespace Math
	{
		Point::Point() : m_nX(0), m_nY(0), m_nZ(0)
		{

		}

		Point::Point(int x, int y, int z) : m_nX(x), m_nY(y), m_nZ(z)
		{

		}

		Point::Point(int x, int y) : m_nX(x), m_nY(y), m_nZ(0)
		{

		}

		Point::~Point()
		{

		}

		void Point::SetX(int x)
		{
			this->m_nX = x;
		}

		void Point::SetY(int y)
		{
			this->m_nY = y;
		}

		void Point::SetZ(int z)
		{
			this->m_nZ = z;
		}
	}
}
