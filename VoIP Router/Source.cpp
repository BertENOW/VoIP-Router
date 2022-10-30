#include "Source.h"

Source::Source() {
	sourceID = NextID();
}

Source::~Source() {
	std::cout << "\nSource is been destroyeed" ;
}

MetaData Source::CreatePacket(int packetNo) {
	MetaData packet;
	std::string message = "Message data " + std::to_string(packetNo);
	packet.messageData = message;
	packet.sourceID = sourceID;
	packet.priority = Negative;
	packet.packetNumber = packetNo;
	return packet;
}