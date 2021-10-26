/*#include <stdio.h>
#include <math.h>
int main() {
	
	float x, res;
	for (x = 2; ; x += 0.2f) {
			if (x < 2.5f) {
				res = cos(log(pow(x,2)));
				printf("The result for x=%.1f is: %f\n",x , res);
			}
			else if (x > 2.5f) {
				if (x <= 3.5f) {
					res = 1 / cos(pow(x, 4));
					printf("The result for x=%.1f is: %f\n", x, res);
				}
				if (x > 3.5f) {
					res = tan(sin(x));
					printf("The result for x=%.1f is: %f\n", x, res);
				}
			}
	}
	return 0;
}*/
#include <stdio.h>
#include <math.h>
int main() {
	float x, res;
	float d = 0.000001f;
	for (x = 0.2f; x <= 0.3f; x += 0.01f) {
		for (int k = 0;k <= 10 ; k++) {
			res =(pow(x,(4*k+3)))/(4*k+3);
			if (fabs(res) > d) {
				break;
			}
		}
		printf("The result for x = %.2f is %.6f\n", x, res);
	}

	return 0;


}
