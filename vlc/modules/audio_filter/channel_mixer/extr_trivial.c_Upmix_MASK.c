
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int audio; } ;
struct TYPE_11__ {int audio; } ;
struct TYPE_13__ {TYPE_4__* p_sys; TYPE_2__ fmt_out; TYPE_1__ fmt_in; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_14__ {int* channel_map; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_15__ {unsigned int i_buffer; size_t i_nb_samples; scalar_t__ p_buffer; int i_length; int i_pts; int i_dts; } ;
typedef TYPE_5__ block_t ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 TYPE_5__* FUNC_2 (unsigned int) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static block_t *FUNC_5( filter_t *VAR_0, block_t *VAR_1 )
{
    unsigned VAR_2 = FUNC_0( &VAR_0->fmt_in.audio );
    unsigned VAR_3 = FUNC_0( &VAR_0->fmt_out.audio );

    FUNC_1( VAR_2 < VAR_3 );

    block_t *VAR_4 = FUNC_2(
                              VAR_1->i_buffer * VAR_3 / VAR_2 );
    if( FUNC_4(VAR_4 == ((void*)0)) )
    {
        FUNC_3( VAR_1 );
        return ((void*)0);
    }

    VAR_4->i_nb_samples = VAR_1->i_nb_samples;
    VAR_4->i_dts = VAR_1->i_dts;
    VAR_4->i_pts = VAR_1->i_pts;
    VAR_4->i_length = VAR_1->i_length;

    filter_sys_t *VAR_5 = VAR_0->p_sys;

    float *VAR_6 = (float *)VAR_4->p_buffer;
    const float *VAR_7 = (float *)VAR_1->p_buffer;
    const int *VAR_8 = VAR_5->channel_map;

    for( size_t VAR_9 = 0; VAR_9 < VAR_1->i_nb_samples; VAR_9++ )
    {
        for( unsigned VAR_10 = 0; VAR_10 < VAR_3; VAR_10++ )
            VAR_6[VAR_10] = VAR_8[VAR_10] == -1 ? 0.f : VAR_7[VAR_8[VAR_10]];

        VAR_7 += VAR_2;
        VAR_6 += VAR_3;
    }

    FUNC_3( VAR_1 );
    return VAR_4;
}
