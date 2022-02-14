
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int* o_ck; int* o_kk; int* e_ck; int* e_kk; scalar_t__ use_odd; } ;
typedef TYPE_1__ csa_t ;


 int FUNC_0 (int*,int*,int*) ;
 int FUNC_1 (TYPE_1__*,int,int*,int*,int*) ;

void FUNC_2( csa_t *VAR_0, uint8_t *VAR_1, int VAR_2 )
{
    uint8_t *VAR_3;
    uint8_t *VAR_4;

    int VAR_5, VAR_6;
    int VAR_7 = 4;
    uint8_t VAR_8[184/8+2][8], VAR_9[8], VAR_10[8];
    int VAR_11, VAR_12;


    VAR_1[3] |= 0x80;

    if( VAR_0->use_odd )
    {
        VAR_1[3] |= 0x40;
        VAR_3 = VAR_0->o_ck;
        VAR_4 = VAR_0->o_kk;
    }
    else
    {
        VAR_3 = VAR_0->e_ck;
        VAR_4 = VAR_0->e_kk;
    }


    VAR_7 = 4;
    if( VAR_1[3]&0x20 )
    {

        VAR_7 += VAR_1[4] + 1;
    }
    VAR_11 = (VAR_2 - VAR_7) / 8;
    VAR_12 = (VAR_2 - VAR_7) % 8;

    if( VAR_11 <= 0 )
    {
        VAR_1[3] &= 0x3f;
        return;
    }


    for( VAR_5 = 0; VAR_5 < 8; VAR_5++ )
    {
        VAR_8[VAR_11+1][VAR_5] = 0;
    }
    for( VAR_5 = VAR_11; VAR_5 > 0; VAR_5-- )
    {
        for( VAR_6 = 0; VAR_6 < 8; VAR_6++ )
        {
            VAR_10[VAR_6] = VAR_1[VAR_7+8*(VAR_5-1)+VAR_6] ^VAR_8[VAR_5+1][VAR_6];
        }
        FUNC_0( VAR_4, VAR_10, VAR_8[VAR_5] );
    }


    FUNC_1( VAR_0, 1, VAR_3, VAR_8[1], VAR_9 );

    for( VAR_5 = 0; VAR_5 < 8; VAR_5++ )
    {
        VAR_1[VAR_7+VAR_5] = VAR_8[1][VAR_5];
    }
    for( VAR_5 = 2; VAR_5 < VAR_11+1; VAR_5++ )
    {
        FUNC_1( VAR_0, 0, VAR_3, ((void*)0), VAR_9 );
        for( VAR_6 = 0; VAR_6 < 8; VAR_6++ )
        {
            VAR_1[VAR_7+8*(VAR_5-1)+VAR_6] = VAR_8[VAR_5][VAR_6] ^ VAR_9[VAR_6];
        }
    }
    if( VAR_12 > 0 )
    {
        FUNC_1( VAR_0, 0, VAR_3, ((void*)0), VAR_9 );
        for( VAR_6 = 0; VAR_6 < VAR_12; VAR_6++ )
        {
            VAR_1[VAR_2 - VAR_12 + VAR_6] ^= VAR_9[VAR_6];
        }
    }
}
