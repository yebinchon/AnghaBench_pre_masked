
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_cond_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *) ;

void FUNC_3 (vlc_cond_t *VAR_1)
{
    int VAR_2 = FUNC_2 (VAR_1);
    if (VAR_2 != 0) {

        FUNC_1("pthread_cond_destroy returned %i\n", VAR_2);


        if (VAR_2 == VAR_0)
            return;
    }

    FUNC_0 ("destroying condition");
}
