
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int** pi_active_national_set; } ;
typedef TYPE_1__ decoder_sys_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4( char * VAR_0, int VAR_1,
                           decoder_sys_t *VAR_2, int VAR_3,
                           const uint8_t * VAR_4, int VAR_5 )
{
    char VAR_6[7];
    char * VAR_7 = VAR_0;

    for ( int VAR_8 = 0; VAR_8 < VAR_5; VAR_8++ )
    {
        int VAR_9 = FUNC_0( VAR_4[VAR_8] ) & 0x7f;
        uint16_t VAR_10 = 32;
        size_t VAR_11;

        switch ( VAR_9 )
        {

        case 0x23:
            VAR_10 = VAR_2->pi_active_national_set[VAR_3][0];
            break;
        case 0x24:
            VAR_10 = VAR_2->pi_active_national_set[VAR_3][1];
            break;
        case 0x40:
            VAR_10 = VAR_2->pi_active_national_set[VAR_3][2];
            break;
        case 0x5b:
            VAR_10 = VAR_2->pi_active_national_set[VAR_3][3];
            break;
        case 0x5c:
            VAR_10 = VAR_2->pi_active_national_set[VAR_3][4];
            break;
        case 0x5d:
            VAR_10 = VAR_2->pi_active_national_set[VAR_3][5];
            break;
        case 0x5e:
            VAR_10 = VAR_2->pi_active_national_set[VAR_3][6];
            break;
        case 0x5f:
            VAR_10 = VAR_2->pi_active_national_set[VAR_3][7];
            break;
        case 0x60:
            VAR_10 = VAR_2->pi_active_national_set[VAR_3][8];
            break;
        case 0x7b:
            VAR_10 = VAR_2->pi_active_national_set[VAR_3][9];
            break;
        case 0x7c:
            VAR_10 = VAR_2->pi_active_national_set[VAR_3][10];
            break;
        case 0x7d:
            VAR_10 = VAR_2->pi_active_national_set[VAR_3][11];
            break;
        case 0x7e:
            VAR_10 = VAR_2->pi_active_national_set[VAR_3][12];
            break;


        case 0x0d:

            while ( VAR_8 + 1 < VAR_5 && (FUNC_0( VAR_4[VAR_8+1] ) & 0x7f) != 0x0b )
                VAR_8++;
            VAR_8 += 2;
            break;


        default:

            if ( VAR_9 >= 0x08 && VAR_9 <= 0x0f )
            {
                VAR_10 = VAR_2->pi_active_national_set[VAR_3][13 + VAR_9 - 8];
                break;
            }


            if ( VAR_9 > 32 && VAR_9 < 0x7f )
                VAR_10 = VAR_9;
        }


        if ( VAR_10 == 0 )
            VAR_10 = 32;


        FUNC_3( VAR_6, VAR_10 );
        VAR_11 = FUNC_2( VAR_6 );
        if ( VAR_7 + VAR_11 < VAR_0 + VAR_1 - 1 )
        {
            FUNC_1(VAR_7, VAR_6);
            VAR_7 += VAR_11;
        }


    }

    *VAR_7++ = 0;
}
