
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int libvlc_media_player_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,uintptr_t) ;
 int FUNC_3 (int *,char*,char*) ;

void FUNC_4( libvlc_media_player_t *VAR_0,
                                   void *VAR_1 )
{
    FUNC_0 (VAR_0 != ((void*)0));







    (void) VAR_1;
    FUNC_1 ("can't set hwnd: WIN32 build required");
    FUNC_0(0);
    FUNC_3 (VAR_0, "vout", "none");
    FUNC_3 (VAR_0, "window", "none");

}
