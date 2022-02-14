
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int block_t ;
struct TYPE_12__ {int (* play ) (TYPE_3__*,int *,int ) ;} ;
typedef TYPE_3__ audio_output_t ;
struct TYPE_11__ {int discontinuity; int clock; } ;
struct TYPE_10__ {int i_format; } ;
struct TYPE_13__ {int original_pts; TYPE_2__ sync; int filters; TYPE_1__ mixer_format; } ;
typedef TYPE_4__ aout_owner_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

void FUNC_7(audio_output_t *VAR_1)
{
    aout_owner_t *VAR_2 = FUNC_3 (VAR_1);

    if (!VAR_2->mixer_format.i_format)
        return;

    block_t *VAR_3 = FUNC_1 (VAR_2->filters);
    if (VAR_3)
        VAR_1->play(VAR_1, VAR_3, FUNC_6());

    FUNC_0(VAR_1);

    FUNC_5(VAR_2->sync.clock);
    FUNC_2(VAR_2->filters);

    VAR_2->sync.discontinuity = 1;
    VAR_2->original_pts = VAR_0;
}
