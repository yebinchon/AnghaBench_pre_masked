
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct timespec*,int ) ;

uint64_t FUNC_2(void)
{
    struct timespec VAR_1;

    FUNC_1(&VAR_1, VAR_0);


    uint64_t VAR_2 = (uint64_t)(VAR_1.tv_nsec) << 32;
    VAR_2 /= 1000000000;




    VAR_2 |= ((FUNC_0(70) * 365 + 17) * 24 * 60 * 60 + VAR_1.tv_sec) << 32;
    return VAR_2;
}
