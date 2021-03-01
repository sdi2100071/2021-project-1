//////////////////////////////////////////////////////////////////
//
// Test για το state.h module
//
//////////////////////////////////////////////////////////////////

#include "acutest.h"			// Απλή βιβλιοθήκη για unit testing

#include "state.h"

void test_state_create(void) {

	State state = state_create();
	TEST_CHECK(state != NULL);

	StateInfo info = state_info(state);

	TEST_CHECK(info->character != NULL);
	TEST_CHECK(info->character->rect.x == 0);
	TEST_CHECK(info->character->rect.y == -info->character->rect.height);

	TEST_CHECK(info->current_portal == 0);
	TEST_CHECK(info->wins == 0);
	TEST_CHECK(info->playing);

	// Προσθέστε επιπλέον ελέγχους
}

// Προσθέστε επιπλέον συναρτήσεις
// ...


// Λίστα με όλα τα tests προς εκτέλεση
TEST_LIST = {
	{ "test_state_create", test_state_create },

	{ NULL, NULL } // τερματίζουμε τη λίστα με NULL
};