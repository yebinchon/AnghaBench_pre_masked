
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int audio; } ;
struct TYPE_11__ {TYPE_1__ fmt_out; TYPE_3__* p_sys; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_12__ {scalar_t__ i_rear_left; scalar_t__ i_rear_center; scalar_t__ i_rear_right; scalar_t__ i_center; size_t i_left; size_t i_right; } ;
typedef TYPE_3__ filter_sys_t ;
struct TYPE_13__ {size_t i_nb_samples; int i_buffer; int i_length; int i_pts; int i_dts; scalar_t__ p_buffer; } ;
typedef TYPE_4__ block_t ;


 size_t FUNC_0 (int *) ;
 TYPE_4__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (float*,int ,int ) ;

__attribute__((used)) static block_t *FUNC_4( filter_t * VAR_0, block_t * VAR_1 )
{
    filter_sys_t * VAR_2 = VAR_0->p_sys;
    float * VAR_3 = (float*) VAR_1->p_buffer;
    size_t VAR_4 = VAR_1->i_nb_samples;
    size_t VAR_5 = FUNC_0( &VAR_0->fmt_out.audio );
    size_t VAR_6 = 0;
    size_t VAR_7;
    block_t *VAR_8 = FUNC_1(
                                sizeof(float) * VAR_4 * VAR_5 );
    if( !VAR_8 )
        goto out;

    float * VAR_9 = (float*) VAR_8->p_buffer;
    VAR_8->i_nb_samples = VAR_4;
    VAR_8->i_dts = VAR_1->i_dts;
    VAR_8->i_pts = VAR_1->i_pts;
    VAR_8->i_length = VAR_1->i_length;

    FUNC_3( VAR_9, 0, VAR_8->i_buffer );

    if( VAR_2->i_rear_left >= 0 )
    {
        ++VAR_6;
    }
    if( VAR_2->i_rear_center >= 0 )
    {
        ++VAR_6;
    }
    if( VAR_2->i_rear_right >= 0 )
    {
        ++VAR_6;
    }

    for( VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7 )
    {
        float VAR_10 = VAR_3[ VAR_7 * 2 ];
        float VAR_11 = VAR_3[ VAR_7 * 2 + 1 ];
        float VAR_12 = ( VAR_10 - VAR_11 ) / VAR_6;

        if( VAR_2->i_center >= 0 )
        {
            float VAR_13 = VAR_10 + VAR_11;
            VAR_10 -= VAR_13 / 2;
            VAR_11 -= VAR_13 / 2;

            VAR_9[ VAR_7 * VAR_5 + VAR_2->i_center ] = VAR_13;
        }

        if( VAR_2->i_left >= 0 )
        {
            VAR_9[ VAR_7 * VAR_5 + VAR_2->i_left ] = VAR_10;
        }
        if( VAR_2->i_right >= 0 )
        {
            VAR_9[ VAR_7 * VAR_5 + VAR_2->i_right ] = VAR_11;
        }
        if( VAR_2->i_rear_left >= 0 )
        {
            VAR_9[ VAR_7 * VAR_5 + VAR_2->i_rear_left ] = VAR_12;
        }
        if( VAR_2->i_rear_center >= 0 )
        {
            VAR_9[ VAR_7 * VAR_5 + VAR_2->i_rear_center ] = VAR_12;
        }
        if( VAR_2->i_rear_right >= 0 )
        {
            VAR_9[ VAR_7 * VAR_5 + VAR_2->i_rear_right ] = VAR_12;
        }
    }
out:
    FUNC_2( VAR_1 );
    return VAR_8;
}
