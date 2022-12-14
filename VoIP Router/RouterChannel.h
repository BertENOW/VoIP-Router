#pragma once

#include <vector>
//#include <algorithm>
#include "metadata.h"

class RouterChannel {

private:
	std::vector<MetaData> PacketQueue;
	unsigned int ChannelID;

	//static function to assign unique channel ID
	//I decided to start the channelID from 1
	static int NextID() {
		static int nextChannelID = 0;
		nextChannelID++;
		return nextChannelID;
	};

	std::string GetPriority(PacketPriority p);

public:
	RouterChannel();
	~RouterChannel();

	//Check if the queue is empty
	void EmptyQueue();
	
	//Function to display the content from a specified source
	//function takes source ID and searches the packet queue from the front(start) for packets from that source
	void FirstPosition(int sourceID);

	//Navigate through packet queue to set new priority
	void SetPriority(int sourceID, PacketPriority p);

	//Display priority of a scecific source. 
	void DisplayPriority(PacketPriority p);

	//Function to add packet data to the packet queue for the rear
	void EnqueueRear(MetaData data);

	//Function to remove packet data at the front of the queue
	void DequeueFront();

};
