
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int const** VAR_1 ;
 int const** VAR_2 ;

__attribute__((used)) static uint8_t FUNC_1( const uint8_t *VAR_3, const int VAR_4,
                      const int VAR_5, int VAR_6, int VAR_7 )
{
    int VAR_8 = 0;
    int VAR_9 = 0;
    int VAR_10;
    int VAR_11;
    for ( int VAR_12 = 0; VAR_12 < 3; VAR_12++ )
    {

        if (VAR_12 == 0 && VAR_6 == 0)
        {

            VAR_10 = 0;
        }

        else if (VAR_12 == 2 && VAR_6 == VAR_4 - 1)
        {

            VAR_10 = VAR_4 - 1;
        }
        else
        {
            VAR_10 = VAR_6 + VAR_12 - 1;
        }
        for ( int VAR_13 = 0; VAR_13 < 3; VAR_13++ )
        {

            if (VAR_13 == 0 && VAR_7 == 0)
            {

                VAR_11 = 0;
            }

            else if (VAR_13 == 2 && VAR_7 == VAR_5 - 1 )
            {

                VAR_11 = VAR_4 * (VAR_5 - 1);
            }
            else {
                VAR_11 = VAR_4 * (VAR_7 + VAR_13 - 1);
            }

            VAR_8 += VAR_1[VAR_12][VAR_13] * VAR_3[VAR_11 + VAR_10];
            VAR_9 += VAR_2[VAR_12][VAR_13] * VAR_3[VAR_11 + VAR_10];
        }
    }
    int VAR_14 = FUNC_0(VAR_8) + FUNC_0(VAR_9);
    return (VAR_14 > VAR_0) ? VAR_0 : VAR_14;
}
