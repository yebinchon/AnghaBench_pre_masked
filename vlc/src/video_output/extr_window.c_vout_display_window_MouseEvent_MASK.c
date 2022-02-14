
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int has_double_click; } ;
struct TYPE_14__ {TYPE_5__* sys; } ;
struct TYPE_16__ {TYPE_2__ info; TYPE_1__ owner; } ;
typedef TYPE_3__ vout_window_t ;
struct TYPE_17__ {int type; int button_mask; int y; int x; } ;
typedef TYPE_4__ vout_window_mouse_event_t ;
typedef int vout_thread_t ;
struct TYPE_19__ {int b_double_click; } ;
struct TYPE_18__ {void* last_left_press; TYPE_6__ mouse; int * vout; } ;
typedef TYPE_5__ vout_display_window_t ;
typedef void* vlc_tick_t ;
typedef TYPE_6__ vlc_mouse_t ;


 void* const VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_6__*,int ,int ) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (TYPE_6__*,int ) ;
 void* FUNC_6 () ;
 int FUNC_7 (int *,TYPE_6__*) ;

__attribute__((used)) static void FUNC_8(vout_window_t *VAR_3,
                                           const vout_window_mouse_event_t *VAR_4)
{
    vout_display_window_t *VAR_5 = VAR_3->owner.sys;
    vout_thread_t *VAR_6 = VAR_5->vout;
    vlc_mouse_t *VAR_7 = &VAR_5->mouse;

    VAR_7->b_double_click = 0;

    switch (VAR_4->type)
    {
        case 130:
            FUNC_3(VAR_7, VAR_4->x, VAR_4->y);
            VAR_5->last_left_press = VAR_1;
            break;

        case 129:
            if (!VAR_3->info.has_double_click
             && VAR_4->button_mask == VAR_2
             && !FUNC_2(VAR_7))
            {
                const vlc_tick_t VAR_8 = FUNC_6();

                if (VAR_5->last_left_press != VAR_1
                 && VAR_8 - VAR_5->last_left_press < VAR_0)
                {
                    VAR_7->b_double_click = 1;
                    VAR_5->last_left_press = VAR_1;
                }
                else
                    VAR_5->last_left_press = VAR_8;
            }

            FUNC_4(VAR_7, VAR_4->button_mask);
            break;

        case 128:
            FUNC_5(VAR_7, VAR_4->button_mask);
            break;

        case 131:
            FUNC_0(VAR_3->info.has_double_click);
            VAR_7->b_double_click = 1;
            break;

        default:
            FUNC_1();
    }

    FUNC_7(VAR_6, VAR_7);
}
