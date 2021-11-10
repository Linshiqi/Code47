#include "MinerRestAtHomeState.h"
#include "Miner.h"
#include <iostream>
namespace Code47
{
	namespace WestWorld
	{

		void RestAtHomeState::Enter(Miner* pOwner)
		{
			if (pOwner)
			{
				std::cout << "Miner " << pOwner->ID() << " enters rest at home state" << std::endl;
			}
		}

		void RestAtHomeState::Execute(Miner* pOwner)
		{
			if (pOwner)
			{
				std::cout << "Miner " << pOwner->ID() << " is resting at home state" << std::endl;
			}
		}

		void RestAtHomeState::Exit(Miner* pOwner)
		{
			if (pOwner)
			{
				std::cout << "Miner " << pOwner->ID() << " exits rest at home state" << std::endl;
			}
		}

	}
}