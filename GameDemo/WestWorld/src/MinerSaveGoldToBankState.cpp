#include "MinerSaveGoldToBankState.h"
#include <iostream>
namespace Code47
{
	namespace WestWorld
	{

		void SaveGoldToBankState::Enter(Miner* pOwner)
		{
			if (pOwner)
			{
				std::cout << "Miner " << pOwner->ID() << " enters save gold to bank state" << std::endl;
			}
		}

		void SaveGoldToBankState::Execute(Miner* pOwner)
		{
			if (pOwner)
			{
				std::cout << "Miner " << pOwner->ID() << " is at saving gold to bank state" << std::endl;
			}
		}

		void SaveGoldToBankState::Exit(Miner* pOwner)
		{
			if (pOwner)
			{
				std::cout << "Miner " << pOwner->ID() << " exits saving gold to bank state" << std::endl;
			}
		}

	}
}