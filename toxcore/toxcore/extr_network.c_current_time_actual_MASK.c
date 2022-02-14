
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct timeval {unsigned long long tv_sec; unsigned long long tv_usec; } ;
struct TYPE_3__ {int dwHighDateTime; int dwLowDateTime; } ;
typedef TYPE_1__ FILETIME ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct timeval*,int *) ;

__attribute__((used)) static uint64_t FUNC_2(void)
{
    uint64_t VAR_0;
    struct timeval VAR_1;
    FUNC_1(&VAR_1, ((void*)0));
    VAR_0 = 1000000ULL * VAR_1.tv_sec + VAR_1.tv_usec;
    return VAR_0;

}
