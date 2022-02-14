
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int libvlc_int_t ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(libvlc_int_t *VAR_0)
{
    if (!FUNC_2(FUNC_0(VAR_0), "playlist-autostart"))
        return;
    vlc_playlist_t *VAR_1 = FUNC_1(VAR_0);
    if (!VAR_1)
        return;
    FUNC_6(VAR_1);
    if (FUNC_3(VAR_1) > 0)
    {
        if (FUNC_4(VAR_1) < 0)
            FUNC_5(VAR_1, 0);
        FUNC_7(VAR_1);
    }
    FUNC_8(VAR_1);
}
