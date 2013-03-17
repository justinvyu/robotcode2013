#include <stdio.h>

int main()
{
  int k = get_channel_count();
	printf("the number of channels that exist is %d\n",k); 
	camera_open(LOW_RES);
	int n = get_object_count(0); // gets how many objects are seen in the default channel
	if (n>0) // if there are blobs existant, go on
	{
		camera_update(); // update field of vision
		int w = get_object_count(0); // count how many objects there are
		//float get_object_center(3,0)
		printf("%d\n",w);
	}
	else // if no blobs around
	{
		printf("There are no blobs in the current field");
    int a = camera_update();
    if(a=0)
    {
      int a = camera_update(); // refresh again
    }
    else if(a==1)
    {
      int n = get_object_count(0); // refresh value of n
    }
	}	
}
