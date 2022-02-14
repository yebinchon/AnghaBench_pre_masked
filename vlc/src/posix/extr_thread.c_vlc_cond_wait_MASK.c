
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_mutex_t ;
typedef int vlc_cond_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2 (vlc_cond_t *VAR_0, vlc_mutex_t *VAR_1)
{
    int VAR_2 = FUNC_1( VAR_0, VAR_1 );
    FUNC_0 ("waiting on condition");
}
