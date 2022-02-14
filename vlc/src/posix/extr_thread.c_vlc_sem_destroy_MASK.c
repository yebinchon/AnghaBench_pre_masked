
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_sem_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3 (vlc_sem_t *VAR_1)
{
    int VAR_2;

    if (FUNC_1(FUNC_2 (VAR_1) == 0))
        return;

    VAR_2 = VAR_0;

    FUNC_0 ("destroying semaphore");
}
