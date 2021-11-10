#ifndef SAVE_GOLD_TO_BANK_DAD232
#define SAVE_GOLD_TO_BANK_DAD232

#include "State.h"
#include "Miner.h"

namespace  Code47
{
	namespace WestWorld
	{
		class SaveGoldToBankState : public State<Miner>
		{

		public:

			virtual void Enter(Miner* pOwner) override;


			virtual void Execute(Miner* pOwner) override;


			virtual void Exit(Miner* pOwner) override;

		};
	}
}
#endif
