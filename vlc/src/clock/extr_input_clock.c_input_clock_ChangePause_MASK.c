
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_6__ {int system; } ;
struct TYPE_5__ {int system; } ;
struct TYPE_7__ {int b_paused; scalar_t__ i_pause_date; int lock; TYPE_2__ last; TYPE_1__ ref; scalar_t__ b_has_reference; } ;
typedef TYPE_3__ input_clock_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3( input_clock_t *VAR_0, bool VAR_1, vlc_tick_t VAR_2 )
{
    FUNC_1( &VAR_0->lock );
    FUNC_0( (!VAR_0->b_paused) != (!VAR_1) );

    if( VAR_0->b_paused )
    {
        const vlc_tick_t VAR_3 = VAR_2 - VAR_0->i_pause_date;

        if( VAR_0->b_has_reference && VAR_3 > 0 )
        {
            VAR_0->ref.system += VAR_3;
            VAR_0->last.system += VAR_3;
        }
    }
    VAR_0->i_pause_date = VAR_2;
    VAR_0->b_paused = VAR_1;

    FUNC_2( &VAR_0->lock );
}
