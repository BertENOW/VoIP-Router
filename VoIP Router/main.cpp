#include "metadata.h"
#include "router.h"
//#include "router.cpp"



int main() {
	RouterChannel  router;
	router.SetPriority(1, Positive);
	router.FirstPosition(1);
	//router.EmptyQueue();
}

