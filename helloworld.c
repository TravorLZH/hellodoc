#include <stdio.h>

const char *msg="Hello world";	/**< The message to be printed */

/** \brief The entry of my program.
 *
 * This function returns zero on success.
 */
int main(void){
	printf("%s\n",msg);
	return 0;
}
