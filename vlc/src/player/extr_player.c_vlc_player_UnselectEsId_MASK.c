
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
typedef int vlc_es_id_t ;
struct vlc_player_input {int thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;
 struct vlc_player_input* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;

void
FUNC_3(vlc_player_t *VAR_2, vlc_es_id_t *VAR_3)
{
    struct vlc_player_input *VAR_4 = FUNC_1(VAR_2);
    if (!VAR_4)
        return;

    int VAR_5 = FUNC_0(VAR_4->thread, VAR_0,
                                        VAR_3);
    if (VAR_5 == VAR_1)
        FUNC_2(VAR_2, VAR_3, 0);
}
