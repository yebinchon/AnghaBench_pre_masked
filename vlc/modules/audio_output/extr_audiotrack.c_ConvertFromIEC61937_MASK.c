
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int i_buffer; int * p_buffer; } ;
typedef TYPE_1__ block_t ;
typedef int audio_output_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3( audio_output_t *VAR_0, block_t *VAR_1 )
{
    FUNC_1( VAR_0 );
    uint8_t VAR_2;

    if( VAR_1->i_buffer < 6 )
        return -1;

    switch( FUNC_0( &VAR_1->p_buffer[4] ) & 0xFF )
    {
        case 0x01:
            VAR_2 = 8;
            break;
        case 0x15:
            VAR_2 = 1;
            break;
        case 0x0B:
        case 0x0C:
        case 0x0D:
            VAR_2 = 8;
            break;
        case 0x11:
            VAR_2 = 1;
            break;
        default:
            FUNC_2();
    }
    uint16_t VAR_3 = FUNC_0( &VAR_1->p_buffer[6] );
    if( VAR_3 == 0 )
        return -1;

    VAR_3 /= VAR_2;
    if( VAR_3 > VAR_1->i_buffer - 8 )
        return -1;

    VAR_1->p_buffer += 8;
    VAR_1->i_buffer = VAR_3;

    return 0;
}
