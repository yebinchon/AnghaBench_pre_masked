
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int stime_t ;


 int FUNC_0 (int const*) ;

__attribute__((used)) static inline bool FUNC_1( const uint8_t *VAR_0, uint8_t VAR_1, stime_t *VAR_2 )
{


    if((VAR_0[0] & 0xC1) != 0x01 ||
       (VAR_0[2] & 0x01) != 0x01 ||
       (VAR_0[4] & 0x01) != 0x01 ||
       (VAR_0[0] & 0x30) == 0 ||
       (VAR_0[0] >> 5) > VAR_1 )
        return 0;


    *VAR_2 = FUNC_0( VAR_0 );
    return 1;
}
