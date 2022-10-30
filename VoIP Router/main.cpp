#include "metadata.h"
#include "router.h"
#include "Source.h"


int main() {
	RouterChannel  router;
	Source sourceOne;//create source instance

		//create 10 packets for testing
	for (int i = 0; i < 10; i++) {
		router.SetPacket(sourceOne.CreatePacket(i + 1));
	}

	router.DisplayPriority(sourceOne.GetPriority());
	//router.SetPriority(1, Positive);
	//router.FirstPosition(1);
	//router.EmptyQueue();
}

