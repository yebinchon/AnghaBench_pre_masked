
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_7__ {int system; } ;
struct TYPE_6__ {scalar_t__ system; } ;
struct TYPE_8__ {int b_has_external_clock; int lock; TYPE_2__ last; TYPE_1__ ref; scalar_t__ i_external_clock; int b_has_reference; } ;
typedef TYPE_3__ input_clock_t ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4( input_clock_t *VAR_0, bool VAR_1, vlc_tick_t VAR_2 )
{
    FUNC_2( &VAR_0->lock );

    FUNC_1( VAR_0->b_has_reference );
    vlc_tick_t VAR_3;
    if( VAR_1 )
    {
        VAR_3 = VAR_2 - VAR_0->ref.system - FUNC_0( VAR_0 );
    }
    else
    {
        if( !VAR_0->b_has_external_clock )
        {
            VAR_0->b_has_external_clock = 1;
            VAR_0->i_external_clock = VAR_2;
        }
        VAR_3 = VAR_2 - VAR_0->i_external_clock;
    }

    VAR_0->ref.system += VAR_3;
    VAR_0->last.system += VAR_3;

    FUNC_3( &VAR_0->lock );
}
