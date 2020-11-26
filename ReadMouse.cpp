#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
    int fd,bytes;
    unsigned char data[3];
    fd = open("/dev/input/mice",O_RDWR);
    if (fd==-1)
    {
        printf("-1");
        return -1;
    }
    signed char x,y;
    while (1)
    {
        bytes = read(fd,data,sizeof(data));
        if (bytes>0)
        {
            x = data[1];
            y = data[2];
            printf("x = %d, y = %d \n",x,y);
        }
    }
    close(fd);
    return 0;

}