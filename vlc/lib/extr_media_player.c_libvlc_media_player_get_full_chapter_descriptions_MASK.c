
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int vlc_player_title_list ;
typedef int vlc_player_t ;
struct vlc_player_title {size_t chapter_count; int length; struct vlc_player_chapter* chapters; int * player; } ;
struct vlc_player_chapter {scalar_t__ name; int time; } ;
typedef struct vlc_player_title const libvlc_media_player_t ;
struct TYPE_6__ {void* i_time_offset; void* i_duration; int * psz_name; } ;
typedef TYPE_1__ libvlc_chapter_description_t ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct vlc_player_title const*) ;
 int FUNC_2 (TYPE_1__**,size_t) ;
 TYPE_1__* FUNC_3 (int) ;
 int * FUNC_4 (scalar_t__) ;
 TYPE_1__** FUNC_5 (size_t,int) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct vlc_player_title* FUNC_9 (int *,int) ;
 size_t FUNC_10 (int *) ;

int FUNC_11( libvlc_media_player_t *VAR_0,
                                                      int VAR_1,
                                                      libvlc_chapter_description_t *** VAR_2 )
{
    FUNC_1( VAR_0 );

    int VAR_3 = -1;

    vlc_player_t *VAR_4 = VAR_0->player;
    FUNC_7(VAR_4);

    vlc_player_title_list *VAR_5 = FUNC_6(VAR_4);
    if (!VAR_5)
        goto end;

    size_t VAR_6 = FUNC_10(VAR_5);
    if (VAR_1 < (int) VAR_6)
       goto end;

    const struct vlc_player_title *VAR_7 =
        FUNC_9(VAR_5, VAR_1);
    FUNC_1(VAR_7);

    size_t VAR_8 = VAR_7->chapter_count;

    libvlc_chapter_description_t **VAR_9 =
        FUNC_5(VAR_8, sizeof(*VAR_9));
    if (VAR_8 > 0 && !VAR_9)
        goto end;

    for (size_t VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
    {
        const struct vlc_player_chapter *VAR_11 = &VAR_7->chapters[VAR_10];
        libvlc_chapter_description_t *VAR_12 = FUNC_3(sizeof(*VAR_12));
        if (!VAR_12)
        {
            FUNC_2(VAR_9, VAR_10);
            goto end;
        }

        VAR_9[VAR_10] = VAR_12;

        vlc_tick_t VAR_13 = VAR_10 < VAR_8 - 1
                               ? VAR_7->chapters[VAR_10 + 1].time
                               : VAR_7->length;
        VAR_12->i_time_offset = FUNC_0(VAR_11->time);
        VAR_12->psz_name = VAR_11->name ? FUNC_4(VAR_11->name) : ((void*)0);
        VAR_12->i_duration = FUNC_0(VAR_13) - VAR_12->i_time_offset;
    }

    VAR_3 = VAR_8;
    *VAR_2 = VAR_9;

end:
    FUNC_8(VAR_4);
    return VAR_3;
}
