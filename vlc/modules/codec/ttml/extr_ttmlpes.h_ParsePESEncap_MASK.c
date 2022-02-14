
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint16_t ;
struct ttml_in_pes_ctx {scalar_t__ i_prev_block_time; scalar_t__ i_offset; } ;
typedef int int64_t ;
typedef int decoder_t ;
struct TYPE_9__ {int i_buffer; scalar_t__ i_dts; scalar_t__ const* p_buffer; } ;
typedef TYPE_1__ block_t ;


 TYPE_1__* FUNC_0 (int *,scalar_t__ const*,size_t) ;
 int FUNC_1 (scalar_t__ const*) ;
 int FUNC_2 (scalar_t__ const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_3 (size_t) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (scalar_t__*,scalar_t__ const*,size_t) ;

__attribute__((used)) static int FUNC_7( decoder_t *VAR_6,
                          struct ttml_in_pes_ctx *VAR_7,
                          int(*VAR_8)(decoder_t *, block_t *),
                          block_t *VAR_9 )
{
    if( VAR_9 == ((void*)0) )
        return VAR_2;

    if( VAR_9->i_buffer < 7 )
    {
        FUNC_5( VAR_9 );
        return VAR_3;
    }

    if( VAR_9->i_dts == VAR_7->i_prev_block_time )
    {
        FUNC_5( VAR_9 );
        return VAR_4;
    }

    int64_t VAR_10 = FUNC_1(VAR_9->p_buffer);
    VAR_10 = (VAR_10 << 16) | FUNC_2(&VAR_9->p_buffer[4]);
    VAR_10 *= 100;
    uint8_t VAR_11 = VAR_9->p_buffer[6];
    size_t VAR_12 = VAR_9->i_buffer - 7;
    const uint8_t *VAR_13 = &VAR_9->p_buffer[7];
    VAR_7->i_offset = (VAR_9->i_dts - VAR_5) - VAR_10;
    for( uint8_t VAR_14=0; VAR_14<VAR_11; VAR_14++ )
    {
        if( VAR_12 < 3 )
            break;
        uint8_t VAR_15 = VAR_13[0];
        uint16_t VAR_16 = FUNC_2(&VAR_13[1]);
        if( VAR_16 > VAR_12 - 3 )
            break;
        block_t *VAR_17 = ((void*)0);
        if( VAR_15 == VAR_1 )
        {
            VAR_17 = FUNC_3( VAR_16 );
            if( VAR_17 )
                FUNC_6( VAR_17->p_buffer, &VAR_13[3], VAR_16 );
        }
        else if( VAR_15 == VAR_0 )
        {
            VAR_17 = FUNC_0( VAR_6, &VAR_13[3], VAR_16 );
        }

        if( VAR_17 )
        {
            FUNC_4( VAR_17, VAR_9 );
            VAR_8( VAR_6, VAR_17 );
        }

        VAR_13 += 3 + VAR_16;
        VAR_12 -= 3 + VAR_16;
    }

    VAR_7->i_prev_block_time = VAR_9->i_dts;
    FUNC_5( VAR_9 );
    return VAR_4;
}
