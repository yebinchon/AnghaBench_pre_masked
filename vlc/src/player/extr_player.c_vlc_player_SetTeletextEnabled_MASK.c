
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_player_t ;
struct vlc_player_input {TYPE_2__* teletext_menu; } ;
struct TYPE_3__ {int es_id; } ;
struct TYPE_4__ {TYPE_1__ t; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 struct vlc_player_input* FUNC_2 (int *) ;

void
FUNC_3(vlc_player_t *VAR_1, bool VAR_2)
{
    struct vlc_player_input *VAR_3 = FUNC_2(VAR_1);
    if (!VAR_3 || !VAR_3->teletext_menu)
        return;
    if (VAR_2)
        FUNC_0(VAR_1, VAR_3->teletext_menu->t.es_id,
                              VAR_0);
    else
        FUNC_1(VAR_1, VAR_3->teletext_menu->t.es_id);
}
