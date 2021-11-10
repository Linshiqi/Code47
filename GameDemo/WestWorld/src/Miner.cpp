#include "Miner.h"
#include "MinerRestAtHomeState.h"
#include "MinerGlobalState.h"
#include <cassert>
namespace Code47
{
	namespace WestWorld
	{
		Miner::Miner(int ID) : BaseGameEntity(ID), 
			m_Location(LocationType::shack),
			m_iGoldCarried(0),
			m_iMoneyInBank(0),
			m_iThirst(0),
			m_iFatigue(0)
		{
			m_pStateMachine = std::make_shared<StateMachine<Miner>>(this);
			if (m_pStateMachine)
			{
				m_pStateMachine->SetCurrentState(std::make_shared<RestAtHomeState>());
				m_pStateMachine->SetPreState(std::make_shared<RestAtHomeState>());
				m_pStateMachine->SetGlobalState(std::make_shared<MinerGlobalState>());
			}
		}

		void Miner::Update()
		{
			m_iThirst += 1;
			if (m_pStateMachine)
			{
				m_pStateMachine->Update();
			}
		}

		void Miner::ChangeState(std::shared_ptr<State<Miner>> pNewState)
		{
			assert(pNewState && m_pStateMachine);
			m_pStateMachine->ChangeState(pNewState);
		}
	}
}