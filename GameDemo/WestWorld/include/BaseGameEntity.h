#ifndef BASE_GAME_ENTITY_H_SD7678A98F
#define BASE_GAME_ENTITY_H_SD7678A98F
namespace Code47
{
	namespace WestWorld
	{
		class BaseGameEntity
		{
		private:
			int	m_ID;
			static int m_iNextValidID;
			void SetID(int val);
		public:
			BaseGameEntity(int val);
			virtual ~BaseGameEntity();
			virtual void Update() = 0;
			int ID() const;
		};
	}
}
#endif
