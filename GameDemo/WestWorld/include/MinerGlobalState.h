#ifndef MINER_GLOBAL_STATE_H_23DADF323
#define MINER_GLOBAL_STATE_H_23DADF323
#include "State.h"
#include "Miner.h"

namespace Code47
{
	namespace WestWorld
	{
		class MinerGlobalState : public State<Miner>
		{

		public:


			virtual void Enter(Miner* pOwner) override;


			virtual void Execute(Miner* pOwner) override;


			virtual void Exit(Miner* pOwner) override;

		};

	}
}
#endif
