#ifndef POSITION_H_JFS9GA977GS
#define POSITION_H_JFS9GA977GS

namespace Code47
{
	class Position
	{
	public:
		Position();
		Position(int x, int y);
		Position(int x, int y, int z);
		virtual ~Position();

	public:
		void SetX(int x);
		void SetY(int y);
		void SetZ(int z);

	private:
		int m_nX;
		int m_nY;
		int m_nZ;
	};
}
#endif	// POSITION_H_JFS9GA977GS
