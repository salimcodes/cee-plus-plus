//#ifndef HEADER_H
#define HEADER_H
#include "pitcher.h"

//void Smokin(Pitcher *);
void Smokin(Pitcher *instance_one)
{
	strcpy(instance_one->name, "Smokin' Joe Green");
	instance_one->ERA = 1.2;
	instance_one->innings = 55;
	instance_one->StrikeoutPercentage = 0.25;
}


//#endif