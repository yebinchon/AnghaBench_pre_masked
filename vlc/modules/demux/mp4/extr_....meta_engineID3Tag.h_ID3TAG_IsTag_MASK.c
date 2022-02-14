
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*,char*,int) ;

__attribute__((used)) static bool FUNC_2( const uint8_t *VAR_0, bool VAR_1 )
{
    return( FUNC_1(VAR_0, (VAR_1) ? "3DI" : "ID3", 3) == 0 &&
            VAR_0[3] < 0xFF &&
            VAR_0[4] < 0xFF &&
           ((FUNC_0(&VAR_0[6]) & 0x80808080) == 0) );
}
