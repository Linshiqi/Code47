#include "BaseGameEntity.h"
#include <cassert>

namespace Code47
{
    namespace WestWorld
    {

        void BaseGameEntity::SetID(int val)
        {
            assert(val >= m_iNextValidID && "invalid ID");
        }

		int BaseGameEntity::m_iNextValidID = 0;

        BaseGameEntity::BaseGameEntity(int val)
        {
            SetID(val);
        }

        BaseGameEntity::~BaseGameEntity()
        {

        }

        int BaseGameEntity::ID() const
        {
            return m_ID;
        }

    }
}


