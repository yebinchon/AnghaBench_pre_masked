
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (int ,int,int const**,int*,int const**,int*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int*,int const*,int) ;

__attribute__((used)) static uint8_t * FUNC_3( uint16_t VAR_0, bool VAR_1, int *VAR_2 )
{
    const uint8_t *VAR_3, *VAR_4;
    uint8_t VAR_5, VAR_6;
    uint8_t *VAR_7 = ((void*)0);
    const uint8_t VAR_8[] = {0,0,0,1};
    if( FUNC_0( VAR_0, VAR_1,
                     &VAR_4, &VAR_5, &VAR_3, &VAR_6 ) )
    {
        int VAR_9 = VAR_6 + VAR_5 + 2 * 5;
        if( (VAR_7 = (uint8_t *) FUNC_1(VAR_9)) )
        {
            *VAR_2 = VAR_9;
            FUNC_2(VAR_7, VAR_8, 4);
            VAR_7[4] = 0x67;
            FUNC_2(&VAR_7[5], VAR_4, VAR_5);
            FUNC_2(&VAR_7[5 + VAR_5], VAR_8, 4);
            VAR_7[9 + VAR_5] = 0x68;
            FUNC_2(&VAR_7[10 + VAR_5], VAR_3, VAR_6);
        }
    }
    return VAR_7;
}
