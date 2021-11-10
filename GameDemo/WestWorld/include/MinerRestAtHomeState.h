#ifndef REST_AT_HOME_H_823DFAD
#define REST_AT_HOME_H_823DFAD

#include "State.h"
#include "Miner.h"

namespace Code47
{
	namespace WestWorld
	{
		class RestAtHomeState : public State<Miner>
		{
		public:


			virtual void Enter(Miner* pOwner) override;


			virtual void Execute(Miner* pOwner) override;


			virtual void Exit(Miner* pOwner) override;

		};
	}
}
#endif
