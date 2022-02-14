
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
struct vlc_player_track {int es_id; } ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 int FUNC_0 (int ) ;
 struct vlc_player_track* FUNC_1 (int *,int,size_t) ;
 size_t FUNC_2 (int *,int) ;

__attribute__((used)) static const struct vlc_player_track *
FUNC_3(vlc_player_t *VAR_0, enum es_format_category_e VAR_1, int VAR_2)
{
    size_t VAR_3 = FUNC_2(VAR_0, VAR_1);
    for (size_t VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4)
    {
        const struct vlc_player_track *VAR_5 =
                FUNC_1(VAR_0, VAR_1, VAR_4);
        if (VAR_2 == FUNC_0(VAR_5->es_id))
            return VAR_5;
    }
    return ((void*)0);
}
