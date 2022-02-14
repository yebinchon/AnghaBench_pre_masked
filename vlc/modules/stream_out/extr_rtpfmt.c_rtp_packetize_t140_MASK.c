
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int sout_stream_id_sys_t ;
struct TYPE_7__ {int* p_buffer; size_t i_buffer; scalar_t__ i_length; scalar_t__ i_pts; scalar_t__ i_dts; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int*,int const*,size_t) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_1__*,int ,scalar_t__) ;
 int FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6( sout_stream_id_sys_t *VAR_1, block_t *VAR_2 )
{
    const size_t VAR_3 = FUNC_3 (VAR_1);
    const uint8_t *VAR_4 = VAR_2->p_buffer;
    size_t VAR_5 = VAR_2->i_buffer;

    for( unsigned VAR_6 = 0; VAR_5 > 0; VAR_6++ )
    {
        size_t VAR_7 = VAR_5;



        if( VAR_5 > VAR_3 )
        {
            VAR_7 = VAR_3;

            while( ( VAR_4[VAR_7] & 0xC0 ) == 0x80 )
            {
                if( VAR_7 == 0 )
                 {
                    FUNC_1(VAR_2);
                    return VAR_0;
                }
                VAR_7--;
            }
        }

        block_t *VAR_8 = FUNC_0( 12 + VAR_7 );
        if( VAR_8 == ((void*)0) )
        {
            FUNC_1(VAR_2);
            return VAR_0;
        }

        FUNC_4( VAR_1, VAR_8, 0, VAR_2->i_pts + VAR_6 );
        FUNC_2( VAR_8->p_buffer + 12, VAR_4, VAR_7 );

        VAR_8->i_dts = VAR_2->i_pts;
        VAR_8->i_length = 0;

        FUNC_5( VAR_1, VAR_8 );

        VAR_4 += VAR_7;
        VAR_5 -= VAR_7;
    }

    FUNC_1(VAR_2);
    return VAR_0;
}
