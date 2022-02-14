
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;


 int VAR_0 ;

 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (struct timeval*,int *) ;

int FUNC_2(struct timespec *VAR_1, int VAR_2)
{
    switch (VAR_2)
    {
        case 128:

            if (FUNC_0(VAR_0, VAR_1) == 0)
                break;


        {
            struct timeval VAR_3;

            if (FUNC_1(&VAR_3, ((void*)0)) == 0)
            {
                VAR_1->tv_sec = VAR_3.tv_sec;
                VAR_1->tv_nsec = VAR_3.tv_usec * 1000;
                break;
            }
        }


        default:
            return 0;
    }
    return VAR_2;
}
