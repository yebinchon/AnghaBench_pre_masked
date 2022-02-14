
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float vlc_tick_t ;
struct TYPE_5__ {float system; } ;
struct TYPE_6__ {float system; } ;
struct TYPE_7__ {float rate; int lock; TYPE_1__ ref; TYPE_2__ last; scalar_t__ b_has_reference; } ;
typedef TYPE_3__ input_clock_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2( input_clock_t *VAR_0, float VAR_1 )
{
    FUNC_0( &VAR_0->lock );

    if( VAR_0->b_has_reference )
    {


        VAR_0->ref.system = VAR_0->last.system - (vlc_tick_t) ((VAR_0->last.system - VAR_0->ref.system) / VAR_1 * VAR_0->rate);
    }
    VAR_0->rate = VAR_1;

    FUNC_1( &VAR_0->lock );
}
