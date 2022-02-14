
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int vlc_player_t ;
typedef int vlc_es_id_t ;
struct report_vout {int action; int order; int es_id; int vout; } ;
struct ctx {int dummy; } ;
typedef enum vlc_vout_order { ____Placeholder_vlc_vout_order } vlc_vout_order ;
typedef enum vlc_player_vout_action { ____Placeholder_vlc_player_vout_action } vlc_player_vout_action ;


 int FUNC_0 (int ,struct report_vout) ;
 int FUNC_1 (int ) ;
 struct ctx* FUNC_2 (int *,void*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(vlc_player_t *VAR_1,
                       enum vlc_player_vout_action VAR_2,
                       vout_thread_t *VAR_3, enum vlc_vout_order VAR_4,
                       vlc_es_id_t *VAR_5, void *VAR_6)
{
    struct ctx *VAR_7 = FUNC_2(VAR_1, VAR_6);
    struct report_vout VAR_8 = {
        .action = VAR_2,
        .vout = FUNC_4(VAR_3),
        .order = VAR_4,
        .es_id = FUNC_3(VAR_5),
    };
    FUNC_1(VAR_8.es_id);
    FUNC_0(VAR_0, VAR_8);
}
