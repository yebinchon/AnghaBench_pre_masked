
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;

int64_t
FUNC_3(void)
{
    struct timeval VAR_1;
    int64_t VAR_2;
    int VAR_3;

    VAR_3 = FUNC_0(&VAR_1, ((void*)0));
    if (VAR_3 < 0) {
        FUNC_1("gettimeofday failed: %s", FUNC_2(VAR_0));
        return -1;
    }

    VAR_2 = (int64_t)VAR_1.tv_sec * 1000000LL + (int64_t)VAR_1.tv_usec;

    return VAR_2;
}
