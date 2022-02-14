
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_player_t ;
struct vlc_player_input {int teletext_enabled; TYPE_2__* teletext_menu; int * player; } ;
struct vlc_input_event_es {int action; int id; int fmt; int title; } ;
struct TYPE_4__ {int es_id; } ;
struct TYPE_5__ {TYPE_1__ t; } ;







 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct vlc_player_input *VAR_2,
                                    const struct vlc_input_event_es *VAR_3)
{
    vlc_player_t *VAR_4 = VAR_2->player;
    switch (VAR_3->action)
    {
        case 132:
            if (VAR_2->teletext_menu)
            {
                FUNC_1(VAR_4, "Can't handle more than one teletext menu "
                         "track. Using the last one.");
                FUNC_4(VAR_2->teletext_menu);
            }
            VAR_2->teletext_menu = FUNC_5(VAR_3->id, VAR_3->title,
                                                             VAR_3->fmt);
            if (!VAR_2->teletext_menu)
                return;

            FUNC_3(VAR_4, VAR_1, 1);
            break;
        case 131:
        {
            if (VAR_2->teletext_menu && VAR_2->teletext_menu->t.es_id == VAR_3->id)
            {
                FUNC_0(!VAR_2->teletext_enabled);

                FUNC_4(VAR_2->teletext_menu);
                VAR_2->teletext_menu = ((void*)0);
                FUNC_3(VAR_4, VAR_1, 0);
            }
            break;
        }
        case 128:
            break;
        case 130:
        case 129:
            if (VAR_2->teletext_menu->t.es_id == VAR_3->id)
            {
                VAR_2->teletext_enabled = VAR_3->action == 130;
                FUNC_3(VAR_4, VAR_0,
                                     VAR_2->teletext_enabled);
            }
            break;
        default:
            FUNC_2();
    }
}
