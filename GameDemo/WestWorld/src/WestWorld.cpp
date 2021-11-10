#include <iostream>
#include "BaseGameEntity.h"
#include "Miner.h"
using namespace Code47::WestWorld;


int main(void)
{
	std::shared_ptr<BaseGameEntity> miner = std::make_shared<Miner>(0);
	miner->Update();
	return 0;
}