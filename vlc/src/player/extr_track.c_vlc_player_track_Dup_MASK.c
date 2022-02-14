
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_player_track {int selected; int fmt; int name; int es_id; } ;
struct vlc_player_track_priv {struct vlc_player_track t; } ;


 struct vlc_player_track_priv* FUNC_0 (int ,int ,int *) ;

struct vlc_player_track *
FUNC_1(const struct vlc_player_track *VAR_0)
{
    struct vlc_player_track_priv *VAR_1 =
        FUNC_0(VAR_0->es_id, VAR_0->name, &VAR_0->fmt);

    if (!VAR_1)
        return ((void*)0);
    VAR_1->t.selected = VAR_0->selected;
    return &VAR_1->t;
}
