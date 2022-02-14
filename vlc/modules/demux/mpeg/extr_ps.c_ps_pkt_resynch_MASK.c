
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int stream_t ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (int const*,int const*,int) ;
 int FUNC_1 (int *,int const**,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static int FUNC_3( stream_t *VAR_3, int VAR_4, bool VAR_5 )
{
    const uint8_t *VAR_6;
    int VAR_7;
    int VAR_8;

    if( FUNC_1( VAR_3, &VAR_6, 4 ) < 4 )
    {
        return -1;
    }
    if( VAR_6[0] == 0 && VAR_6[1] == 0 && VAR_6[2] == 1 &&
        VAR_6[3] >= VAR_1 )
    {
        return 1;
    }

    if( ( VAR_7 = FUNC_1( VAR_3, &VAR_6, 512 ) ) < 4 )
    {
        return -1;
    }
    VAR_8 = 0;

    for( ;; )
    {
        if( VAR_7 < 4 )
        {
            break;
        }


        if( VAR_4 == VAR_0 && VAR_8 == 0 && VAR_7 >= 48 )
        {
            const uint8_t VAR_9[12] = { 0x00, 0xff, 0xff, 0xff, 0xff, 0xff,
                                               0xff, 0xff, 0xff, 0xff, 0xff, 0x00 };
            if( !FUNC_0( &VAR_6[24], VAR_9, 12 ) )
            {
                VAR_7 -= 48;
                VAR_6 += 48;
                VAR_8 += 48;
                continue;
            }
        }

        if( VAR_6[0] == 0 && VAR_6[1] == 0 && VAR_6[2] == 1 &&
            VAR_6[3] >= VAR_1 &&
            ( !VAR_5 || VAR_6[3] == VAR_2 ) )
        {
            return FUNC_2( VAR_3, ((void*)0), VAR_8 ) == VAR_8 ? 1 : -1;
        }

        VAR_6++;
        VAR_7--;
        VAR_8++;
    }
    return FUNC_2( VAR_3, ((void*)0), VAR_8 ) == VAR_8 ? 0 : -1;
}
