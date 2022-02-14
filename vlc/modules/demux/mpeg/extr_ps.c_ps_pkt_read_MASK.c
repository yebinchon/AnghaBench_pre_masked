
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int stream_t ;
typedef int block_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (int const*,int) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int const**,int) ;

__attribute__((used)) static block_t *FUNC_3( stream_t *VAR_2 )
{
    const uint8_t *VAR_3;
    int VAR_4 = FUNC_2( VAR_2, &VAR_3, 14 );
    if( VAR_4 < 4 )
        return ((void*)0);

    int VAR_5 = FUNC_0( VAR_3, VAR_4 );
    if( VAR_5 <= 6 && VAR_3[3] > VAR_1 )
    {

        VAR_5 = 6;
        for( ;; )
        {
            VAR_4 = FUNC_2( VAR_2, &VAR_3, VAR_5 + 1024 );
            if( VAR_4 <= VAR_5 + 4 )
            {
                return ((void*)0);
            }
            while( VAR_5 <= VAR_4 - 4 )
            {
                if( VAR_3[VAR_5] == 0x00 && VAR_3[VAR_5+1] == 0x00 &&
                    VAR_3[VAR_5+2] == 0x01 && VAR_3[VAR_5+3] >= VAR_0 )
                {
                    return FUNC_1( VAR_2, VAR_5 );
                }
                VAR_5++;
            }
        }
    }
    else
    {

        return FUNC_1( VAR_2, VAR_5 );
    }

    return ((void*)0);
}
