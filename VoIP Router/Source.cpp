#include "Source.h"

Source::Source() {
	sourceID = NextID();
	sourcePriority = Normal;
}

Source::~Source() {
	std::cout << "\nSource is been destroyeed" ;
}

MetaData Source::CreatePacket(int packetNo) {
	MetaData packet;
	std::string message = "Message data " + std::to_string(packetNo);
	packet.messageData = message;
	packet.sourceID = sourceID;
	packet.priority = sourcePriority;
	packet.packetNumber = NextPacketNum();
	packetCount = packet.packetNumber;
	return packet;
}