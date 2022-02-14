
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static int FUNC_0( int VAR_0 )
{
    static const uint8_t VAR_1[13] =
    {
         2, 1, 1, 2, 2, 2, 2, 1, 1, 2, 2, 1, 1
    };
    int VAR_2 = 0;

    for( int VAR_3 = 0; VAR_3 < 13; VAR_3++ )
    {
        if( VAR_0 & (1<<VAR_3) )
            VAR_2 += VAR_1[VAR_3];
    }
    return VAR_2;
}
