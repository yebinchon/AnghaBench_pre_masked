
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef float uint8_t ;
struct TYPE_11__ {int audio; } ;
struct TYPE_10__ {int audio; } ;
struct TYPE_13__ {TYPE_2__ fmt_out; TYPE_1__ fmt_in; TYPE_5__* p_sys; } ;
typedef TYPE_4__ filter_t ;
struct TYPE_14__ {size_t i_overflow_buffer_size; unsigned int i_nb_atomic_operations; TYPE_3__* p_atomic_operations; scalar_t__ p_overflow_buffer; } ;
typedef TYPE_5__ filter_sys_t ;
struct TYPE_15__ {size_t i_buffer; unsigned int i_nb_samples; scalar_t__ p_buffer; } ;
typedef TYPE_6__ block_t ;
struct TYPE_12__ {int i_source_channel_offset; int i_dest_channel_offset; unsigned int i_delay; double d_amplitude_factor; } ;


 size_t FUNC_0 (size_t,size_t) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (float*,float*,size_t) ;
 int FUNC_3 (float*,int ,size_t) ;

__attribute__((used)) static void FUNC_4( filter_t * VAR_0,
                    block_t * VAR_1, block_t * VAR_2 )
{
    filter_sys_t *VAR_3 = VAR_0->p_sys;
    int VAR_4 = FUNC_1( &VAR_0->fmt_in.audio );
    int VAR_5 = FUNC_1( &VAR_0->fmt_out.audio );

    float * VAR_6 = (float*) VAR_1->p_buffer;
    float * VAR_7;
    uint8_t * VAR_8;
    uint8_t * VAR_9;
    uint8_t * VAR_10;

    size_t VAR_11;
    size_t VAR_12;

    unsigned int VAR_13, VAR_14;

    int VAR_15;
    int VAR_16;
    unsigned int VAR_17;
    double VAR_18;

    VAR_7 = (float *)VAR_2->p_buffer;
    VAR_12 = VAR_2->i_buffer;


    VAR_8 = (uint8_t *) VAR_3->p_overflow_buffer;
    VAR_11 = VAR_3->i_overflow_buffer_size;
    VAR_9 = VAR_8 + VAR_11;

    FUNC_3( VAR_7, 0, VAR_12 );
    FUNC_2( VAR_7, VAR_8, FUNC_0( VAR_12, VAR_11 ) );

    VAR_10 = (uint8_t *) VAR_3->p_overflow_buffer;
    while( VAR_10 < VAR_9 )
    {
        size_t VAR_19;

        if( VAR_10 + VAR_12 < VAR_9 )
        {
            FUNC_3( VAR_10, 0, VAR_12 );
            if( VAR_10 + 2 * VAR_12 < VAR_9 )
                VAR_19 = VAR_12;
            else
                VAR_19 = VAR_9 - ( VAR_10 + VAR_12 );
            FUNC_2( VAR_10, VAR_10 + VAR_12, VAR_19 );
        }
        else
        {
            VAR_19 = VAR_9 - VAR_10;
            FUNC_3( VAR_10, 0, VAR_19 );
        }
        VAR_10 += VAR_19;
    }


    for( VAR_13 = 0; VAR_13 < VAR_3->i_nb_atomic_operations; VAR_13++ )
    {

        VAR_15
            = VAR_3->p_atomic_operations[VAR_13].i_source_channel_offset;
        VAR_16
            = VAR_3->p_atomic_operations[VAR_13].i_dest_channel_offset;
        VAR_17 = VAR_3->p_atomic_operations[VAR_13].i_delay;
        VAR_18
            = VAR_3->p_atomic_operations[VAR_13].d_amplitude_factor;

        if( VAR_2->i_nb_samples > VAR_17 )
        {

            for( VAR_14 = 0; VAR_14 < VAR_2->i_nb_samples - VAR_17; VAR_14++ )
            {
                ((float*)VAR_7)[ (VAR_17+VAR_14)*VAR_5 + VAR_16 ]
                    += VAR_6[ VAR_14 * VAR_4 + VAR_15 ]
                       * VAR_18;
            }


            for( VAR_14 = 0; VAR_14 < VAR_17; VAR_14++ )
            {
                ((float*)VAR_8)[ VAR_14*VAR_5 + VAR_16 ]
                    += VAR_6[ (VAR_2->i_nb_samples - VAR_17 + VAR_14)
                       * VAR_4 + VAR_15 ]
                       * VAR_18;
            }
        }
        else
        {

            for( VAR_14 = 0; VAR_14 < VAR_2->i_nb_samples; VAR_14++ )
            {
                ((float*)VAR_8)[ (VAR_17 - VAR_2->i_nb_samples + VAR_14)
                                        * VAR_5 + VAR_16 ]
                    += VAR_6[ VAR_14 * VAR_4 + VAR_15 ]
                       * VAR_18;
            }
        }
    }
}
