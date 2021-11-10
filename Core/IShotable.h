#ifndef I_SHOT_ABLE_H_FAD877F8DA23
#define I_SHOT_ABLE_H_FAD877F8DA23
#include "ReturnValue.h"
namespace Code47
{
	class IShotable
	{
	public:
		/// <summary>
		/// return SUCCESS if hit, or return FAILED
		/// </summary>
		virtual ReturnValue Shot() = 0;
	};
}
#endif  // I_SHOT_ABLE_H_FAD877F8DA23
