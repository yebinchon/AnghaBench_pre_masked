
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0( const uint8_t *VAR_1, int VAR_2 )
{
    if ( VAR_2 >= 3 )
    {
        int VAR_3, VAR_4 = 0;
        for ( VAR_3 = 0; VAR_3 < 3; VAR_3++ )
            VAR_4 = (VAR_4 << 8) | *VAR_1++;
        return VAR_4;
    }

    return VAR_0;
}
