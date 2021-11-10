#ifndef STATE_MACHINE_H_DS293DA
#define STATE_MACHINE_H_DS293DA
#include <memory>
#include "State.h"
#include <cassert>
namespace Code47
{
	namespace WestWorld
	{
		template<class T>
		class StateMachine
		{
		private: 
			T* m_pOwner;
			std::shared_ptr<State<T>> m_pCurrent;
			std::shared_ptr<State<T>> m_pPreState;
			std::shared_ptr<State<T>> m_pGlobalState;
		public:
			StateMachine(T* pOwner) : m_pOwner(pOwner), 
												      m_pCurrent(nullptr), 
													  m_pPreState(nullptr),
													  m_pGlobalState(nullptr)
			{};

			void SetCurrentState(std::shared_ptr<State<T>> s)
			{
				this->m_pCurrent = s;
			}

			void SetPreState(std::shared_ptr<State<T>> s)
			{
				this->m_pPreState = s;
			}

			void SetGlobalState(std::shared_ptr<State<T>> s)
			{
				this->m_pGlobalState = s;
			}

			// 调用这个方法更新FSM
			void Update() const
			{
				if (m_pGlobalState)
				{
					m_pGlobalState->Execute(m_pOwner);
				}

				if (m_pCurrent)
				{
					m_pCurrent->Execute(m_pOwner);
				}
			}

			void ChangeState(std::shared_ptr<State<T>> s)
			{
				assert(s && "<StateMachine::ChangeState>: trying to change to a null state");
				m_pPreState = m_pCurrent;
				m_pCurrent->Exit(m_pOwner);
				m_pCurrent = s;
				m_pCurrent->Enter(m_pOwner);
			}

			void RevertToPreviousState() const
			{
				ChangeState(m_pPreState);
			}

			std::shared_ptr<State<T>> GetCurrentState() const
			{
				return m_pCurrent;
			}

			std::shared_ptr<State<T>> GetPreviousState()
			{
				return m_pPreState;
			}

			std::shared_ptr<State<T>> GetGlobalState()
			{
				return m_pGlobalState;
			}
		};
	}
}
#endif
