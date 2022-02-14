
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int sout_stream_id_sys_t ;
struct TYPE_7__ {int i_buffer; int i_length; scalar_t__ i_dts; int * p_buffer; int i_pts; } ;
typedef TYPE_1__ block_t ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*,int,int ) ;
 int FUNC_7 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_8( sout_stream_id_sys_t *VAR_1, block_t *VAR_2 )
{
    int VAR_3 = FUNC_5 (VAR_1) - 4;
    int VAR_4 = ( VAR_2->i_buffer + VAR_3 - 1 ) / VAR_3;

    uint8_t *VAR_5 = VAR_2->p_buffer;
    int VAR_6 = VAR_2->i_buffer;
    int VAR_7;

    for( VAR_7 = 0; VAR_7 < VAR_4; VAR_7++ )
    {
        int VAR_8 = FUNC_1( VAR_3, VAR_6 );
        block_t *VAR_9 = FUNC_2( 16 + VAR_8 );


        FUNC_6( VAR_1, VAR_9, (VAR_7 == VAR_4 - 1)?1:0, VAR_2->i_pts );

        FUNC_0( VAR_9->p_buffer + 12, 0 );

        FUNC_0( VAR_9->p_buffer + 14, VAR_7 * VAR_3 );
        FUNC_4( &VAR_9->p_buffer[16], VAR_5, VAR_8 );

        VAR_9->i_dts = VAR_2->i_dts + VAR_7 * VAR_2->i_length / VAR_4;
        VAR_9->i_length = VAR_2->i_length / VAR_4;

        FUNC_7( VAR_1, VAR_9 );

        VAR_5 += VAR_8;
        VAR_6 -= VAR_8;
    }

    FUNC_3(VAR_2);
    return VAR_0;
}
