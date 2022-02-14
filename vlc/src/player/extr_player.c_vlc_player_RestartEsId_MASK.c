
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
typedef int vlc_es_id_t ;
struct vlc_player_input {int thread; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 struct vlc_player_input* FUNC_1 (int *) ;

void
FUNC_2(vlc_player_t *VAR_1, vlc_es_id_t *VAR_2)
{
    struct vlc_player_input *VAR_3 = FUNC_1(VAR_1);

    if (VAR_3)
        FUNC_0(VAR_3->thread, VAR_0, VAR_2);
}
