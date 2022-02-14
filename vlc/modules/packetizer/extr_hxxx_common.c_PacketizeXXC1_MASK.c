
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef TYPE_1__* (* pf_annexb_nal_packetizer ) (int *,int*,TYPE_1__*) ;
typedef int decoder_t ;
struct TYPE_14__ {int i_flags; int* p_buffer; size_t i_buffer; int i_pts; int i_dts; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__**,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int *,char*,int) ;

block_t *FUNC_6( decoder_t *VAR_1, uint8_t VAR_2,
                        block_t **VAR_3, pf_annexb_nal_packetizer VAR_4 )
{
    block_t *VAR_5;
    block_t *VAR_6 = ((void*)0);
    uint8_t *VAR_7;

    if( !VAR_3 || !*VAR_3 )
        return ((void*)0);
    if( (*VAR_3)->i_flags&(VAR_0) )
    {
        FUNC_3( *VAR_3 );
        return ((void*)0);
    }

    VAR_5 = *VAR_3;
    *VAR_3 = ((void*)0);

    for( VAR_7 = VAR_5->p_buffer; VAR_7 < &VAR_5->p_buffer[VAR_5->i_buffer]; )
    {
        bool VAR_8;
        int VAR_9 = 0;
        int VAR_10;

        if( &VAR_5->p_buffer[VAR_5->i_buffer] - VAR_7 < VAR_2 )
            break;

        for( VAR_10 = 0; VAR_10 < VAR_2; VAR_10++ )
        {
            VAR_9 = (VAR_9 << 8) | (*VAR_7++);
        }

        if( VAR_9 <= 0 ||
            VAR_9 > ( VAR_5->p_buffer + VAR_5->i_buffer - VAR_7 ) )
        {
            FUNC_5( VAR_1, "Broken frame : size %d is too big", VAR_9 );
            break;
        }


        block_t *VAR_11;

        if( VAR_9 == VAR_5->p_buffer + VAR_5->i_buffer - VAR_7 )
        {
            VAR_5->i_buffer = VAR_9;
            VAR_5->p_buffer = VAR_7;
            VAR_11 = FUNC_2( VAR_5, 4, VAR_9 );
            if( VAR_11 )
                VAR_5 = ((void*)0);
        }
        else
        {
            VAR_11 = FUNC_0( 4 + VAR_9 );
            if( VAR_11 )
            {
                VAR_11->i_dts = VAR_5->i_dts;
                VAR_11->i_pts = VAR_5->i_pts;

                FUNC_4( &VAR_11->p_buffer[4], VAR_7, VAR_9 );
            }
            VAR_7 += VAR_9;
        }

        if( !VAR_11 )
            break;


        VAR_11->p_buffer[0] = 0x00;
        VAR_11->p_buffer[1] = 0x00;
        VAR_11->p_buffer[2] = 0x00;
        VAR_11->p_buffer[3] = 0x01;


        block_t *VAR_12;
        if( ( VAR_12 = VAR_4( VAR_1, &VAR_8, VAR_11 ) ) )
        {
            FUNC_1( &VAR_6, VAR_12 );
        }

        if( !VAR_5 )
            break;
    }

    if( VAR_5 )
        FUNC_3( VAR_5 );

    return VAR_6;
}
