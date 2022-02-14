
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_3__ {scalar_t__ i_cat; } ;
struct TYPE_4__ {TYPE_1__ fmt; } ;
struct vlc_player_track_priv {int * vout; TYPE_2__ t; } ;
struct vlc_player_input {int * player; } ;
struct vlc_input_event_vout {int action; int * id; int * vout; int order; } ;


 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int ,int *,int ,int *) ;
 struct vlc_player_track_priv* FUNC_3 (struct vlc_player_input*,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void
FUNC_6(struct vlc_player_input *VAR_5,
                                 const struct vlc_input_event_vout *VAR_6)
{
    FUNC_0(VAR_6->vout);
    FUNC_0(VAR_6->id);

    vlc_player_t *VAR_7 = VAR_5->player;

    struct vlc_player_track_priv *VAR_8 =
        FUNC_3(VAR_5, VAR_6->id, ((void*)0));
    if (!VAR_8)
        return;

    const bool VAR_9 = VAR_8->t.fmt.i_cat == VAR_0;

    switch (VAR_6->action)
    {
        case 129:
            VAR_8->vout = VAR_6->vout;
            FUNC_2(VAR_7, VAR_4,
                                 VAR_1, VAR_6->vout,
                                 VAR_6->order, VAR_6->id);

            if (VAR_9)
            {

                FUNC_4(VAR_7, VAR_6->vout);
            }
            break;
        case 128:
            if (VAR_9)
            {

                FUNC_5(VAR_7, VAR_6->vout);
            }

            VAR_8->vout = ((void*)0);
            FUNC_2(VAR_7, VAR_4,
                                 VAR_2, VAR_6->vout,
                                 VAR_3, VAR_6->id);
            break;
        default:
            FUNC_1();
    }
}
