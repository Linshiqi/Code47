#ifndef POINT_H_HS23HXKAE234 
#define POINT_H_HS23HXKAE234
namespace Code47
{
	namespace Math
	{
		class Point
		{
		public:
			Point();
			Point(int x, int y);
			Point(int x, int y, int z);
			virtual ~Point();

		public:
			void SetX(int x);
			void SetY(int y);
			void SetZ(int z);

		public:
			bool IsIn2D() const
			{
				return (m_nZ == 0);
			}

		private:
			int m_nX;
			int m_nY;
			int m_nZ;
		};
	}
}
#endif  // POINT_H_HS23HXKAE234
