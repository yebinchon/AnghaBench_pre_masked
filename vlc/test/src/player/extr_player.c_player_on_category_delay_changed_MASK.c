
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_tick_t ;
typedef int vlc_player_t ;
struct report_category_delay {int cat; int delay; } ;
struct ctx {int dummy; } ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 int FUNC_0 (int ,struct report_category_delay) ;
 struct ctx* FUNC_1 (int *,void*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(vlc_player_t *VAR_1,
                                 enum es_format_category_e VAR_2, vlc_tick_t VAR_3,
                                 void *VAR_4)
{
    struct ctx *VAR_5 = FUNC_1(VAR_1, VAR_4);
    struct report_category_delay VAR_6 = {
        .cat = VAR_2,
        .delay = VAR_3,
    };
    FUNC_0(VAR_0, VAR_6);
}
