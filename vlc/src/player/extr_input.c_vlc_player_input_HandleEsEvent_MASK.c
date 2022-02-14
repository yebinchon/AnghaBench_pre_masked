
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vlc_player_track_vector ;
typedef int vlc_player_t ;
struct TYPE_18__ {int selected; struct TYPE_18__* es_id; } ;
struct vlc_player_track_priv {TYPE_7__ t; } ;
struct TYPE_15__ {int current_video_track; int current_audio_track; int current_subtitle_track; } ;
struct TYPE_16__ {int default_video_track; int default_audio_track; int default_subtitle_track; TYPE_3__ states; } ;
struct vlc_player_input {TYPE_4__ ml; int * player; } ;
struct vlc_input_event_es {int action; scalar_t__ id; TYPE_5__* fmt; scalar_t__ title; } ;
struct TYPE_13__ {int i_magazine; } ;
struct TYPE_14__ {TYPE_1__ teletext; } ;
struct TYPE_17__ {scalar_t__ i_cat; scalar_t__ i_codec; int i_id; TYPE_2__ subs; } ;





 scalar_t__ VAR_0 ;





 TYPE_7__* VAR_1 ;
 TYPE_7__* VAR_2 ;
 TYPE_7__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,TYPE_7__*,int ) ;
 int FUNC_4 (int *,int ,TYPE_7__*,TYPE_7__*) ;
 int * FUNC_5 (struct vlc_player_input*,scalar_t__) ;
 int FUNC_6 (struct vlc_player_input*,struct vlc_input_event_es const*) ;
 int FUNC_7 (struct vlc_player_track_priv*) ;
 struct vlc_player_track_priv* FUNC_8 (scalar_t__,scalar_t__,TYPE_5__*) ;
 int FUNC_9 (struct vlc_player_track_priv*,scalar_t__,TYPE_5__*) ;
 struct vlc_player_track_priv* FUNC_10 (int *,scalar_t__,size_t*) ;
 int FUNC_11 (int *,struct vlc_player_track_priv*) ;
 int FUNC_12 (int *,size_t) ;

__attribute__((used)) static void
FUNC_13(struct vlc_player_input *VAR_7,
                               const struct vlc_input_event_es *VAR_8)
{
    FUNC_0(VAR_8->id && VAR_8->title && VAR_8->fmt);

    if (VAR_8->fmt->i_cat == 134 && VAR_8->fmt->i_codec == VAR_0
     && (VAR_8->fmt->subs.teletext.i_magazine == 1
      || VAR_8->fmt->subs.teletext.i_magazine > 8))
    {
        FUNC_6(VAR_7, VAR_8);
        return;
    }

    vlc_player_track_vector *VAR_9 =
        FUNC_5(VAR_7, VAR_8->fmt->i_cat);
    if (!VAR_9)
        return;

    vlc_player_t *VAR_10 = VAR_7->player;
    struct vlc_player_track_priv *VAR_11;
    switch (VAR_8->action)
    {
        case 132:
            VAR_11 = FUNC_8(VAR_8->id, VAR_8->title, VAR_8->fmt);
            if (!VAR_11)
                break;

            if (!FUNC_11(VAR_9, VAR_11))
            {
                FUNC_7(VAR_11);
                break;
            }
            FUNC_4(VAR_10, VAR_5,
                                 VAR_1, &VAR_11->t);
            switch (VAR_8->fmt->i_cat)
            {
                case 133:




                    if (VAR_7->ml.states.current_video_track != -2 &&
                        VAR_7->ml.states.current_video_track == VAR_8->fmt->i_id)
                        FUNC_3(VAR_7->player, &VAR_11->t,
                                               VAR_4);
                    break;
                case 135:
                    if (VAR_7->ml.states.current_audio_track != -2 &&
                        VAR_7->ml.states.current_audio_track == VAR_8->fmt->i_id)
                        FUNC_3(VAR_7->player, &VAR_11->t,
                                               VAR_4);
                    break;
                case 134:
                    if (VAR_7->ml.states.current_subtitle_track != -2 &&
                        VAR_7->ml.states.current_subtitle_track == VAR_8->fmt->i_id)
                        FUNC_3(VAR_7->player, &VAR_11->t,
                                               VAR_4);
                default:
                    break;
            }
            break;
        case 131:
        {
            size_t VAR_12;
            VAR_11 = FUNC_10(VAR_9, VAR_8->id, &VAR_12);
            if (VAR_11)
            {
                FUNC_4(VAR_10, VAR_5,
                                     VAR_2, &VAR_11->t);
                FUNC_12(VAR_9, VAR_12);
                FUNC_7(VAR_11);
            }
            break;
        }
        case 128:
            VAR_11 = FUNC_10(VAR_9, VAR_8->id, ((void*)0));
            if (!VAR_11)
                break;
            if (FUNC_9(VAR_11, VAR_8->title, VAR_8->fmt) != 0)
                break;
            FUNC_4(VAR_10, VAR_5,
                                 VAR_3, &VAR_11->t);
            break;
        case 130:
            VAR_11 = FUNC_10(VAR_9, VAR_8->id, ((void*)0));
            if (VAR_11)
            {
                VAR_11->t.selected = 1;
                FUNC_4(VAR_10, VAR_6,
                                     ((void*)0), VAR_11->t.es_id);
            }
            switch (VAR_8->fmt->i_cat)
            {



                case 133:
                    if (VAR_7->ml.default_video_track == -2)
                        VAR_7->ml.default_video_track = VAR_8->fmt->i_id;
                    break;
                case 135:
                    if (VAR_7->ml.default_audio_track == -2)
                        VAR_7->ml.default_audio_track = VAR_8->fmt->i_id;
                    break;
                case 134:
                    if (VAR_7->ml.default_subtitle_track == -2)
                        VAR_7->ml.default_subtitle_track = VAR_8->fmt->i_id;
                    break;
                default:
                    break;
            }
            break;
        case 129:
            VAR_11 = FUNC_10(VAR_9, VAR_8->id, ((void*)0));
            if (VAR_11)
            {
                FUNC_2(VAR_10, VAR_8->id);
                VAR_11->t.selected = 0;
                FUNC_4(VAR_10, VAR_6,
                                     VAR_11->t.es_id, ((void*)0));
            }
            break;
        default:
            FUNC_1();
    }
}
