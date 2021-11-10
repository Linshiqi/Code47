#include "MinerGlobalState.h"
#include <iostream>
namespace Code47
{
	namespace WestWorld
	{

		void MinerGlobalState::Enter(Miner* pOwner)
		{
			if (pOwner)
			{
				std::cout << "Miner " << pOwner->ID() << " enters global state" << std::endl;
			}
		}

		void MinerGlobalState::Execute(Miner* pOwner)
		{
			if (pOwner)
			{
				std::cout << "Miner " << pOwner->ID() << " is at global state" << std::endl;
			}
		}

		void MinerGlobalState::Exit(Miner* pOwner)
		{
			if (pOwner)
			{
				std::cout << "Miner " << pOwner->ID() << " exits global state" << std::endl;
			}
		}

	}
}