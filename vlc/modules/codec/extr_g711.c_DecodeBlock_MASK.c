
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_15__ {unsigned int i_channels; } ;
struct TYPE_16__ {TYPE_1__ audio; } ;
struct TYPE_17__ {TYPE_2__ fmt_in; TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_18__ {int * table; int end_date; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_19__ {int i_flags; scalar_t__ i_pts; unsigned int i_buffer; unsigned int i_nb_samples; scalar_t__ i_length; int * p_buffer; } ;
typedef TYPE_5__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (int *,scalar_t__) ;
 TYPE_5__* FUNC_6 (TYPE_3__*,unsigned int) ;
 int FUNC_7 (TYPE_3__*,TYPE_5__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_9( decoder_t *VAR_4, block_t *VAR_5 )
{
    decoder_sys_t *VAR_6 = VAR_4->p_sys;

    if( VAR_5 == ((void*)0) )
        return VAR_2;

    if( VAR_5->i_flags & (VAR_0|VAR_1) )
    {
        FUNC_0( VAR_4 );
        if( VAR_5->i_flags & VAR_0 )
        {
            FUNC_2( VAR_5 );
            return VAR_2;
        }
    }

    if( VAR_5->i_pts != VAR_3 &&
        VAR_5->i_pts != FUNC_3( &VAR_6->end_date ) )
    {
        FUNC_5( &VAR_6->end_date, VAR_5->i_pts );
    }
    else if( FUNC_3( &VAR_6->end_date ) == VAR_3 )
    {

        FUNC_2( VAR_5 );
        return VAR_2;
    }


    VAR_5->i_pts = VAR_3;

    unsigned VAR_7 = VAR_5->i_buffer / VAR_4->fmt_in.audio.i_channels;
    if( VAR_7 == 0 )
    {
        FUNC_2( VAR_5 );
        return VAR_2;
    }

    if( FUNC_8( VAR_4 ) )
    {
        FUNC_2( VAR_5 );
        return VAR_2;
    }
    block_t *VAR_8 = FUNC_6( VAR_4, VAR_7 );
    if( VAR_8 == ((void*)0) )
    {
        FUNC_2( VAR_5 );
        return VAR_2;
    }

    FUNC_1( VAR_8->i_nb_samples == VAR_7 );
    FUNC_1( VAR_8->i_buffer == VAR_7 * 2 * VAR_4->fmt_in.audio.i_channels );

    VAR_8->i_pts = FUNC_3( &VAR_6->end_date );
    VAR_8->i_length = FUNC_4( &VAR_6->end_date, VAR_7 )
                      - VAR_8->i_pts;

    const uint8_t *VAR_9 = VAR_5->p_buffer;
    int16_t *VAR_10 = (int16_t *)VAR_8->p_buffer;

    VAR_7 *= VAR_4->fmt_in.audio.i_channels;

    for( unsigned VAR_11 = 0; VAR_11 < VAR_7; VAR_11++ )
       *(VAR_10++) = VAR_6->table[*(VAR_9++)];

    FUNC_2( VAR_5 );
    FUNC_7( VAR_4, VAR_8 );
    return VAR_2;
}
