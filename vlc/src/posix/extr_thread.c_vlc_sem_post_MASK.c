
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_sem_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4 (vlc_sem_t *VAR_2)
{
    int VAR_3;

    if (FUNC_1(FUNC_2 (VAR_2) == 0))
        return 0;

    VAR_3 = VAR_1;

    if (FUNC_3(VAR_3 != VAR_0))
        FUNC_0 ("unlocking semaphore");
    return VAR_3;
}
