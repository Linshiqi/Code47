#ifndef STATE_H_DAF798AD
#define STATE_H_DAF798AD

#include <memory>
namespace Code47
{
	namespace WestWorld
	{
		template<class T>
		class State
		{
		public:
			/// <summary>
			/// ������һ״̬ʱִ��
			/// </summary>
			/// <param name=""></param>
			virtual void Enter(T* pOwner) = 0;

			/// <summary>
			/// update��ʱ��ִ�е�ǰ״̬�Ķ���
			/// </summary>
			/// <param name=""></param>
			virtual void Execute(T* pOwner) = 0;

			/// <summary>
			/// �˳���ǰ״̬ʱִ��
			/// </summary>
			/// <param name=""></param>
			virtual void Exit(T* pOwner) = 0;

			virtual ~State() {}
		};
	}
}
#endif
