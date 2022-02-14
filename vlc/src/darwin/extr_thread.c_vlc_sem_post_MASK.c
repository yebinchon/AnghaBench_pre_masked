
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_sem_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4 (vlc_sem_t *VAR_3)
{
    int VAR_4;

    if (FUNC_1(FUNC_2(*VAR_3) == VAR_2))
        return 0;

    VAR_4 = VAR_0;

    if (FUNC_3(VAR_4 != VAR_1))
        FUNC_0 ("unlocking semaphore");
    return VAR_4;
}
