
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int const*,int const*,int) ;

__attribute__((used)) static inline bool FUNC_1( const uint8_t *VAR_0, size_t VAR_1 )
{
    const uint8_t VAR_2[3] = { 0, 0, 1 };
    int VAR_3 = 0;

    if( VAR_1 < 9 ||
       (!FUNC_0( VAR_0, VAR_2, 3 ) &&
        !FUNC_0( &VAR_0[1], VAR_2, 3 )) )
        return 0;


    while( VAR_1 > 5 )
    {
        if( !FUNC_0( VAR_0, VAR_2, 3 ) )
        {
            if(VAR_0[3] == 0x67)
                VAR_3 ^= 0x01;
            else if(VAR_0[3] == 0x68)
                VAR_3 ^= 0x02;
            else if( VAR_0[3] & 0x80 )
                return 0;
            else if( (VAR_0[3] & 0x1F) > 23 || (VAR_0[3] & 0x1F) < 1 )
                return 0;
            else if( (VAR_0[3] & 0x1F) < 6 )
                return (VAR_3 == 0x03);
        }
        VAR_0++;
        VAR_1--;
    }

    return 0;
}
