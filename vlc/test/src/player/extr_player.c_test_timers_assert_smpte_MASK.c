
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int vlc_tick_t ;
struct TYPE_8__ {size_t size; struct report_timer* data; } ;
typedef TYPE_3__ vec_report_timer ;
struct timer_state {TYPE_3__ vec; } ;
struct TYPE_6__ {scalar_t__ frames; size_t seconds; int drop_frame; unsigned int frame_resolution; } ;
struct report_timer {scalar_t__ type; TYPE_1__ tc; } ;
struct TYPE_7__ {int frames; } ;
struct TYPE_9__ {TYPE_2__ tc; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__ FUNC_0 (TYPE_3__*) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct timer_state *VAR_1,
                         vlc_tick_t VAR_2, unsigned VAR_3, bool VAR_4,
                         unsigned VAR_5)
{

    FUNC_2(VAR_2 < FUNC_1(60));

    vec_report_timer *VAR_6 = &VAR_1->vec;


    FUNC_2(VAR_6->data[0].tc.frames == 0);
    for (size_t VAR_7 = 0; VAR_7 < VAR_6->size; ++VAR_7)
    {
        struct report_timer *VAR_8 = VAR_7 > 0 ? &VAR_6->data[VAR_7 - 1] : ((void*)0);
        struct report_timer *VAR_9 = &VAR_6->data[VAR_7];

        FUNC_2(VAR_9->tc.seconds == (VAR_7 / VAR_3));
        if (VAR_8)
        {
            if (VAR_7 % VAR_3 == 0)
            {
                FUNC_2(VAR_8->tc.frames == VAR_3 - 1);
                FUNC_2(VAR_9->tc.frames == 0);
            }
            else
                FUNC_2(VAR_9->tc.frames == VAR_8->tc.frames + 1);
        }

        FUNC_2(VAR_9->type == VAR_0);
        FUNC_2(VAR_9->tc.drop_frame == VAR_4);
        FUNC_2(VAR_9->tc.frame_resolution == VAR_5);
    }
    FUNC_2(FUNC_0(VAR_6).tc.frames + 1 == VAR_3 * VAR_2 / FUNC_1(1));
}
