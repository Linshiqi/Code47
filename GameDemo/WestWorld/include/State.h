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
			/// 进入下一状态时执行
			/// </summary>
			/// <param name=""></param>
			virtual void Enter(T* pOwner) = 0;

			/// <summary>
			/// update的时候执行当前状态的动作
			/// </summary>
			/// <param name=""></param>
			virtual void Execute(T* pOwner) = 0;

			/// <summary>
			/// 退出当前状态时执行
			/// </summary>
			/// <param name=""></param>
			virtual void Exit(T* pOwner) = 0;

			virtual ~State() {}
		};
	}
}
#endif
