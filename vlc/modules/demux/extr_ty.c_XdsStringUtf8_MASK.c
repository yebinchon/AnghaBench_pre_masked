
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int,int,int) ;

__attribute__((used)) static void FUNC_1( char VAR_0[2*32+1], const uint8_t *VAR_1, size_t VAR_2 )
{
    size_t VAR_3 = 0;
    for( size_t VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ )
    {
        switch( VAR_1[VAR_4] )
        {

        case 0x2a: VAR_0[VAR_3++] = 0xc3; VAR_0[VAR_3++] = 0xa1; break;
        case 0x5c: VAR_0[VAR_3++] = 0xc3; VAR_0[VAR_3++] = 0xa9; break;
        case 0x5e: VAR_0[VAR_3++] = 0xc3; VAR_0[VAR_3++] = 0xad; break;
        case 0x5f: VAR_0[VAR_3++] = 0xc3; VAR_0[VAR_3++] = 0xb3; break;
        case 0x60: VAR_0[VAR_3++] = 0xc3; VAR_0[VAR_3++] = 0xba; break;
        case 0x7b: VAR_0[VAR_3++] = 0xc3; VAR_0[VAR_3++] = 0xa7; break;
        case 0x7c: VAR_0[VAR_3++] = 0xc3; VAR_0[VAR_3++] = 0xb7; break;
        case 0x7d: VAR_0[VAR_3++] = 0xc3; VAR_0[VAR_3++] = 0x91; break;
        case 0x7e: VAR_0[VAR_3++] = 0xc3; VAR_0[VAR_3++] = 0xb1; break;

        default:
            VAR_0[VAR_3++] = VAR_1[VAR_4];
            break;
        }
    }
    VAR_0[VAR_3++] = '\0';
}
