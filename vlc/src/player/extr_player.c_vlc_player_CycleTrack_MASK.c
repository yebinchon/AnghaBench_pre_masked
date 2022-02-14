
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct vlc_player_track {scalar_t__ selected; } ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 int VAR_0 ;
 int FUNC_0 (struct vlc_player_track const*) ;
 struct vlc_player_track* FUNC_1 (int *,int,size_t) ;
 size_t FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct vlc_player_track const*,int ) ;
 int FUNC_4 (int *,struct vlc_player_track const*) ;

__attribute__((used)) static void
FUNC_5(vlc_player_t *VAR_1, enum es_format_category_e VAR_2,
                      bool VAR_3)
{
    size_t VAR_4 = FUNC_2(VAR_1, VAR_2);
    if (!VAR_4)
        return;

    size_t VAR_5;
    bool VAR_6 = 0;
    for (size_t VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7)
    {
        const struct vlc_player_track *VAR_8 =
            FUNC_1(VAR_1, VAR_2, VAR_7);
        FUNC_0(VAR_8);
        if (VAR_8->selected)
        {
            if (VAR_6)
            {


                return;
            }
            VAR_5 = VAR_7;
            VAR_6 = 1;
        }
    }

    if (!VAR_6)
    {

        VAR_5 = VAR_3 ? 0 : VAR_4 - 1;
        VAR_6 = 1;
    }
    else
    {

        if ((VAR_3 && VAR_5 + 1 == VAR_4) || (!VAR_3 && VAR_5 == 0))
            VAR_6 = 0;
        else
            VAR_5 = VAR_5 + (VAR_3 ? 1 : -1);
    }

    const struct vlc_player_track *VAR_9 =
        FUNC_1(VAR_1, VAR_2, VAR_5);
    if (VAR_6)
        FUNC_3(VAR_1, VAR_9, VAR_0);
    else
        FUNC_4(VAR_1, VAR_9);
}
