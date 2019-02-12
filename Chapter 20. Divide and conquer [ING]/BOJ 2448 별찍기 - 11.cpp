#include <iostream>

using namespace std;

void priStar(int x, int y, int z);

char star[3072][6144];

int main() {
	int line;
	scanf("%d", &line);

	for (int i = 0; i < line; i++) {
		for (int j = 0; j < line * 2; j++) {
			star[i][j] = ' ';
		}
	}
	priStar(line, 0, line - 1);
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < line * 2 - 1; j++) {
			printf("%c", star[i][j]);
		}
		if (i != line - 1)
			printf("\n");
	}
}

void priStar(int x, int y, int z) {
	if (x == 3) {
		star[y][z] = '*';
		star[y + 1][z - 1] = '*';
		star[y + 1][z + 1] = '*';
		star[y + 2][z - 2] = '*';
		star[y + 2][z - 1] = '*';
		star[y + 2][z] = '*';
		star[y + 2][z + 1] = '*';
		star[y + 2][z + 2] = '*';
		return;
	}
	priStar(x / 2, y, z);
	priStar(x / 2, y + (x / 2), z - (x / 2));
	priStar(x / 2, y + (x / 2), z + (x / 2));
}

/*
Input 1:
24

Output 1:
					   *
					  * *
					 *****
					*     *
				   * *   * *
				  ***** *****
				 *           *
				* *         * *
			   *****       *****
			  *     *     *     *
			 * *   * *   * *   * *
			***** ***** ***** *****
		   *                       *
		  * *                     * *
		 *****                   *****
		*     *                 *     *
	   * *   * *               * *   * *
	  ***** *****             ***** *****
	 *           *           *           *
	* *         * *         * *         * *
   *****       *****       *****       *****
  *     *     *     *     *     *     *     *
 * *   * *   * *   * *   * *   * *   * *   * *
***** ***** ***** ***** ***** ***** ***** *****
*/