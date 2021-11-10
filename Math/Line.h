#ifndef LINE_H_DA73223HGDAS23
#define LINE_H_DA73223HGDAS23

#include "Point.h"
namespace Code47
{
	namespace Math
	{
		class Line
		{
		public:
			Line();
			Line(const Point& p1, const Point& p2);
			Line(const Point& p1, const Point& p2, const Point& p3);
			~Line();
		public:
			static bool IsPointInLine(const Line& l, const Point& p);

		};
	}
}
#endif  // LINE_H_DA73223HGDAS23
