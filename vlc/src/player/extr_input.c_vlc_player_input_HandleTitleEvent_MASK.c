
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_player_t ;
struct TYPE_10__ {float progress; int current_title; } ;
struct TYPE_11__ {TYPE_2__ states; } ;
struct vlc_player_input {size_t title_selected; size_t chapter_selected; TYPE_3__ ml; int thread; TYPE_5__* titles; int * player; } ;
struct TYPE_9__ {size_t count; int array; } ;
struct vlc_input_event_title {int action; size_t selected_idx; TYPE_1__ list; } ;
struct TYPE_12__ {int i_title_offset; int i_seekpoint_offset; } ;
typedef TYPE_4__ input_thread_private_t ;
struct TYPE_13__ {size_t count; int * array; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (int ,float,int) ;
 TYPE_4__* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,TYPE_5__*,...) ;
 TYPE_5__* FUNC_6 (int ,size_t,int const,int const) ;
 int FUNC_7 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_8(struct vlc_player_input *VAR_2,
                                  const struct vlc_input_event_title *VAR_3)
{
    vlc_player_t *VAR_4 = VAR_2->player;
    switch (VAR_3->action)
    {
        case 129:
        {
            input_thread_private_t *VAR_5 = FUNC_2(VAR_2->thread);
            const int VAR_6 = VAR_5->i_title_offset;
            const int VAR_7 = VAR_5->i_seekpoint_offset;

            if (VAR_2->titles)
                FUNC_7(VAR_2->titles);
            VAR_2->title_selected = VAR_2->chapter_selected = 0;
            VAR_2->titles =
                FUNC_6(VAR_3->list.array, VAR_3->list.count,
                                             VAR_6, VAR_7);
            FUNC_5(VAR_4, VAR_1, VAR_2->titles);
            if (VAR_2->titles)
            {
                FUNC_5(VAR_4, VAR_0,
                                     &VAR_2->titles->array[0], 0);
                if (VAR_2->ml.states.current_title >= 0 &&
                    (size_t)VAR_2->ml.states.current_title < VAR_3->list.count)
                {
                    FUNC_4(VAR_4, VAR_2->ml.states.current_title);
                }
            }
            break;
        }
        case 128:
            if (!VAR_2->titles)
                return;
            FUNC_0(VAR_3->selected_idx < VAR_2->titles->count);
            VAR_2->title_selected = VAR_3->selected_idx;
            FUNC_5(VAR_4, VAR_0,
                                 &VAR_2->titles->array[VAR_2->title_selected],
                                 VAR_2->title_selected);
            if (VAR_2->ml.states.current_title >= 0 &&
                (size_t)VAR_2->ml.states.current_title == VAR_3->selected_idx &&
                VAR_2->ml.states.progress > .0f)
            {
                FUNC_1(VAR_2->thread, VAR_2->ml.states.progress, 0);



                VAR_2->ml.states.current_title = 0;
            }
            break;
        default:
            FUNC_3();
    }
}
