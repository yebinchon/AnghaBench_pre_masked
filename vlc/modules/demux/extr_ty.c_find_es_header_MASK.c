
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int const*,int const*,int) ;

__attribute__((used)) static int FUNC_1( const uint8_t *VAR_0,
                           const uint8_t *VAR_1, int VAR_2 )
{
    int VAR_3;

    for( VAR_3 = 0; VAR_3 < VAR_2; VAR_3++ )
    {
        if( !FUNC_0( &VAR_1[VAR_3], VAR_0, 4 ) )
            return VAR_3;
    }
    return -1;
}
