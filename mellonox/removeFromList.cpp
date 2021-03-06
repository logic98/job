/*
 * removeFromList.cpp
 *
 *  Created on: Mar 22, 2016
 *      Author: issuser
 */
#include "../job.hpp"
#include <iostream>
using namespace std;

/**
 * Implement the function removeItem which removes the item at location i from the list and returns the removed item.

Notes:

- i (the location to remove) is given as an argument to the function
- No need to check element value
- You can assume anything you want as long as you describe your assumption

Answer:
 */

typedef struct element_t {
	int value;
	element_t *next;
} element_t;
/**
 *
 */
element_t* removeFromList(element_t **head, int location) {
	if (head == NULL || *head == NULL || location < 0)
		return NULL;

	//use two pointers for the removal
	element_t *pre = NULL;
	element_t *curr = *head;
	for (int j = 0; curr != NULL; j++) {
		if (j == location) {
			if (pre == NULL) { // remove the head node
				*head = curr->next;
			} else {
				pre->next = curr->next;
			}
			curr->next = NULL;
			return curr;
		} else {
			pre = curr;
			curr = curr->next;
		}
	}
	return NULL;
}


