#ifndef MINER_H_XXS87DFA
#define MINER_H_XXS87DFA
#include <memory>
#include "StateMachine.h"
#include "LocationType.h"
#include "BaseGameEntity.h"
#include <memory>
namespace Code47
{
	namespace WestWorld
	{
		class Miner : public BaseGameEntity
		{
		private:
			std::shared_ptr<StateMachine<Miner>> m_pStateMachine;

			LocationType m_Location;
			
			int m_iGoldCarried;

			int m_iMoneyInBank;

			int m_iThirst;

			int m_iFatigue;
		public:
			Miner(int ID);
			~Miner() {}
			void Update() override;
			void ChangeState(std::shared_ptr<State<Miner>> pNewState);
		};
	}
}
#endif
