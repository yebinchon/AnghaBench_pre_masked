
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int sout_stream_id_sys_t ;
struct TYPE_7__ {int i_buffer; int i_length; scalar_t__ i_dts; int * p_buffer; int i_pts; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_1__*,int ,int ) ;
 int FUNC_8 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9( sout_stream_id_sys_t *VAR_2, block_t *VAR_3 )
{
    int VAR_4 = FUNC_6 (VAR_2) - 6;
    int VAR_5 = ( VAR_3->i_buffer + VAR_4 - 1 ) / VAR_4;

    uint8_t *VAR_6 = VAR_3->p_buffer;
    int VAR_7 = VAR_3->i_buffer;

    for( int VAR_8 = 0; VAR_8 < VAR_5; VAR_8++ )
    {
        int VAR_9 = FUNC_2( VAR_4, VAR_7 );
        block_t *VAR_10 = FUNC_3( 18 + VAR_9 );

        unsigned VAR_11, VAR_12;
        if (VAR_5 == 1)
        {

            VAR_11 = 0;
            VAR_12 = 1;
        }
        else
        {

            VAR_12 = 0;
            if (VAR_8 == 0)
                VAR_11 = 1;
            else if (VAR_8 == VAR_5 - 1)
                VAR_11 = 3;
            else
                VAR_11 = 2;
        }

        uint32_t VAR_13 = ((VAR_1 & 0xffffff) << 8) |
                          (VAR_11 << 6) | (0 << 4) | VAR_12;


        FUNC_7( VAR_2, VAR_10, 0, VAR_3->i_pts);

        FUNC_0( VAR_10->p_buffer + 12, VAR_13);
        FUNC_1( VAR_10->p_buffer + 16, VAR_9);
        FUNC_5( &VAR_10->p_buffer[18], VAR_6, VAR_9 );

        VAR_10->i_dts = VAR_3->i_dts + VAR_8 * VAR_3->i_length / VAR_5;
        VAR_10->i_length = VAR_3->i_length / VAR_5;

        FUNC_8( VAR_2, VAR_10 );

        VAR_6 += VAR_9;
        VAR_7 -= VAR_9;
    }

    FUNC_4(VAR_3);
    return VAR_0;
}
