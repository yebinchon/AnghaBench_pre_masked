
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static int FUNC_0( uint32_t VAR_0, char *VAR_1 )
{

    if( VAR_0 <= 0x7F )
    {
        VAR_1[0] = VAR_0;
        return 1;
    }
    else if( VAR_0 <= 0x7FF )
    {
        VAR_1[0] = 0xC0 | (VAR_0 >> 6);
        VAR_1[1] = 0x80 | (VAR_0 & 0x3F);
        return 2;
    }
    else if( VAR_0 <= 0xFFFF )
    {
        VAR_1[0] = 0xE0 | (VAR_0 >> 12);
        VAR_1[1] = 0x80 | ((VAR_0 >> 6) & 0x3F);
        VAR_1[2] = 0x80 | (VAR_0 & 0x3F);
        return 3;
    }
    else if( VAR_0 <= 0x1FFFFF )
    {
        VAR_1[0] = 0xF0 | (VAR_0 >> 18);
        VAR_1[1] = 0x80 | ((VAR_0 >> 12) & 0x3F);
        VAR_1[2] = 0x80 | ((VAR_0 >> 6) & 0x3F);
        VAR_1[3] = 0x80 | (VAR_0 & 0x3F);
        return 4;
    }
    else if( VAR_0 <= 0x3FFFFFF )
    {
        VAR_1[0] = 0xF8 | (VAR_0 >> 24);
        VAR_1[1] = 0x80 | ((VAR_0 >> 18) & 0x3F);
        VAR_1[2] = 0x80 | ((VAR_0 >> 12) & 0x3F);
        VAR_1[3] = 0x80 | ((VAR_0 >> 6) & 0x3F);
        VAR_1[4] = 0x80 | (VAR_0 & 0x3F);
        return 5;
    }
    else
    {
        VAR_1[0] = 0xFC | (VAR_0 >> 30);
        VAR_1[1] = 0x80 | ((VAR_0 >> 24) & 0x3F);
        VAR_1[2] = 0x80 | ((VAR_0 >> 18) & 0x3F);
        VAR_1[3] = 0x80 | ((VAR_0 >> 12) & 0x3F);
        VAR_1[4] = 0x80 | ((VAR_0 >> 6) & 0x3F);
        VAR_1[5] = 0x80 | (VAR_0 & 0x3F);
        return 6;
    }
}
