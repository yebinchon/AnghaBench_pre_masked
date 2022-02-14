
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int audio; } ;
struct TYPE_9__ {int audio; } ;
struct TYPE_11__ {TYPE_4__* p_sys; TYPE_2__ fmt_out; TYPE_1__ fmt_in; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_12__ {int* channel_map; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_13__ {size_t i_nb_samples; unsigned int i_buffer; scalar_t__ p_buffer; } ;
typedef TYPE_5__ block_t ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (float*,float*,unsigned int) ;

__attribute__((used)) static block_t *FUNC_3( filter_t *VAR_0, block_t *VAR_1 )
{
    unsigned VAR_2 = FUNC_0( &VAR_0->fmt_in.audio );
    unsigned VAR_3 = FUNC_0( &VAR_0->fmt_out.audio );

    FUNC_1( VAR_2 >= VAR_3 );

    filter_sys_t *VAR_4 = VAR_0->p_sys;

    float *VAR_5 = (float *)VAR_1->p_buffer;
    const float *VAR_6 = VAR_5;
    const int *VAR_7 = VAR_4->channel_map;

    float VAR_8[VAR_3];

    for( size_t VAR_9 = 0; VAR_9 < VAR_1->i_nb_samples; VAR_9++ )
    {
        for( unsigned VAR_10 = 0; VAR_10 < VAR_3; VAR_10++ )
            VAR_8[VAR_10] = VAR_7[VAR_10] == -1 ? 0.f : VAR_6[VAR_7[VAR_10]];
        FUNC_2( VAR_5, VAR_8, VAR_3 * sizeof(float) );

        VAR_6 += VAR_2;
        VAR_5 += VAR_3;
    }
    VAR_1->i_buffer = VAR_1->i_buffer * VAR_3 / VAR_2;

    return VAR_1;
}
