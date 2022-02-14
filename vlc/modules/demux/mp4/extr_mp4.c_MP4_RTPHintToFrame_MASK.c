
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_9__ {int type; int trackrefindex; scalar_t__ length; scalar_t__ sampleoffset; int bytesperblock; int samplesperblock; void* samplenumber; } ;
typedef TYPE_1__ mp4_rtpsampleconstructor_t ;
typedef int demux_t ;
struct TYPE_10__ {int* p_buffer; int i_buffer; } ;
typedef TYPE_2__ block_t ;


 int VAR_0 ;
 void* FUNC_0 (int*) ;
 void* FUNC_1 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (scalar_t__) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int const*,int const*,int) ;
 int FUNC_6 (int*,int const*,scalar_t__) ;
 int FUNC_7 (int *,char*,...) ;

__attribute__((used)) static block_t * FUNC_8( demux_t *VAR_3, block_t *VAR_4, uint32_t VAR_5 )
{
    uint8_t *VAR_6 = VAR_4->p_buffer + VAR_2;
    block_t *VAR_7 = ((void*)0);
    size_t VAR_8 = 0;

    if( VAR_4->i_buffer < VAR_2 + VAR_1 + VAR_0 )
    {
        FUNC_7( VAR_3, "Sample not large enough for necessary structs");
        FUNC_4( VAR_4 );
        return ((void*)0);
    }

    for( uint32_t VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9 )
    {
        if( (size_t)(VAR_6 - VAR_4->p_buffer) + VAR_1 + VAR_0 > VAR_4->i_buffer )
            goto error;


        VAR_6 += VAR_1;

        mp4_rtpsampleconstructor_t VAR_10;

        VAR_10.type = VAR_6[0];
        VAR_10.trackrefindex = VAR_6[1];
        VAR_10.length = FUNC_1( &VAR_6[2] );
        VAR_10.samplenumber = FUNC_0( &VAR_6[4] );
        VAR_10.sampleoffset = FUNC_0( &VAR_6[8] );
        VAR_10.bytesperblock = FUNC_1( &VAR_6[12] );
        VAR_10.samplesperblock = FUNC_1( &VAR_6[14] );


        VAR_6 += VAR_0;


        if( VAR_10.type != 2||VAR_10.trackrefindex != -1
            ||VAR_10.samplesperblock != 1||VAR_10.bytesperblock != 1 )
        {
            FUNC_7(VAR_3, "Unhandled constructor in RTP Reception Hint Track. Type:%u", VAR_10.type);
            goto error;
        }


        if( VAR_10.sampleoffset + VAR_10.length > VAR_4->i_buffer)
        {
            FUNC_7(VAR_3, "Sample buffer is smaller than sample" );
            goto error;
        }

        block_t *VAR_11 = ( VAR_7 ) ?
                             FUNC_3( VAR_7, 0, VAR_8 + VAR_10.length + 4 ):
                             FUNC_2( VAR_8 + VAR_10.length + 4 );
        if( !VAR_11 )
            goto error;

        VAR_7 = VAR_11;
        uint8_t *VAR_12 = &VAR_7->p_buffer[VAR_8];

        const uint8_t* VAR_13 = VAR_4->p_buffer + VAR_10.sampleoffset;
        uint8_t VAR_14 = (*VAR_13) & ((1<<5)-1);

        const uint8_t VAR_15[4] = { 0, 0, 0, 1 };
        if( FUNC_5( VAR_13, VAR_15, 4 ) )
        {
            if( VAR_14 == 7 || VAR_14 == 8 )
                *VAR_12++=0;

            VAR_12[0] = 0;
            VAR_12[1] = 0;
            VAR_12[2] = 1;
            VAR_12 += 3;
        }

        FUNC_6( VAR_12, VAR_13, VAR_10.length );
        VAR_12 += VAR_10.length;

        VAR_8 = VAR_12 - VAR_7->p_buffer;
    }

    FUNC_4( VAR_4 );
    if( VAR_7 )
        VAR_7->i_buffer = VAR_8;
    return VAR_7;

error:
    FUNC_4( VAR_4 );
    if( VAR_7 )
        FUNC_4( VAR_7 );
    return ((void*)0);
}
