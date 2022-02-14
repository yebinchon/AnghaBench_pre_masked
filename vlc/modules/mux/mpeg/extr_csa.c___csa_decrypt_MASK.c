
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int* o_ck; int* o_kk; int* e_ck; int* e_kk; } ;
typedef TYPE_1__ csa_t ;


 int FUNC_0 (int*,int*,int*) ;
 int FUNC_1 (TYPE_1__*,int,int*,int*,int*) ;

void FUNC_2( csa_t *VAR_0, uint8_t *VAR_1, int VAR_2 )
{
    uint8_t *VAR_3;
    uint8_t *VAR_4;

    uint8_t VAR_5[8], VAR_6[8], VAR_7[8];

    int VAR_8, VAR_9;
    int VAR_10, VAR_11, VAR_12;


    if( (VAR_1[3]&0x80) == 0 )
    {

        return;
    }
    if( VAR_1[3]&0x40 )
    {
        VAR_3 = VAR_0->o_ck;
        VAR_4 = VAR_0->o_kk;
    }
    else
    {
        VAR_3 = VAR_0->e_ck;
        VAR_4 = VAR_0->e_kk;
    }


    VAR_1[3] &= 0x3f;

    VAR_8 = 4;
    if( VAR_1[3]&0x20 )
    {

        VAR_8 += VAR_1[4] + 1;
    }

    if( 188 - VAR_8 < 8 )
        return;


    FUNC_1( VAR_0, 1, VAR_3, &VAR_1[VAR_8], VAR_5 );


    VAR_12 = (VAR_2 - VAR_8) / 8;
    if( VAR_12 < 0 )
        return;

    VAR_9 = (VAR_2 - VAR_8) % 8;
    for( VAR_10 = 1; VAR_10 < VAR_12 + 1; VAR_10++ )
    {
        FUNC_0( VAR_4, VAR_5, VAR_7 );
        if( VAR_10 != VAR_12 )
        {
            FUNC_1( VAR_0, 0, VAR_3, ((void*)0), VAR_6 );
            for( VAR_11 = 0; VAR_11 < 8; VAR_11++ )
            {

                VAR_5[VAR_11] = VAR_1[VAR_8+8*VAR_10+VAR_11] ^ VAR_6[VAR_11];
            }
        }
        else
        {

            for( VAR_11 = 0; VAR_11 < 8; VAR_11++ )
            {
                VAR_5[VAR_11] = 0;
            }
        }

        for( VAR_11 = 0; VAR_11 < 8; VAR_11++ )
        {
            VAR_1[VAR_8+8*(VAR_10-1)+VAR_11] = VAR_5[VAR_11] ^ VAR_7[VAR_11];
        }
    }

    if( VAR_9 > 0 )
    {
        FUNC_1( VAR_0, 0, VAR_3, ((void*)0), VAR_6 );
        for( VAR_11 = 0; VAR_11 < VAR_9; VAR_11++ )
        {
            VAR_1[VAR_2 - VAR_9 + VAR_11] ^= VAR_6[VAR_11];
        }
    }
}
