
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;



__attribute__((used)) static void FUNC_0( char * VAR_0, uint16_t VAR_1 )
{
    if( VAR_1 >= 0x80 )
    {
        if( VAR_1 >= 0x800 )
        {
            VAR_0[0] = (VAR_1 >> 12) | 0xE0;
            VAR_0[1] = ((VAR_1 >> 6) & 0x3F) | 0x80;
            VAR_0[2] = (VAR_1 & 0x3F) | 0x80;
            VAR_0[3] = 0;
        }
        else
        {
            VAR_0[0] = (VAR_1 >> 6) | 0xC0;
            VAR_0[1] = (VAR_1 & 0x3F) | 0x80;
            VAR_0[2] = 0;
        }
    }
    else
    {
        VAR_0[0] = VAR_1;
        VAR_0[1] = 0;
    }
}
