
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int libvlc_media_player_t ;


 int ** FUNC_0 (int *,size_t*) ;
 int FUNC_1 (int **) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,char const*) ;
 int FUNC_5 (int *) ;

void FUNC_6( libvlc_media_player_t *VAR_0, int VAR_1,
                                   const char *VAR_2 )
{
    if (VAR_1 != 0 && VAR_1 != 1)
        VAR_1 = -1;

    if (VAR_2
     && FUNC_2 (VAR_2, "blend") && FUNC_2 (VAR_2, "bob")
     && FUNC_2 (VAR_2, "discard") && FUNC_2 (VAR_2, "linear")
     && FUNC_2 (VAR_2, "mean") && FUNC_2 (VAR_2, "x")
     && FUNC_2 (VAR_2, "yadif") && FUNC_2 (VAR_2, "yadif2x")
     && FUNC_2 (VAR_2, "phosphor") && FUNC_2 (VAR_2, "ivtc")
     && FUNC_2 (VAR_2, "auto"))
        return;

    if (VAR_2 && VAR_1 != 0)
        FUNC_4 (VAR_0, "deinterlace-mode", VAR_2);

    FUNC_3 (VAR_0, "deinterlace", VAR_1);

    size_t VAR_3;
    vout_thread_t **VAR_4 = FUNC_0 (VAR_0, &VAR_3);
    for (size_t VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
    {
        vout_thread_t *VAR_6 = VAR_4[VAR_5];

        if (VAR_2 && VAR_1 != 0)
            FUNC_4 (VAR_6, "deinterlace-mode", VAR_2);

        FUNC_3 (VAR_6, "deinterlace", VAR_1);
        FUNC_5(VAR_6);
    }
    FUNC_1 (VAR_4);
}
