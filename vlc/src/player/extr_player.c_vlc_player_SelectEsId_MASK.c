
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_player_t ;
typedef int vlc_es_id_t ;
struct vlc_player_track {int * es_id; scalar_t__ selected; } ;
struct vlc_player_input {int thread; } ;
typedef enum vlc_player_select_policy { ____Placeholder_vlc_player_select_policy } vlc_player_select_policy ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int **) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int ** FUNC_2 (size_t,int) ;
 int FUNC_3 (int *) ;
 struct vlc_player_track* FUNC_4 (int *,int const,size_t) ;
 size_t FUNC_5 (int *,int const) ;
 unsigned int FUNC_6 (int *,int const,int **) ;
 struct vlc_player_input* FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int) ;

unsigned
FUNC_9(vlc_player_t *VAR_3, vlc_es_id_t *VAR_4,
                      enum vlc_player_select_policy VAR_5)
{
    struct vlc_player_input *VAR_6 = FUNC_7(VAR_3);
    if (!VAR_6)
        return 0;

    if (VAR_5 == VAR_1)
        goto select_one;


    const enum es_format_category_e VAR_7 = FUNC_3(VAR_4);
    const size_t VAR_8 = FUNC_5(VAR_3, VAR_7);

    if (VAR_8 == 0)
        return 0;

    size_t VAR_9 = 1;
    for (size_t VAR_10 = 0; VAR_10 < VAR_8; ++VAR_10)
    {
        const struct vlc_player_track *VAR_11 =
            FUNC_4(VAR_3, VAR_7, VAR_10);
        if (VAR_11->selected && VAR_11->es_id != VAR_4)
            VAR_9++;
    }

    if (VAR_9 == 1)
        goto select_one;

    vlc_es_id_t **VAR_12 =
        FUNC_2(VAR_9 + 1, sizeof(vlc_es_id_t*));
    if (!VAR_12)
        return 0;

    size_t VAR_13 = 0;

    VAR_12[VAR_13++] = VAR_4;

    for (size_t VAR_14 = 0; VAR_14 < VAR_8; ++VAR_14)
    {
        const struct vlc_player_track *VAR_15 =
            FUNC_4(VAR_3, VAR_7, VAR_14);
        if (VAR_15->selected && VAR_15->es_id != VAR_4)
            VAR_12[VAR_13++] = VAR_15->es_id;
    }
    VAR_12[VAR_9] = ((void*)0);

    unsigned VAR_16 = FUNC_6(VAR_3, VAR_7, VAR_12);
    FUNC_0(VAR_12);
    return VAR_16;

select_one:
    if (FUNC_1(VAR_6->thread, VAR_0, VAR_4)
     == VAR_2)
        FUNC_8(VAR_3, VAR_4, 1);
    return 1;

}
