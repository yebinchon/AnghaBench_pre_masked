
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int sout_stream_id_sys_t ;
struct TYPE_7__ {int i_buffer; int* p_buffer; scalar_t__ i_pts; scalar_t__ i_dts; int i_length; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*,int,scalar_t__) ;
 int FUNC_6 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7( sout_stream_id_sys_t *VAR_6, block_t *VAR_7 )
{
    int VAR_8 = FUNC_4 (VAR_6) - VAR_0;
    int VAR_9 = ( VAR_7->i_buffer + VAR_8 - 1 ) / VAR_8;

    uint8_t *VAR_10 = VAR_7->p_buffer;
    int VAR_11 = VAR_7->i_buffer;

    if ( VAR_8 <= 0 )
    {
        FUNC_2(VAR_7);
        return VAR_2;
    }

    for( int VAR_12 = 0; VAR_12 < VAR_9; VAR_12++ )
    {
        int VAR_13 = FUNC_0( VAR_8, VAR_11 );
        block_t *VAR_14 = FUNC_1( VAR_1 + VAR_13 );
        if ( VAR_14 == ((void*)0) )
        {
            FUNC_2(VAR_7);
            return VAR_3;
        }



        if (VAR_12 == 0)
            VAR_14->p_buffer[12] = 0x10;
        else
            VAR_14->p_buffer[12] = 0;


        FUNC_5( VAR_6, VAR_14, (VAR_12 == VAR_9 - 1),
                      (VAR_7->i_pts != VAR_5 ? VAR_7->i_pts : VAR_7->i_dts) );
        FUNC_3( &VAR_14->p_buffer[VAR_1], VAR_10, VAR_13 );

        VAR_14->i_dts = VAR_7->i_dts + VAR_12 * VAR_7->i_length / VAR_9;
        VAR_14->i_length = VAR_7->i_length / VAR_9;

        FUNC_6( VAR_6, VAR_14 );

        VAR_10 += VAR_13;
        VAR_11 -= VAR_13;
    }

    FUNC_2(VAR_7);
    return VAR_4;
}
