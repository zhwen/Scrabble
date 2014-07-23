void play_game(char word_list[MAX_WORDS][MAX_LENGTH+1])
/*  Allow the user to play an arbitrary number of hands.
    - Asks the user to input 'n' or 'r' or 'e'.
    - If the user inputs 'n', let the user play a new (random) hand. When done playing the hand, ask the 'n' or 'r' or 'e' question again.
    - If the user inputs 'r', let the user play the last hand again.
    - If the user inputs 'e', exit the game.
    - If the user inputs anything else, ask them again.*/
{
/*	Uncomment the code after you've finished Problem 5.
	int handCount[HAND_SIZE];
	char hand[HAND_SIZE+1];
	char temp[HAND_SIZE+1];
	int tempCount[HAND_SIZE];

	char c; int i;
	system("CLS");  //Clear the screen, for Windows only

	printf("Scrabble Word Game begins ...\n");
	deal_hand(hand, HAND_SIZE, handCount);
	do{
		strcpy(temp, hand);
		for (i=0; i<HAND_SIZE; i++)	tempCount[i]=handCount[i];
		play_hand(temp, tempCount, word_list);

		Again:
        printf("\nn - Playe a new game\nr - Play this game again\ne - exit");
		printf("\nEnter your choice, n, r, or e: ");
		fflush(stdin); 	//Clear input buffer, for Windows only

		scanf("%c", &c);
		switch(c)
		{
			case 'n': 	deal_hand(hand, HAND_SIZE, handCount);
						break;
			case 'r':	break;
			case 'e':	break;
			default:    printf("\nInvalid command."); goto Again;
		}
	}while (c!='e');
*/
}

