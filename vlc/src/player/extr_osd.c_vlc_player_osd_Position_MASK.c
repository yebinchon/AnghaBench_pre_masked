
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef float vlc_tick_t ;
typedef int vlc_player_t ;
struct vlc_player_input {float length; } ;
typedef enum vlc_player_whence { ____Placeholder_vlc_player_whence } vlc_player_whence ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float) ;
 int VAR_2 ;
 float VAR_3 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (struct vlc_player_input*) ;
 scalar_t__ FUNC_3 (struct vlc_player_input*) ;
 int ** FUNC_4 (int *,size_t*) ;
 int FUNC_5 (int *,int **,size_t) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int **,size_t,char*,char*,...) ;
 int FUNC_8 (int **,size_t,float,int ) ;

void
FUNC_9(vlc_player_t *VAR_4,
                        struct vlc_player_input *VAR_5, vlc_tick_t VAR_6,
                        float VAR_7, enum vlc_player_whence VAR_8)
{
    if (VAR_5->length != VAR_3)
    {
        if (VAR_6 == VAR_3)
            VAR_6 = VAR_7 * VAR_5->length;
        else
            VAR_7 = VAR_6 / (float) VAR_5->length;
    }

    size_t VAR_9;
    vout_thread_t **VAR_10 = FUNC_4(VAR_4, &VAR_9);

    if (VAR_6 != VAR_3)
    {
        if (VAR_8 == VAR_2)
        {
            VAR_6 += FUNC_3(VAR_5);
            if (VAR_6 < 0)
                VAR_6 = 0;
        }

        char VAR_11[VAR_0];
        FUNC_1(VAR_11, FUNC_0(VAR_6));
        if (VAR_5->length != VAR_3)
        {
            char VAR_12[VAR_0];
            FUNC_1(VAR_12, FUNC_0(VAR_5->length));
            FUNC_7(VAR_10, VAR_9, "%s / %s", VAR_11, VAR_12);
        }
        else
            FUNC_7(VAR_10, VAR_9, "%s", VAR_11);
    }

    if (FUNC_6(VAR_4))
    {
        if (VAR_8 == VAR_2)
        {
            VAR_7 += FUNC_2(VAR_5);
            if (VAR_7 < 0.f)
                VAR_7 = 0.f;
        }
        FUNC_8(VAR_10, VAR_9, VAR_7 * 100, VAR_1);
    }
    FUNC_5(VAR_4, VAR_10, VAR_9);
}
