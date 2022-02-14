
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (int) ;

bool FUNC_2( unsigned *VAR_0, unsigned *VAR_1,
                        uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4 )
{
    bool VAR_5 = 1;
    uint64_t VAR_6;

    if( VAR_3 == 0 )
    {
        *VAR_0 = 0;
        *VAR_1 = 1;
        return 1;
    }

    VAR_6 = FUNC_0( VAR_2, VAR_3 );
    VAR_2 /= VAR_6;
    VAR_3 /= VAR_6;

    if( VAR_4 == 0 ) VAR_4 = FUNC_1(0xFFFFFFFF);

    if( VAR_2 > VAR_4 || VAR_3 > VAR_4 )
    {
        uint64_t VAR_7 = 0, VAR_8 = 1, VAR_9 = 1, VAR_10 = 0;
        VAR_5 = 0;

        for( ; ; )
        {
            uint64_t VAR_11 = VAR_2 / VAR_3;
            uint64_t VAR_12 = VAR_11 * VAR_9 + VAR_7;
            uint64_t VAR_13 = VAR_11 * VAR_10 + VAR_8;

            if( VAR_12 > VAR_4 || VAR_13 > VAR_4 ) break;

            VAR_2 %= VAR_3;

            VAR_7 = VAR_9; VAR_8 = VAR_10;
            VAR_9 = VAR_12; VAR_10 = VAR_13;
            if( VAR_2 == 0 ) break;
            VAR_11 = VAR_2; VAR_2 = VAR_3; VAR_3 = VAR_11;
        }
        VAR_2 = VAR_9;
        VAR_3 = VAR_10;
    }

    *VAR_0 = VAR_2;
    *VAR_1 = VAR_3;

    return VAR_5;
}
