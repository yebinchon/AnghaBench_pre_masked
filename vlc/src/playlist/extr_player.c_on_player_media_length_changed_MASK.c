
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vlc_tick_t ;
typedef int vlc_playlist_t ;
typedef int vlc_player_t ;
typedef int input_item_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void
FUNC_5(vlc_player_t *VAR_0, vlc_tick_t VAR_1,
                               void *VAR_2)
{
    FUNC_0(VAR_0);
    FUNC_0(VAR_1);
    vlc_playlist_t *VAR_3 = VAR_2;


    FUNC_3(VAR_3);

    input_item_t *VAR_4 = FUNC_2(VAR_0);
    FUNC_1(VAR_4);

    FUNC_4(VAR_3, VAR_4);
}
