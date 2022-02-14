
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0( int VAR_0, int VAR_1, int VAR_2,
                       int VAR_3, bool *VAR_4,
                       unsigned int *VAR_5, int *VAR_6 )
{



    if( VAR_2 - VAR_0 == 0 )
    {
        *VAR_4 = 0;
    }
    else if( VAR_2 - VAR_0 > 0 )
    {
        int VAR_7 = VAR_2;

        *VAR_4 = 1;
        for( int VAR_8 = VAR_0; VAR_8--; )
        {
            while( (VAR_7 -= VAR_0) > 0 )
            {
                *VAR_6++ = 0;
            }
            *VAR_6++ = 1;
            VAR_7 += VAR_2;
        }
    }
    else
    {
        int VAR_9 = VAR_2;

        *VAR_4 = 1;
        for( int VAR_10 = VAR_2; VAR_10--; )
        {
            *VAR_6 = 1;
            while( (VAR_9 -= VAR_2) > 0 )
            {
                *VAR_6 += 1;
            }
            VAR_6++;
            VAR_9 += VAR_0;
        }
    }




    if( VAR_3 - VAR_1 == 0 )
        *VAR_5 = 0;
    else if( VAR_3 - VAR_1 > 0 )
        *VAR_5 = 1;
    else
        *VAR_5 = -1;
}
