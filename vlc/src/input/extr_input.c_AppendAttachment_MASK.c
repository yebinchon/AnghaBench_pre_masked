
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const input_attachment_t ;
typedef int demux_t ;


 int FUNC_0 (int const**) ;
 scalar_t__ FUNC_1 (int const**) ;
 int ** FUNC_2 (int const**,int) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static void FUNC_4( int *VAR_0, input_attachment_t ***VAR_1,
                              const demux_t ***VAR_2,
                              int VAR_3, input_attachment_t **VAR_4, const demux_t *VAR_5 )
{
    int VAR_6 = *VAR_0;
    int VAR_7;

    input_attachment_t **VAR_8 = FUNC_2( *VAR_1,
                    sizeof(*VAR_8) * ( VAR_6 + VAR_3 ) );
    if( FUNC_1(VAR_8) )
    {
        *VAR_1 = VAR_8;
        const demux_t **VAR_9 = FUNC_2( *VAR_2,
                        sizeof(*VAR_9) * ( VAR_6 + VAR_3 ) );
        if( FUNC_1(VAR_9) )
        {
            *VAR_2 = VAR_9;

            for( VAR_7 = 0; VAR_7 < VAR_3; VAR_7++ )
            {
                VAR_8[VAR_6] = VAR_4[VAR_7];
                VAR_9[VAR_6++] = VAR_5;
            }

            *VAR_0 = VAR_6;
            FUNC_0( VAR_4 );
            return;
        }
    }


    for( VAR_7 = 0; VAR_7 < VAR_3; VAR_7++ )
        FUNC_3( VAR_4[VAR_7] );
    FUNC_0( VAR_4 );
}
