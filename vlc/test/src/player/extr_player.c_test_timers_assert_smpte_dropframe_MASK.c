
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t size; struct report_timer* data; } ;
typedef TYPE_2__ vec_report_timer ;
struct timer_state {TYPE_2__ vec; } ;
struct TYPE_3__ {int drop_frame; int frame_resolution; unsigned int frames; int seconds; unsigned int minutes; } ;
struct report_timer {TYPE_1__ tc; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(struct timer_state *VAR_0, unsigned VAR_1,
                                   unsigned VAR_2)
{
    FUNC_0(VAR_2 == 30 || VAR_2 == 60);
    FUNC_0(VAR_1 > 0);

    vec_report_timer *VAR_3 = &VAR_0->vec;

    bool VAR_4 = 0, VAR_5 = 0;
    for (size_t VAR_6 = 1; VAR_6 < VAR_3->size; ++VAR_6)
    {
        struct report_timer *VAR_7 = &VAR_3->data[VAR_6 - 1];
        struct report_timer *VAR_8 = &VAR_3->data[VAR_6];

        FUNC_0(VAR_8->tc.drop_frame == 1);
        FUNC_0(VAR_8->tc.frame_resolution == 2);

        if (VAR_7->tc.frames == VAR_2 - 1)
        {
            if (VAR_8->tc.seconds == 59)
            {

                FUNC_0(VAR_7->tc.minutes == VAR_1 - 1);
                FUNC_0(VAR_7->tc.seconds == 58);

                FUNC_0(VAR_8->tc.minutes == VAR_1 - 1);
                FUNC_0(VAR_8->tc.frames == 0);

                VAR_4 = 1;
            }
            else if (VAR_8->tc.seconds == 0)
            {



                FUNC_0(VAR_7->tc.minutes == VAR_1 - 1);
                FUNC_0(VAR_7->tc.seconds == 59);

                FUNC_0(VAR_8->tc.minutes == VAR_1);
                if (VAR_1 % 10 == 0)
                    FUNC_0(VAR_8->tc.frames == 0);
                else
                    FUNC_0(VAR_8->tc.frames == (VAR_2 / 30 * 2) );

                VAR_5 = 1;
            }

        }
        else if (VAR_7->tc.minutes != 0 && VAR_7->tc.seconds != 0
              && VAR_7->tc.frames != 0)
            FUNC_0(VAR_8->tc.frames == VAR_7->tc.frames + 1);
    }


    FUNC_0(VAR_4 && VAR_5);
}
