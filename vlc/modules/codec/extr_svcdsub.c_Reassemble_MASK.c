
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_14__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_15__ {scalar_t__ i_state; scalar_t__ i_image; int i_packet; int i_spu_size; int * p_spu; } ;
typedef TYPE_2__ decoder_sys_t ;
struct TYPE_16__ {int i_flags; scalar_t__ i_buffer; int* p_buffer; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int **,TYPE_3__*) ;
 TYPE_3__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*,char*,int,...) ;
 int FUNC_7 (TYPE_1__*,char*,...) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static block_t *FUNC_9( decoder_t *VAR_5, block_t *VAR_6 )
{
    decoder_sys_t *VAR_7 = VAR_5->p_sys;
    uint8_t *VAR_8;
    uint16_t VAR_9;
    uint8_t VAR_10, VAR_11;

    if( VAR_6->i_flags & (VAR_0) )
    {
        FUNC_5( VAR_6 );
        return ((void*)0);
    }

    if( VAR_6->i_buffer < VAR_1 )
    {
        FUNC_6( VAR_5, "invalid packet header (size %zu < %u)" ,
                 VAR_6->i_buffer, VAR_1 );
        FUNC_5( VAR_6 );
        return ((void*)0);
    }

    VAR_8 = VAR_6->p_buffer;

    if( VAR_7->i_state == VAR_3 )
    {
        VAR_9 = VAR_7->i_image + 1;
        VAR_11 = 0;
    }
    else
    {
        VAR_9 = VAR_7->i_image;
        VAR_11 = VAR_7->i_packet + 1;
    }



    VAR_8 += 2;

    if( *VAR_8 & 0x80 )
    {
        VAR_7->i_state = VAR_2;
        VAR_10 = *VAR_8++ & 0x7F;
    }
    else
    {
        VAR_7->i_state = VAR_4;
        VAR_10 = *VAR_8++;
    }

    VAR_7->i_image = FUNC_0(VAR_8);

    if( VAR_7->i_image != VAR_9 )
    {
        FUNC_7( VAR_5, "expected subtitle image %u but found %u",
                  VAR_9, VAR_7->i_image );
    }

    if( VAR_10 != VAR_11 )
    {
        FUNC_7( VAR_5, "expected subtitle image packet %u but found %u",
                  VAR_11, VAR_10 );
    }

    VAR_6->p_buffer += VAR_1;
    VAR_6->i_buffer -= VAR_1;

    VAR_7->i_packet = VAR_10;

    if( !VAR_7->i_packet ) FUNC_1( VAR_5, VAR_6 );

    FUNC_2( &VAR_7->p_spu, VAR_6 );

    if( VAR_7->i_state == VAR_2 )
    {
        block_t *VAR_12 = FUNC_3( VAR_7->p_spu );

        if( FUNC_8( !VAR_12 ) )
        {
            FUNC_4( VAR_7->p_spu );
            VAR_7->i_state = VAR_3;
            VAR_7->p_spu = ((void*)0);

            FUNC_7( VAR_5, "unable to assemble blocks, discarding" );
            return ((void*)0);
        }

        if( VAR_12->i_buffer != VAR_7->i_spu_size )
        {
            FUNC_7( VAR_5, "subtitle packets size=%zu should be %zu",
                      VAR_12->i_buffer, VAR_7->i_spu_size );
        }

        FUNC_6( VAR_5, "subtitle packet complete, size=%zu", VAR_12->i_buffer );

        VAR_7->i_state = VAR_3;
        VAR_7->p_spu = ((void*)0);
        return VAR_12;
    }

    return ((void*)0);
}
