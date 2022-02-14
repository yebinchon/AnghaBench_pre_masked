
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* p_atomic_operations; } ;
typedef TYPE_2__ filter_sys_t ;
struct TYPE_4__ {int i_source_channel_offset; int i_dest_channel_offset; int i_delay; double d_amplitude_factor; } ;


 double FUNC_0 (double) ;

__attribute__((used)) static void FUNC_1( filter_sys_t * VAR_0
        , unsigned int VAR_1, unsigned int VAR_2
        , int VAR_3, double VAR_4, double VAR_5
        , double VAR_6, double VAR_7 )
{
    double VAR_8 = 340;
    double VAR_9 = (VAR_6-0.1) / VAR_8 * VAR_1;


    VAR_0->p_atomic_operations[VAR_2]
        .i_source_channel_offset = VAR_3;
    VAR_0->p_atomic_operations[VAR_2]
        .i_dest_channel_offset = 0;
    VAR_0->p_atomic_operations[VAR_2]
        .i_delay = (int)( FUNC_0( (-0.1-VAR_4)*(-0.1-VAR_4) + (0-VAR_5)*(0-VAR_5) )
                          / VAR_8 * VAR_1 - VAR_9 );
    if( VAR_4 < 0 )
    {
        VAR_0->p_atomic_operations[VAR_2]
            .d_amplitude_factor = VAR_7 * 1.1 / 2;
    }
    else if( VAR_4 > 0 )
    {
        VAR_0->p_atomic_operations[VAR_2]
            .d_amplitude_factor = VAR_7 * 0.9 / 2;
    }
    else
    {
        VAR_0->p_atomic_operations[VAR_2]
            .d_amplitude_factor = VAR_7 / 2;
    }


    VAR_0->p_atomic_operations[VAR_2 + 1]
        .i_source_channel_offset = VAR_3;
    VAR_0->p_atomic_operations[VAR_2 + 1]
        .i_dest_channel_offset = 1;
    VAR_0->p_atomic_operations[VAR_2 + 1]
        .i_delay = (int)( FUNC_0( (0.1-VAR_4)*(0.1-VAR_4) + (0-VAR_5)*(0-VAR_5) )
                          / VAR_8 * VAR_1 - VAR_9 );
    if( VAR_4 < 0 )
    {
        VAR_0->p_atomic_operations[VAR_2 + 1]
            .d_amplitude_factor = VAR_7 * 0.9 / 2;
    }
    else if( VAR_4 > 0 )
    {
        VAR_0->p_atomic_operations[VAR_2 + 1]
            .d_amplitude_factor = VAR_7 * 1.1 / 2;
    }
    else
    {
        VAR_0->p_atomic_operations[VAR_2 + 1]
            .d_amplitude_factor = VAR_7 / 2;
    }
}
