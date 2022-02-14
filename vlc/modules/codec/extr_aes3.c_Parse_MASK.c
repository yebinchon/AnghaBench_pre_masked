
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int i_bitspersample; int i_channels; int i_physical_channels; } ;
struct TYPE_13__ {TYPE_1__ audio; int i_codec; } ;
struct TYPE_14__ {TYPE_2__ fmt_out; TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_15__ {int end_date; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_16__ {int i_flags; scalar_t__ i_pts; scalar_t__ i_buffer; int p_buffer; } ;
typedef TYPE_5__ block_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (TYPE_3__*,char*) ;
 int * VAR_6 ;

__attribute__((used)) static block_t * FUNC_6( decoder_t *VAR_7, int *VAR_8, int *VAR_9,
                        block_t *VAR_10, bool VAR_11 )
{
    decoder_sys_t *VAR_12 = VAR_7->p_sys;
    uint32_t VAR_13;
    unsigned int VAR_14;
    int VAR_15;
    int VAR_16;

    if( !VAR_10 )
        return ((void*)0);

    if( VAR_10->i_flags & (VAR_1|VAR_2) )
    {
        FUNC_0( VAR_7 );
        if( VAR_10->i_flags & VAR_1 )
        {
            FUNC_2( VAR_10 );
            return ((void*)0);
        }
    }


    if( VAR_10->i_pts != VAR_5 &&
        VAR_10->i_pts != FUNC_3( &VAR_12->end_date ) )
    {
        FUNC_4( &VAR_12->end_date, VAR_10->i_pts );
    }

    if( FUNC_3( &VAR_12->end_date ) == VAR_5 )
    {

        FUNC_2( VAR_10 );
        return ((void*)0);
    }

    if( VAR_10->i_buffer <= VAR_0 )
    {
        FUNC_5(VAR_7, "frame is too short");
        FUNC_2( VAR_10 );
        return ((void*)0);
    }
    VAR_13 = FUNC_1( VAR_10->p_buffer );
    VAR_14 = (VAR_13 >> 16) & 0xffff;
    VAR_15 = 2 + 2*( (VAR_13 >> 14) & 0x03 );
    VAR_16 = 16 + 4*( (VAR_13 >> 4)&0x03 );

    if( VAR_0 + VAR_14 != VAR_10->i_buffer || VAR_16 > 24 )
    {
        FUNC_5(VAR_7, "frame has invalid header");
        FUNC_2( VAR_10 );
        return ((void*)0);
    }


    if( VAR_11 )
    {
        VAR_7->fmt_out.audio.i_bitspersample = VAR_16;
    }
    else
    {
        VAR_7->fmt_out.i_codec = VAR_16 == 16 ? VAR_3 : VAR_4;
        VAR_7->fmt_out.audio.i_bitspersample = VAR_16 == 16 ? 16 : 32;
    }

    VAR_7->fmt_out.audio.i_channels = VAR_15;
    VAR_7->fmt_out.audio.i_physical_channels = VAR_6[VAR_15/2-1];

    *VAR_8 = (VAR_10->i_buffer - VAR_0) / ( (4+VAR_16) * VAR_15 / 8 );
    *VAR_9 = VAR_16;
    return VAR_10;
}
