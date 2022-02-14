
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_4__ {int system; } ;
struct TYPE_5__ {int lock; int i_pts_delay; TYPE_1__ ref; int b_has_reference; } ;
typedef TYPE_2__ input_clock_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3( input_clock_t *VAR_0, vlc_tick_t *VAR_1, vlc_tick_t *VAR_2 )
{
    FUNC_1( &VAR_0->lock );

    FUNC_0( VAR_0->b_has_reference );

    *VAR_1 = VAR_0->ref.system;
    if( VAR_2 )
        *VAR_2 = VAR_0->i_pts_delay;

    FUNC_2( &VAR_0->lock );
}
