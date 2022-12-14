#include "RouterChannel.h"
#include <iostream>

RouterChannel::RouterChannel() {
	//assign unique channel ID for each channel
	ChannelID = NextID();

}

RouterChannel::~RouterChannel() {
	//Destructor message executed on termination
	std::cout << "Router Queue is been destroyed";
}

void RouterChannel::EmptyQueue() {
	//Check packet queue size. If 0 it's empty else it's not empty
	PacketQueue.size() ? std::cout << "Not empty: " << PacketQueue.size() << std::endl : std::cout << "empty";

}

void RouterChannel::EnqueueRear(MetaData data) {
	//insert new packets at the start and 
	std::vector<MetaData>::iterator iter;
	iter = PacketQueue.end();
	iter = PacketQueue.insert(iter, data);
}

void RouterChannel::DequeueFront() {
	std::vector<MetaData>::iterator iter;
	iter = PacketQueue.begin();
	iter = PacketQueue.erase(iter);

}

void RouterChannel::FirstPosition(int sourceID) {
	int size = PacketQueue.size();
	for (int i = size - 1; i >= 0; i--)
		if (PacketQueue[i].sourceID == sourceID) {
			std::cout << "Data: " << PacketQueue[i].messageData << "\t";
			std::cout << "Source ID: " << PacketQueue[i].sourceID << "\t";
			std::cout << "Priority: " << GetPriority(PacketQueue[i].priority) << "\t";
			std::cout << "Packet Number: " << PacketQueue[i].packetNumber << "\n";
			return;
		}

}

std::string RouterChannel::GetPriority(PacketPriority p) {
	switch (p) {
	case(Normal):
		return "Normal";

	case(Negative):
		return "Negative";

	case(Positive):
		return "Positive";

	default:
		return"Not valid";
	}
}

void RouterChannel::SetPriority(int sourceID, PacketPriority p) {
	int packetSize = PacketQueue.size();
	for (int i = 0; i < packetSize; i++) {
		if (PacketQueue[i].sourceID == sourceID)
		{
			PacketQueue[i].priority = p;
		}
	}
}

void RouterChannel::DisplayPriority(PacketPriority p) {
	std::cout << "Source Priority is: " << GetPriority(p);
}