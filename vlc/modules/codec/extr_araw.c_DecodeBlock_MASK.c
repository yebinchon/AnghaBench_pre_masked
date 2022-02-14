
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {unsigned int i_channels; } ;
struct TYPE_16__ {TYPE_1__ audio; } ;
struct TYPE_17__ {TYPE_2__ fmt_in; TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_18__ {int framebits; int end_date; int (* decode ) (int ,int ,unsigned int) ;} ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_19__ {int i_flags; scalar_t__ i_pts; int i_buffer; unsigned int i_nb_samples; scalar_t__ i_length; int p_buffer; } ;
typedef TYPE_5__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,unsigned int) ;
 int FUNC_4 (int *,scalar_t__) ;
 TYPE_5__* FUNC_5 (TYPE_3__*,unsigned int) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*) ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_9( decoder_t *VAR_4, block_t *VAR_5 )
{
    decoder_sys_t *VAR_6 = VAR_4->p_sys;
    if( VAR_5 == ((void*)0) )
        return VAR_2;

    if( VAR_5->i_flags & (VAR_0|VAR_1) )
    {
        FUNC_0( VAR_4 );
        if( VAR_5->i_flags & VAR_0 )
            goto skip;
    }

    if( VAR_5->i_pts != VAR_3 &&
        VAR_5->i_pts != FUNC_2( &VAR_6->end_date ) )
    {
        FUNC_4( &VAR_6->end_date, VAR_5->i_pts );
    }
    else if( FUNC_2( &VAR_6->end_date ) == VAR_3 )

        goto skip;

    unsigned VAR_7 = (8 * VAR_5->i_buffer) / VAR_6->framebits;
    if( VAR_7 == 0 )
        goto skip;

    if( VAR_6->decode != ((void*)0) )
    {
        if( FUNC_7( VAR_4 ) )
            goto skip;
        block_t *VAR_8 = FUNC_5( VAR_4, VAR_7 );
        if( VAR_8 == ((void*)0) )
            goto skip;

        VAR_6->decode( VAR_8->p_buffer, VAR_5->p_buffer,
                       VAR_7 * VAR_4->fmt_in.audio.i_channels );
        FUNC_1( VAR_5 );
        VAR_5 = VAR_8;
    }
    else
    {
        if( FUNC_7( VAR_4 ) )
            goto skip;
        VAR_5->i_nb_samples = VAR_7;
        VAR_5->i_buffer = VAR_7 * (VAR_6->framebits / 8);
    }

    VAR_5->i_pts = FUNC_2( &VAR_6->end_date );
    VAR_5->i_length = FUNC_3( &VAR_6->end_date, VAR_7 )
                      - VAR_5->i_pts;
    FUNC_6( VAR_4, VAR_5 );
    return VAR_2;
skip:
    FUNC_1( VAR_5 );
    return VAR_2;
}
