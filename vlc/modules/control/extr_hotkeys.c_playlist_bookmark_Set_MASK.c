
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_playlist_t ;
typedef int vlc_player_t ;
typedef int intf_thread_t ;
typedef int input_item_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int,char*) ;
 int FUNC_4 (int *,char*,int) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static inline void
FUNC_7(intf_thread_t *VAR_2,
                      vlc_playlist_t *VAR_3, char *VAR_4, int VAR_5)
{
    FUNC_4(VAR_2, VAR_4, VAR_1 | VAR_0);
    vlc_player_t *VAR_6 = FUNC_6(VAR_3);
    input_item_t *VAR_7 = FUNC_5(VAR_6);
    if (VAR_7)
    {
        char *VAR_8 = FUNC_2(VAR_7);
        FUNC_0(VAR_4, VAR_8);
        FUNC_3(VAR_2, "setting playlist bookmark %i to %s", VAR_5, VAR_8);
        FUNC_1(VAR_8);
    }
}
