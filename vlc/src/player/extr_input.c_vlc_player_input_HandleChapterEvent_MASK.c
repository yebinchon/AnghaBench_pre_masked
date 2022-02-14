
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_player_t ;
struct vlc_player_title {struct vlc_player_chapter* chapters; scalar_t__ chapter_count; } ;
struct vlc_player_input {size_t title_selected; int chapter_selected; TYPE_1__* titles; int * player; } ;
struct vlc_player_chapter {int dummy; } ;
struct vlc_input_event_chapter {size_t title; int seekpoint; } ;
struct TYPE_2__ {size_t count; struct vlc_player_title* array; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,struct vlc_player_title const*,size_t,struct vlc_player_chapter const*,size_t) ;

__attribute__((used)) static void
FUNC_2(struct vlc_player_input *VAR_1,
                                    const struct vlc_input_event_chapter *VAR_2)
{
    vlc_player_t *VAR_3 = VAR_1->player;
    if (!VAR_1->titles || VAR_2->title < 0 || VAR_2->seekpoint < 0)
        return;

    FUNC_0((size_t)VAR_2->title < VAR_1->titles->count);
    const struct vlc_player_title *VAR_4 = &VAR_1->titles->array[VAR_2->title];
    if (!VAR_4->chapter_count)
        return;

    FUNC_0(VAR_2->seekpoint < (int)VAR_4->chapter_count);
    VAR_1->title_selected = VAR_2->title;
    VAR_1->chapter_selected = VAR_2->seekpoint;

    const struct vlc_player_chapter *VAR_5 = &VAR_4->chapters[VAR_2->seekpoint];
    FUNC_1(VAR_3, VAR_0, VAR_4, VAR_2->title,
                         VAR_5, VAR_2->seekpoint);
}
