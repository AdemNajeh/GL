#include "my_header.h"
#include "TP_lib_suite.h"


int main (void)
{
	unsigned char combinaison_w[6];
	unsigned char combinaison_p[6] = {10,12,14,93,2,70};
	unsigned char val_exactes = 0;
	unsigned char nb_win = 0;
	unsigned char i,b,c;


	for (c=0; c<100; c++)
	{
		initialiserTirage();

		for (b=0; b<6; b++)
		{
			combinaison_w[b] = tirerNumero();
		}

		for (i=0; i<6; i++)
		{
			for (b=0; b<6; b++)
			{
				if(combinaison_w[i] == combinaison_p[b])
				{
					val_exactes++;
				}
			}

		}

		if(nb_win < val_exactes)
		{
			nb_win = val_exactes;
		}

		val_exactes = 0;
	}

	return 0;
}

