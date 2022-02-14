
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_6__ {scalar_t__ system; scalar_t__ stream; } ;
struct TYPE_5__ {scalar_t__ system; scalar_t__ stream; } ;
struct TYPE_7__ {int lock; TYPE_2__ ref; TYPE_1__ last; int b_has_reference; } ;
typedef TYPE_3__ input_clock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2( input_clock_t *VAR_2,
                          vlc_tick_t *VAR_3, vlc_tick_t *VAR_4,
                          vlc_tick_t *VAR_5, vlc_tick_t *VAR_6 )
{
    FUNC_0( &VAR_2->lock );

    if( !VAR_2->b_has_reference )
    {
        FUNC_1( &VAR_2->lock );
        return VAR_0;
    }

    *VAR_3 = VAR_2->ref.stream;
    *VAR_4 = VAR_2->ref.system;

    *VAR_5 = VAR_2->last.stream - VAR_2->ref.stream;
    *VAR_6 = VAR_2->last.system - VAR_2->ref.system;

    FUNC_1( &VAR_2->lock );

    return VAR_1;
}
