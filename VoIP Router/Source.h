#pragma once
#include "metadata.h"
#include <iostream>

//A class that creates a source to be used with the router
//this class also creates packet for transmission
class Source {

private:
	unsigned int sourceID;

	//assign new source ID for every source created
	static int NextID() {
		static int nextSourceID = 0;
		nextSourceID++;
		return nextSourceID;
	}

public:
	Source();
	~Source();
	

	//Each router channel can create packets for testing purposes
	MetaData CreatePacket(int packetNo);


};