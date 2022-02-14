
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int vlc_player_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (float) ;
 float FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int ** FUNC_4 (int *,size_t*) ;
 int FUNC_5 (int *,int **,size_t) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int **,size_t,int ) ;
 int FUNC_8 (int **,size_t,int ,int) ;
 int FUNC_9 (int **,size_t,int,int ) ;

void
FUNC_10(vlc_player_t *VAR_2, bool VAR_3)
{
    size_t VAR_4;
    vout_thread_t **VAR_5 = FUNC_4(VAR_2, &VAR_4);

    bool VAR_6 = FUNC_3(VAR_2);
    int VAR_7 = FUNC_1(FUNC_2(VAR_2) * 100.f);
    if (VAR_3 && VAR_6)
        FUNC_7(VAR_5, VAR_4, VAR_0);
    else
    {
        if (FUNC_6(VAR_2))
            FUNC_9(VAR_5, VAR_4, VAR_7, VAR_1);
        FUNC_8(VAR_5, VAR_4, FUNC_0("Volume: %ld%%"), VAR_7);
    }

    FUNC_5(VAR_2, VAR_5, VAR_4);
}
