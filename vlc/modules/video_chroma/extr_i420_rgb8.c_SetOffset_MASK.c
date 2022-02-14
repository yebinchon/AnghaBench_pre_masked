
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0( int VAR_0, int VAR_1, int VAR_2,
                       int VAR_3, bool *VAR_4,
                       int *VAR_5, int *VAR_6 )
{
    int VAR_7;
    int VAR_8;




    if( VAR_2 - VAR_0 == 0 )
    {

        *VAR_4 = 0;
    }
    else if( VAR_2 - VAR_0 > 0 )
    {
        int VAR_9 = 0;


        *VAR_4 = 1;
        VAR_8 = VAR_2;
        for( VAR_7 = VAR_0; VAR_7--; )
        {
            while( (VAR_8 -= VAR_0) > 0 )
            {
                *VAR_6++ = 0;
                *VAR_6++ = 0;
            }
            *VAR_6++ = 1;
            *VAR_6++ = VAR_9;
            VAR_9 = 1 - VAR_9;
            VAR_8 += VAR_2;
        }
    }
    else
    {
        int VAR_10 = 0;
        int VAR_11;


        *VAR_4 = 1;
        VAR_8 = VAR_0;
        for( VAR_7 = VAR_2; VAR_7--; )
        {
            VAR_11 = 1;
            while( (VAR_8 -= VAR_2) > 0 )
            {
                VAR_11 += 1;
            }
            *VAR_6++ = VAR_11;
            *VAR_6++ = ( VAR_11 += VAR_10 ) >> 1;
            VAR_10 = VAR_11 & 1;
            VAR_8 += VAR_0;
        }
    }




    if( VAR_3 - VAR_1 == 0 )
    {
        *VAR_5 = 0;
    }
    else if( VAR_3 - VAR_1 > 0 )
    {
        *VAR_5 = 1;
    }
    else
    {
        *VAR_5 = -1;
    }
}
