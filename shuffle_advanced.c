#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 20
#define RANGE 15

int main()
{
	char *tune[COUNT] = {
		"Brandy", "Respect", "Hey Jude", "The Twist",
		"Uptown Funk", "Macarena", "Killer Queen", "Lady",
		"Foolish Games", "Call Me", "Royals", "The Sign",
		"Happy", "Billie Jean", "My Sharona", "Family Affair",
		"Hurts So Good", "Smooth", "Mack The Knife", "No One"
	};
	int frequency[COUNT];
	int recent[COUNT];
	int t,play,cycle,found;

	/* initialize stuff */
	srand( (unsigned)time(NULL) );	/* seed the randomizer */
	for(t=0;t<COUNT;t++)
	{
		frequency[t] = 0;			/* zero frequency counter */
		recent[t] = COUNT+1;		/* initialize recent buffer */
	}
	cycle = 0;						/* counts to 100 */

	/* Randomly play the tunes and keep track */
	while(cycle < 100)
	{
		do
		{
			play = rand() % COUNT;
			found = 0;
			for(t=0;t<RANGE;t++)
			{
				if(recent[t]==play)
					found=1;
			}
		} while(found);

		printf("Playing %d: %s\n",cycle+1,tune[play]);
		/* shift the recent list */
		for(t=COUNT-1;t>0;t--)
		{
			recent[t] = recent[t-1];
		}
		recent[0] = play;
		/* update frequency array */
		frequency[play]++;
		cycle++;
	}

	/* Display frequency list */
	puts("Play Frequency:");
	for(t=0;t<COUNT;t++)
		printf("%s, %d\n",
				tune[t],
				frequency[t]
			  );

	return(0);
}
