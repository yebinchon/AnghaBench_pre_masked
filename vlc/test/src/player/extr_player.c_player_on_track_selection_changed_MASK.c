
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
typedef int vlc_es_id_t ;
struct report_track_selection {int * selected_id; int * unselected_id; } ;
struct ctx {int dummy; } ;


 int FUNC_0 (int ,struct report_track_selection) ;
 int FUNC_1 (int) ;
 struct ctx* FUNC_2 (int *,void*) ;
 int VAR_0 ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(vlc_player_t *VAR_1,
                                  vlc_es_id_t *VAR_2,
                                  vlc_es_id_t *VAR_3, void *VAR_4)
{
    struct ctx *VAR_5 = FUNC_2(VAR_1, VAR_4);
    struct report_track_selection VAR_6 = {
        .unselected_id = VAR_2 ? FUNC_3(VAR_2) : ((void*)0),
        .selected_id = VAR_3 ? FUNC_3(VAR_3) : ((void*)0),
    };
    FUNC_1(!!VAR_2 == !!VAR_6.unselected_id);
    FUNC_1(!!VAR_3 == !!VAR_6.selected_id);
    FUNC_0(VAR_0, VAR_6);
}
