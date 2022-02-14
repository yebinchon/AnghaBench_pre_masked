
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_24__ {TYPE_2__* p; } ;
typedef TYPE_3__ vout_thread_t ;
struct TYPE_25__ {int i_x; int i_y; scalar_t__ b_double_click; int i_pressed; } ;
typedef TYPE_4__ vlc_mouse_t ;
struct TYPE_22__ {int lock; scalar_t__ chain_static; scalar_t__ chain_interactive; } ;
struct TYPE_23__ {int mouse_opaque; int (* mouse_event ) (TYPE_4__*,int ) ;TYPE_4__ mouse; TYPE_1__ filter; int display_lock; int display; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,TYPE_4__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_3__*,char*,int*,int*) ;
 int FUNC_3 (TYPE_3__*,char*,int,int) ;
 int FUNC_4 (TYPE_3__*,char*,int ) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,TYPE_4__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,TYPE_4__*,TYPE_4__ const*) ;

__attribute__((used)) static void FUNC_12(vout_thread_t *VAR_1,
                                    const vlc_mouse_t *VAR_2)
{
    vlc_mouse_t VAR_3, VAR_4, VAR_5, *VAR_6;


    FUNC_9(&VAR_1->p->display_lock);
    FUNC_11(VAR_1->p->display, &VAR_3, VAR_2);
    FUNC_10(&VAR_1->p->display_lock);


    VAR_6 = &VAR_3;
    FUNC_9(&VAR_1->p->filter.lock);
    if (VAR_1->p->filter.chain_static && VAR_1->p->filter.chain_interactive) {
        if (!FUNC_0(VAR_1->p->filter.chain_interactive,
                                      &VAR_4, VAR_6))
            VAR_6 = &VAR_4;
        if (!FUNC_0(VAR_1->p->filter.chain_static,
                                      &VAR_5, VAR_6))
            VAR_6 = &VAR_5;
    }
    FUNC_10(&VAR_1->p->filter.lock);

    if (FUNC_7(&VAR_1->p->mouse, VAR_6))
        FUNC_3(VAR_1, "mouse-moved", VAR_6->i_x, VAR_6->i_y);

    if (FUNC_6(&VAR_1->p->mouse, VAR_6)) {
        FUNC_4(VAR_1, "mouse-button-down", VAR_6->i_pressed);

        if (FUNC_8(&VAR_1->p->mouse, VAR_6, VAR_0)) {

            int VAR_7, VAR_8;

            FUNC_2(VAR_1, "mouse-moved", &VAR_7, &VAR_8);
            FUNC_3(VAR_1, "mouse-clicked", VAR_7, VAR_8);
        }
    }

    if (VAR_6->b_double_click)
        FUNC_5(VAR_1, "fullscreen");
    VAR_1->p->mouse = *VAR_6;

    if (VAR_1->p->mouse_event)
        VAR_1->p->mouse_event(VAR_6, VAR_1->p->mouse_opaque);
}
