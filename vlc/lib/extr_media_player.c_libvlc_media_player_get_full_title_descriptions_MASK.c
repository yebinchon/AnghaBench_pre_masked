
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_player_title_list ;
typedef int vlc_player_t ;
struct vlc_player_title {scalar_t__ name; int flags; int length; } ;
struct TYPE_9__ {int * psz_name; int i_flags; int i_duration; } ;
typedef TYPE_1__ libvlc_title_description_t ;
struct TYPE_10__ {int * player; } ;
typedef TYPE_2__ libvlc_media_player_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__**,size_t) ;
 TYPE_1__* FUNC_3 (int) ;
 int * FUNC_4 (scalar_t__) ;
 TYPE_1__** FUNC_5 (size_t,int) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct vlc_player_title* FUNC_9 (int *,size_t) ;
 size_t FUNC_10 (int *) ;

int FUNC_11( libvlc_media_player_t *VAR_0,
                                                     libvlc_title_description_t *** VAR_1 )
{
    FUNC_1( VAR_0 );

    int VAR_2 = -1;

    vlc_player_t *VAR_3 = VAR_0->player;
    FUNC_7(VAR_3);

    vlc_player_title_list *VAR_4 = FUNC_6(VAR_3);
    if (!VAR_4)
        goto end;

    size_t VAR_5 = FUNC_10(VAR_4);

    libvlc_title_description_t **VAR_6 = FUNC_5(VAR_5, sizeof(*VAR_6));
    if (VAR_5 > 0 && !VAR_6)
        goto end;

    for (size_t VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    {
        const struct vlc_player_title *VAR_8 =
            FUNC_9(VAR_4, VAR_7);
        libvlc_title_description_t *VAR_9 = FUNC_3(sizeof(*VAR_9));
        if (!VAR_9)
        {
            FUNC_2(VAR_6, VAR_7);
            goto end;
        }

        VAR_6[VAR_7] = VAR_9;


        VAR_9->i_duration = FUNC_0(VAR_8->length);
        VAR_9->i_flags = VAR_8->flags;
        VAR_9->psz_name = VAR_8->name ? FUNC_4(VAR_8->name) : ((void*)0);
    }

    VAR_2 = VAR_5;
    *VAR_1 = VAR_6;

end:
    FUNC_8(VAR_3);
    return VAR_2;
}
