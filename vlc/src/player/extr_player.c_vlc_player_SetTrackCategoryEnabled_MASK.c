
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_player_t ;
struct vlc_player_input {int * thread; } ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;
struct TYPE_2__ {int sout_var; int var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int) ;
 struct vlc_player_input* FUNC_3 (int *) ;

void
FUNC_4(vlc_player_t *VAR_3,
                                   enum es_format_category_e VAR_4, bool VAR_5)
{
    FUNC_0(VAR_4 >= VAR_1 && VAR_4 <= VAR_0);
    struct vlc_player_input *VAR_6 = FUNC_3(VAR_3);

    FUNC_1(VAR_3, VAR_2[VAR_4].var, VAR_5);
    FUNC_1(VAR_3, VAR_2[VAR_4].sout_var, VAR_5);

    if (VAR_6)
    {
        FUNC_1(VAR_6->thread, VAR_2[VAR_4].var, VAR_5);
        FUNC_1(VAR_6->thread, VAR_2[VAR_4].sout_var, VAR_5);

        if (!VAR_5)
            FUNC_2(VAR_3, VAR_4);
    }
}
