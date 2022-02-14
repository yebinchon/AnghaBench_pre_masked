
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_player_t ;
typedef int vlc_es_id_t ;
struct vlc_player_track {int * es_id; scalar_t__ selected; } ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_5__ {int spu_channel_order; } ;
typedef TYPE_2__ intf_sys_t ;
typedef enum vlc_vout_order { ____Placeholder_vlc_vout_order } vlc_vout_order ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vlc_player_track const*) ;
 scalar_t__ FUNC_1 (int *,int *,int*) ;
 struct vlc_player_track* FUNC_2 (int *,int const,size_t) ;
 size_t FUNC_3 (int *,int const) ;
 int FUNC_4 (int *,int const,int **) ;
 int FUNC_5 (int *,int const) ;
 int FUNC_6 (int *,int const) ;

__attribute__((used)) static void FUNC_7(intf_thread_t *VAR_2, vlc_player_t *VAR_3,
                                    bool VAR_4)
{
    intf_sys_t *VAR_5 = VAR_2->p_sys;
    const enum es_format_category_e VAR_6 = VAR_0;
    size_t VAR_7 = FUNC_3(VAR_3, VAR_6);
    if (!VAR_7)
        return;

    vlc_es_id_t *VAR_8 = ((void*)0);
    vlc_es_id_t *VAR_9 = ((void*)0);


    size_t VAR_10 = 0;
    for (size_t VAR_11 = 0; VAR_11 < VAR_7; ++VAR_11)
    {
        const struct vlc_player_track *VAR_12 =
            FUNC_2(VAR_3, VAR_6, VAR_11);
        FUNC_0(VAR_12);

        if (VAR_12->selected)
        {
            enum vlc_vout_order VAR_13;
            if (FUNC_1(VAR_3, VAR_12->es_id, &VAR_13)
             && VAR_13 == VAR_5->spu_channel_order)
                VAR_8 = VAR_12->es_id;
            else
                VAR_9 = VAR_12->es_id;
            ++VAR_10;
        }
    }

    if ((VAR_5->spu_channel_order == VAR_1
      && VAR_10 == 1) || VAR_10 == 0)
    {

        if (VAR_4)
            FUNC_5(VAR_3, VAR_6);
        else
            FUNC_6(VAR_3, VAR_6);
    }
    else
    {


        size_t VAR_14 = VAR_4 ? 0 : VAR_7 - 1;
        for (size_t VAR_15 = 0; VAR_15 < VAR_7; ++VAR_15)
        {
            const struct vlc_player_track *VAR_16 =
                FUNC_2(VAR_3, VAR_6, VAR_15);
            FUNC_0(VAR_16);

            if (VAR_16->es_id == VAR_8)
            {
                VAR_14 = VAR_15;
                break;
            }
        }


        while (1)
        {
            const struct vlc_player_track *VAR_17 =
                FUNC_2(VAR_3, VAR_6, VAR_14);

            if (!VAR_17->selected)
            {
                VAR_8 = VAR_17->es_id;
                break;
            }

            else if ((VAR_4 && VAR_14 + 1 == VAR_7) || (!VAR_4 && VAR_14 == 0))
            {
                VAR_8 = ((void*)0);
                break;
            }
            else
                VAR_14 = VAR_14 + (VAR_4 ? 1 : -1);
        }


        if ( !VAR_9 )
        {
            VAR_9 = VAR_8;
            VAR_8 = ((void*)0);
        }

        vlc_es_id_t *VAR_18[] = { VAR_9, VAR_8, ((void*)0) };
        FUNC_4(VAR_3, VAR_6, VAR_18);
    }
}
