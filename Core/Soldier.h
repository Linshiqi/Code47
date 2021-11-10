/*
* First code of "code 47" 
* Date:		2021.10.31
* Author:	code047
* email:	lin047@foxmail.com
* Function: define Soldier base class
* License:	MIT
*/
#ifndef SOLDIER_H_7FSD9GAKD0980DFA
#define SOLDIER_H_7FSD9GAKD0980DFA

#include <string>
#include "Gender.h"
#include "IShotable.h"

namespace Code47
{
	namespace Core
	{
		class Soldier : public IShotable
		{
		public:
			Soldier();
			virtual ~Soldier();
		protected:
			/// <summary>
			/// Shot empty
			/// </summary>
			/// <returns>return SUCCESS is hit, else return FAILD</returns>
			virtual ReturnValue Shot() = 0;

			virtual void Walk() = 0;
			virtual void Run() = 0;
			virtual void Idle() = 0;

		private:
			/// <summary>
			/// Soldier's name
			/// </summary
			std::string m_strName;

			/// <summary>
			/// Soldier's service type
			/// </summary>
			std::string m_strType;

			/// <summary>
			/// man or woman
			/// </summary>
			Gender m_enGender;
		};
	}
}


#endif