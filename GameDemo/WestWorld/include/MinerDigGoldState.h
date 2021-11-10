#ifndef DIG_GOLD_STATE_H_HDD7283
#define DIG_GOLD_STATE_H_HDD7283

#include "State.h"
#include "Miner.h"

namespace Code47
{
	namespace WestWorld
	{
		class DigGoldState : public State<Miner>
		{

		public:

			virtual void Enter(Miner* pOwner) override;


			virtual void Execute(Miner* pOwner) override;


			virtual void Exit(Miner* pOwner) override;

		};
	}
}
#endif
