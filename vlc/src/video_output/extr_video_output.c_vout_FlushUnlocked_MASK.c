
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* p; } ;
typedef TYPE_3__ vout_thread_t ;
struct TYPE_10__ {void* timestamp; void* date; TYPE_5__* decoded; } ;
struct TYPE_9__ {void* last; void* timestamp; } ;
struct TYPE_12__ {int delay; int clock; int display_lock; int * display; int decoder_fifo; TYPE_2__ displayed; TYPE_1__ step; } ;
typedef TYPE_4__ vout_thread_sys_t ;
typedef void* vlc_tick_t ;
struct TYPE_13__ {void* date; } ;
typedef TYPE_5__ picture_t ;


 int FUNC_0 (TYPE_3__*,int) ;
 void* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,void*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(vout_thread_t *VAR_1, bool VAR_2,
                               vlc_tick_t VAR_3)
{
    vout_thread_sys_t *VAR_4 = VAR_1->p;

    VAR_4->step.timestamp = VAR_0;
    VAR_4->step.last = VAR_0;

    FUNC_0(VAR_1, 0);

    picture_t *VAR_5 = VAR_4->displayed.decoded;
    if (VAR_5) {
        if ((VAR_3 == VAR_0) ||
            ( VAR_2 && VAR_5->date <= VAR_3) ||
            (!VAR_2 && VAR_5->date >= VAR_3)) {
            FUNC_2(VAR_5);

            VAR_4->displayed.decoded = ((void*)0);
            VAR_4->displayed.date = VAR_0;
            VAR_4->displayed.timestamp = VAR_0;
        }
    }

    FUNC_3(VAR_4->decoder_fifo, VAR_3, VAR_2);

    FUNC_1(VAR_4->display != ((void*)0));
    FUNC_6(&VAR_4->display_lock);
    FUNC_8(VAR_4->display);
    FUNC_7(&VAR_4->display_lock);

    FUNC_4(VAR_4->clock);
    FUNC_5(VAR_4->clock, VAR_4->delay);
}
