
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
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*,int,scalar_t__) ;
 int FUNC_6 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_7( sout_stream_id_sys_t *VAR_2, block_t *VAR_3 )
{
    int VAR_4 = FUNC_4 (VAR_2) - 2;
    int VAR_5 = ( VAR_3->i_buffer + VAR_4 - 1 ) / VAR_4;

    uint8_t *VAR_6 = VAR_3->p_buffer;
    int VAR_7 = VAR_3->i_buffer;
    int VAR_8;


    for( VAR_8 = 0; VAR_8 < VAR_5; VAR_8++ )
    {
        int VAR_9 = FUNC_0( VAR_4, VAR_7 );
        block_t *VAR_10 = FUNC_1( 14 + VAR_9 );


        FUNC_5( VAR_2, VAR_10, ((VAR_8 == VAR_5 - 1)?1:0),
                      (VAR_3->i_pts != VAR_1 ? VAR_3->i_pts : VAR_3->i_dts) );

        VAR_10->p_buffer[12] = 0xF0;
        VAR_10->p_buffer[13] = VAR_6[0]&0x7C;


        FUNC_3( &VAR_10->p_buffer[14], VAR_6+1, VAR_9-1 );

        VAR_10->i_buffer--;
        VAR_10->i_dts = VAR_3->i_dts + VAR_8 * VAR_3->i_length / VAR_5;
        VAR_10->i_length = VAR_3->i_length / VAR_5;

        FUNC_6( VAR_2, VAR_10 );

        VAR_6 += VAR_9;
        VAR_7 -= VAR_9;
    }

    FUNC_2(VAR_3);
    return VAR_0;
}
