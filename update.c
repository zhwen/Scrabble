void update_hand(char hand[], int handCount[], char word[])
/*  Assumes that 'hand' has all the unique letters in word.
    Updates the hand: uses up the letters in the given word and update the handCount.
    hand: string
    handCount: array
    word: string
*/
{
	int i=0;
	char *p;
	for (i=0; word[i]!='\0'; i++)
	{
		p=strchr(hand, word[i]);
		if(p!=NULL)
			handCount[p-hand]--;
	}

}

