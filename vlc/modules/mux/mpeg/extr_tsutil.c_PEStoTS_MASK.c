
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_7__ {int* p_buffer; int i_buffer; struct TYPE_7__* p_next; } ;
typedef TYPE_1__ block_t ;
typedef int (* PEStoTSCallback ) (void*,TYPE_1__*) ;


 int FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int*,int*,int) ;

void FUNC_4( void *VAR_0, PEStoTSCallback VAR_1, block_t *VAR_2,
              uint16_t VAR_3, bool *VAR_4, uint8_t *VAR_5 )
{

    uint8_t *VAR_6 = VAR_2->p_buffer;
    int VAR_7 = VAR_2->i_buffer;

    bool VAR_8 = 1;

    for (;;)
    {
        int VAR_9 = FUNC_0( VAR_7, 184 );
        bool VAR_10 = VAR_7 < 184;
        block_t *VAR_11 = FUNC_1( 188 );

        VAR_11->p_buffer[0] = 0x47;
        VAR_11->p_buffer[1] = ( VAR_8 ? 0x40 : 0x00 )|
                            ( ( VAR_3 >> 8 )&0x1f );
        VAR_11->p_buffer[2] = VAR_3 & 0xff;
        VAR_11->p_buffer[3] = ( VAR_10 ? 0x30 : 0x10 )|
                            *VAR_5;

        VAR_8 = 0;
        *VAR_5 = (*VAR_5+1)%16;

        if( VAR_10 )
        {
            int VAR_12 = 184 - VAR_9;

            VAR_11->p_buffer[4] = VAR_12 - 1;
            if( VAR_12 > 1 )
            {
                VAR_11->p_buffer[5] = 0x00;
                if( *VAR_4 )
                {
                    VAR_11->p_buffer[5] |= 0x80;
                    *VAR_4 = 0;
                }
                for (int VAR_13 = 6; VAR_13 < 6 + VAR_12 - 2; VAR_13++ )
                {
                    VAR_11->p_buffer[VAR_13] = 0xff;
                }
            }
        }

        FUNC_3( &VAR_11->p_buffer[188 - VAR_9], VAR_6, VAR_9 );
        VAR_6 += VAR_9;
        VAR_7 -= VAR_9;

        VAR_1( VAR_0, VAR_11 );

        if( VAR_7 <= 0 )
        {
            block_t *VAR_14 = VAR_2->p_next;

            VAR_2->p_next = ((void*)0);
            FUNC_2( VAR_2 );
            if( VAR_14 == ((void*)0) )
                return;

            VAR_8 = 1;
            VAR_2 = VAR_14;
            VAR_7 = VAR_2->i_buffer;
            VAR_6 = VAR_2->p_buffer;
        }
    }
}
