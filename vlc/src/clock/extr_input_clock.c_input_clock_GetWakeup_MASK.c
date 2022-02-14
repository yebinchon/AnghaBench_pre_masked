
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct TYPE_5__ {scalar_t__ stream; } ;
struct TYPE_6__ {int lock; scalar_t__ i_buffering_duration; int drift; TYPE_1__ last; scalar_t__ b_has_reference; } ;
typedef TYPE_2__ input_clock_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

vlc_tick_t FUNC_4( input_clock_t *VAR_0 )
{
    vlc_tick_t VAR_1 = 0;

    FUNC_2( &VAR_0->lock );


    if( VAR_0->b_has_reference )
        VAR_1 = FUNC_1( VAR_0, VAR_0->last.stream + FUNC_0( &VAR_0->drift ) - VAR_0->i_buffering_duration );

    FUNC_3( &VAR_0->lock );

    return VAR_1;
}
