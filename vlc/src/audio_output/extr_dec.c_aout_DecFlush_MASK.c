
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int (* flush ) (TYPE_3__*) ;} ;
typedef TYPE_3__ audio_output_t ;
struct TYPE_10__ {scalar_t__ delay; scalar_t__ request_delay; int discontinuity; int clock; } ;
struct TYPE_9__ {scalar_t__ i_format; } ;
struct TYPE_12__ {int original_pts; TYPE_2__ sync; int filters; TYPE_1__ mixer_format; } ;
typedef TYPE_4__ aout_owner_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_4__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

void FUNC_7(audio_output_t *VAR_1)
{
    aout_owner_t *VAR_2 = FUNC_3 (VAR_1);

    if (VAR_2->mixer_format.i_format)
    {
        FUNC_0 (VAR_2->filters);

        VAR_1->flush(VAR_1);
        FUNC_5(VAR_2->sync.clock);
        FUNC_1(VAR_2->filters);

        if (VAR_2->sync.delay > 0)
        {






            FUNC_6(VAR_2->sync.clock, 0);
            FUNC_2(VAR_2->filters, 0);
            VAR_2->sync.request_delay = VAR_2->sync.delay;
            VAR_2->sync.delay = 0;
        }
    }
    VAR_2->sync.discontinuity = 1;
    VAR_2->original_pts = VAR_0;
}
