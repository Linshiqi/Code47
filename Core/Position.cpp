#include "Position.h"

namespace Code47
{
	Position::Position() : m_nX(0), m_nY(0), m_nZ(0)
	{

	}

	Position::Position(int x, int y, int z) : m_nX(x), m_nY(y), m_nZ(z)
	{

	}

	Position::Position(int x, int y) : m_nX(x), m_nY(y), m_nZ(0)
	{
		
	}

	Position::~Position()
	{

	}

	void Position::SetX(int x)
	{
		this->m_nX = x;
	}

	void Position::SetY(int y)
	{
		this->m_nY = y;
	}

	void Position::SetZ(int z)
	{
		this->m_nZ = z;
	}

}


