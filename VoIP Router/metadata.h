#pragma once

#include <string>
#include <iostream>

//Packet priority for storign queue priority
enum PacketPriority {
	Normal,
	Positive,
	Negative
};

struct MetaData {
	std::string messageData;
	unsigned int sourceID;
	PacketPriority  priority;
	unsigned int packetNumber;
};
