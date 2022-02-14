
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_cond_t ;
typedef int pthread_condattr_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ) ;

void FUNC_6 (vlc_cond_t *VAR_1)
{
    pthread_condattr_t VAR_2;

    if (FUNC_5(FUNC_3 (&VAR_2))
     || FUNC_5(FUNC_4(&VAR_2, VAR_0))
     || FUNC_5(FUNC_1 (VAR_1, &VAR_2)))
        FUNC_0 ();

    FUNC_2 (&VAR_2);
}
