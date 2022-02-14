
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,struct timespec*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3 (void)
{
    struct timespec VAR_2;
    if (FUNC_2(FUNC_1(VAR_0, &VAR_2) != 0 || VAR_2.tv_sec != 0))
        FUNC_0 ();
    VAR_1 = (VAR_2.tv_nsec + 500) / 1000;
}
