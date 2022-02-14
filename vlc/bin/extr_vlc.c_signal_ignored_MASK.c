
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; scalar_t__ sa_handler; scalar_t__ sa_sigaction; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int,int *,struct sigaction*) ;

__attribute__((used)) static bool FUNC_1 (int VAR_2)
{
    struct sigaction VAR_3;

    if (FUNC_0 (VAR_2, ((void*)0), &VAR_3))
        return 0;
    return ((VAR_3.sa_flags & VAR_0)
            ? (void *)VAR_3.sa_sigaction : (void *)VAR_3.sa_handler) == VAR_1;
}
