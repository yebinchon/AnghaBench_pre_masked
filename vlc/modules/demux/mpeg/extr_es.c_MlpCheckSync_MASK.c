
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (unsigned int*) ;

__attribute__((used)) static int FUNC_1( const uint8_t *VAR_0, unsigned *VAR_1 )
{
    if( VAR_0[4+0] != 0xf8 || VAR_0[4+1] != 0x72 || VAR_0[4+2] != 0x6f )
        return -1;

    if( VAR_0[4+3] != 0xbb )
        return -1;


    FUNC_0(VAR_1);
    return 0;
}
