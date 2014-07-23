void  display_hand(char hand[], int handCount[])
/* Displays the letters currently in the hand.
    hand: string (lowercase letters)
    handCount: array of number of characters in the string
*/
{	int i=0, j;
	while(hand[i])
	{
		j=0;
		while(j++ <handCount[i])
			printf("%c ", hand[i]);
		i++;
	}
}

