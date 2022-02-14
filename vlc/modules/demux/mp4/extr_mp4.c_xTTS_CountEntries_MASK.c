
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int demux_t ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__ const) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,char*,scalar_t__,scalar_t__ const) ;

__attribute__((used)) static int FUNC_3( demux_t *VAR_4, uint32_t *VAR_5 ,
                              const uint32_t VAR_6,
                              uint32_t VAR_7,
                              uint32_t VAR_8,
                              const uint32_t *VAR_9,
                              const uint32_t VAR_10 )
{
    uint32_t VAR_11;
    while( VAR_8 > 0 )
    {
        if ( FUNC_1((VAR_0 - VAR_6) >= *VAR_5) )
            VAR_11 = VAR_6 + *VAR_5;
        else
            return VAR_2;

        if ( VAR_11 >= VAR_10 )
        {
            FUNC_2( VAR_4, "invalid index counting total samples %u %u", VAR_11, VAR_10 );
            return VAR_1;
        }

        if ( VAR_7 )
        {
            if ( VAR_7 > VAR_8 )
            {
                VAR_7 -= VAR_8;
                VAR_8 = 0;
                *VAR_5 +=1;
                break;
            }
            else
            {
                VAR_8 -= VAR_7;
                VAR_7 = 0;
                *VAR_5 += 1;
                continue;
            }
        }
        else
        {
            VAR_8 -= FUNC_0( VAR_8, VAR_9[VAR_11] );
            *VAR_5 += 1;
        }
    }

    return VAR_3;
}
