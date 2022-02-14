
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_player_t ;
struct vlc_player_track {int name; int es_id; } ;
struct TYPE_7__ {struct TYPE_7__* p_next; int psz_name; int i_id; } ;
typedef TYPE_1__ libvlc_track_description_t ;
struct TYPE_8__ {int * player; } ;
typedef TYPE_2__ libvlc_media_player_t ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 struct vlc_player_track* FUNC_6 (int *,int,size_t) ;
 size_t FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

libvlc_track_description_t *
        FUNC_10( libvlc_media_player_t *VAR_0,
                                      enum es_format_category_e VAR_1 )
{
    vlc_player_t *VAR_2 = VAR_0->player;
    FUNC_8(VAR_2);

    libvlc_track_description_t *VAR_3, **VAR_4 = &VAR_3;

    size_t VAR_5 = FUNC_7(VAR_2, VAR_1);
    for (size_t VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    {
        libvlc_track_description_t *VAR_7 = FUNC_2(sizeof (*VAR_7));
        if (FUNC_4(VAR_7 == ((void*)0)))
        {
            FUNC_1("Not enough memory");
            continue;
        }

        const struct vlc_player_track *VAR_8 =
            FUNC_6(VAR_2, VAR_1, VAR_6);

        *VAR_4 = VAR_7;
        VAR_7->i_id = FUNC_5(VAR_8->es_id);
        VAR_7->psz_name = FUNC_3(VAR_8->name);
        if (FUNC_4(!VAR_7->psz_name))
        {
            FUNC_0(VAR_7);
            continue;
        }
        VAR_4 = &VAR_7->p_next;
    }

    *VAR_4 = ((void*)0);

    FUNC_9(VAR_2);
    return VAR_3;
}
