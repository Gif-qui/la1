#include <stdlib.h>
#include "la1.h"

struct linkedNode {
	int val;
	struct linkedNode* nextNode = NULL;
}

numGen(int num_values, int seed) {
	listHead = new linkedNode();
	srand(seed);
	for (int i = 0; i <= num_values; i++) 
		int newNum = rand();
		currNode = listHead;
		while (currNode -> nextNode != NULL)
			currNode -> val = newNum;
			currNode -> nextNode = new linkedNode();
	return listHead
}

numMeaner(linkedNode list) {
	int total;
	int size;
	linkedNode currNode = list;
	while (currNode -> nextNode != NULL)
		total += currNode->val;
		size++;
	int mean = total / size;
	return mean;
}

main() {	
	printf("Enter the number of values to be generated")
	scanf("%d", int num_values);
	printf("Enter the seed");
	scanf("%d", int seed);
	linkedNode numsList = numGen(num_values, seed);
	mean = numMeaner(numsList);
	currNode = numsList;
	while currNode->nextNode != NULL) 
		printf("Random value: %d%\n", currNode->val);
	printf("The mean of the generated numbers: %d%\n", mean);
}

