#include "MinerDigGoldState.h"
#include <iostream>

namespace Code47
{
	namespace WestWorld
	{

		void DigGoldState::Enter(Miner* pOwner)
		{
			if (pOwner)
			{
				std::cout << "Miner " << pOwner->ID() << " enters digging gold state" << std::endl;
			}
		}

		void DigGoldState::Execute(Miner* pOwner)
		{
			if (pOwner)
			{
				std::cout << "Miner " << pOwner->ID() << " is at digging gold state" << std::endl;
			}
		}

		void DigGoldState::Exit(Miner* pOwner)
		{
			if (pOwner)
			{
				std::cout << "Miner " << pOwner->ID() << " exits digging gold state" << std::endl;
			}
		}

	}
}