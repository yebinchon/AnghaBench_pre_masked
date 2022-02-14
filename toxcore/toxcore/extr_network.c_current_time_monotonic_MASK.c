
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
typedef unsigned long long uint32_t ;
struct timespec {unsigned long long tv_sec; unsigned long long tv_nsec; } ;
struct TYPE_3__ {unsigned long long tv_sec; unsigned long long tv_nsec; } ;
typedef TYPE_1__ mach_timespec_t ;
typedef int clock_serv_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int VAR_2 ;
 unsigned long long VAR_3 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,struct timespec*) ;
 int FUNC_3 (int ,int ,int *) ;
 unsigned long long VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 () ;

uint64_t FUNC_7(void)
{
    uint64_t VAR_5;
    struct timespec VAR_6;
    FUNC_2(VAR_0, &VAR_6);

    VAR_5 = 1000ULL * VAR_6.tv_sec + (VAR_6.tv_nsec / 1000000ULL);

    return VAR_5;
}
