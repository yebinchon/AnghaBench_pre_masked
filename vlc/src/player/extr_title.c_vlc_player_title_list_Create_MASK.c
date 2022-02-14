
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vlc_player_title_list {size_t count; struct vlc_player_title* array; int rc; } ;
struct vlc_player_title {size_t chapter_count; int name; struct vlc_player_chapter* chapters; int flags; int length; } ;
struct vlc_player_chapter {int name; int time; } ;
struct input_title_t {size_t i_seekpoint; TYPE_1__** seekpoint; int i_flags; int i_length; } ;
struct TYPE_3__ {int i_time_offset; } ;
typedef TYPE_1__ seekpoint_t ;
typedef struct input_title_t input_title_t ;


 scalar_t__ FUNC_0 (size_t,int,size_t*) ;
 int FUNC_1 (struct input_title_t const*,size_t,int) ;
 struct vlc_player_title_list* FUNC_2 (size_t) ;
 scalar_t__ FUNC_3 (size_t,int,size_t*) ;
 int FUNC_4 (TYPE_1__*,size_t,int) ;
 struct vlc_player_chapter* FUNC_5 (size_t,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vlc_player_title_list*) ;

struct vlc_player_title_list *
FUNC_8(input_title_t *const *VAR_0, size_t VAR_1,
                             int VAR_2, int VAR_3)
{
    if (VAR_1 == 0)
        return ((void*)0);


    size_t VAR_4;
    if (FUNC_3(VAR_1, sizeof(struct vlc_player_title), &VAR_4))
        return ((void*)0);
    if (FUNC_0(VAR_4, sizeof(struct vlc_player_title_list), &VAR_4))
        return ((void*)0);
    struct vlc_player_title_list *VAR_5 = FUNC_2(VAR_4);
    if (!VAR_5)
        return ((void*)0);

    FUNC_6(&VAR_5->rc);
    VAR_5->count = VAR_1;

    for (size_t VAR_6 = 0; VAR_6 < VAR_5->count; ++VAR_6)
    {
        const struct input_title_t *VAR_7 = VAR_0[VAR_6];
        struct vlc_player_title *VAR_8 = &VAR_5->array[VAR_6];

        VAR_8->name = FUNC_1(VAR_7, VAR_6, VAR_2);
        VAR_8->length = VAR_7->i_length;
        VAR_8->flags = VAR_7->i_flags;
        const size_t VAR_9 = VAR_7->i_seekpoint > 0 ?
                                       VAR_7->i_seekpoint : 0;
        VAR_8->chapter_count = VAR_9;

        struct vlc_player_chapter *VAR_10 = VAR_8->chapter_count == 0 ? ((void*)0) :
            FUNC_5(VAR_8->chapter_count, sizeof(*VAR_10));

        if (VAR_10)
        {
            for (size_t VAR_11 = 0; VAR_11 < VAR_8->chapter_count;
                 ++VAR_11)
            {
                struct vlc_player_chapter *VAR_12 = &VAR_10[VAR_11];
                seekpoint_t *VAR_13 = VAR_7->seekpoint[VAR_11];

                VAR_12->name = FUNC_4(VAR_13, VAR_11,
                                                  VAR_3);
                VAR_12->time = VAR_13->i_time_offset;
                if (!VAR_12->name)
                    VAR_8->chapter_count = VAR_11;
            }
        }
        else if (VAR_9 > 0)
            VAR_8->chapter_count = 0;

        VAR_8->chapters = VAR_10;

        if (!VAR_8->name || VAR_9 != VAR_8->chapter_count)
        {

            VAR_5->count = VAR_6;
            FUNC_7(VAR_5);
            return ((void*)0);
        }
    }
    return VAR_5;
}
