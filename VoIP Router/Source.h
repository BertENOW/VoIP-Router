#pragma once
#include "metadata.h"
#include <iostream>

//A class that creates a source to be used with the router
//this class also creates packet for transmission
class Source {

private:
	unsigned int sourceID;
	unsigned int packetCount;
	PacketPriority sourcePriority;

	//assign new source ID for every source created
	static int NextID() {
		static int nextSourceID = 0;
		nextSourceID++;
		return nextSourceID;
	}
	
	static int NextPacketNum() {
		static int nextPacket = 0;
		nextPacket++;
		return nextPacket;
	}


public:
	Source();
	~Source();
	
	//Returns priority of a source to be used by the router function to display the priority
	PacketPriority GetPriority() {
		return sourcePriority;
	}
	
	//Each router channel can create packets for testing purposes
	MetaData CreatePacket(int packetNo);


};