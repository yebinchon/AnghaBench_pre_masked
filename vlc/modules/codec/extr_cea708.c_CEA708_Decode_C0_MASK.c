
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_10__ {int b_text_waiting; TYPE_3__* p_cw; int input_buffer; } ;
typedef TYPE_2__ cea708_t ;
typedef int cea708_input_buffer_t ;
struct TYPE_9__ {int print_direction; } ;
struct TYPE_11__ {int b_defined; int b_visible; TYPE_1__ style; int row; int col; } ;
 int FUNC_0 (int,TYPE_2__*) ;
 int FUNC_1 (int,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (char*,int) ;

__attribute__((used)) static int FUNC_13( uint8_t VAR_4, cea708_t *VAR_5 )
{
    uint8_t VAR_6, VAR_7;
    uint16_t VAR_8;
    cea708_input_buffer_t *VAR_9 = &VAR_5->input_buffer;
    int VAR_10 = VAR_0;

    switch( VAR_4 )
    {
        case 129:
            FUNC_7();
            break;
        case 133:
            FUNC_7();
            if( VAR_5->b_text_waiting )
            {
                VAR_10 |= VAR_1;
                VAR_5->b_text_waiting = 0;
            }
            break;
        case 135:
            FUNC_7();
            if( !VAR_5->p_cw->b_defined )
                break;
            FUNC_2( VAR_5->p_cw );
            VAR_5->b_text_waiting = 1;
            break;
        case 131:
            FUNC_7();
            if( !VAR_5->p_cw->b_defined )
                break;
            FUNC_4( VAR_5->p_cw );
            VAR_5->p_cw->col = 0;
            VAR_5->p_cw->row = 0;
            VAR_5->b_text_waiting = 1;
            break;
        case 134:
            FUNC_7();
            if( !VAR_5->p_cw->b_defined )
                break;
            if( VAR_5->p_cw->style.print_direction <= VAR_3 )
            {
                FUNC_3( VAR_5->p_cw );
                if( VAR_5->p_cw->b_visible )
                    VAR_10 |= VAR_1;
            }
            break;
        case 130:
            FUNC_7();
            if( !VAR_5->p_cw->b_defined )
                break;
            if( VAR_5->p_cw->style.print_direction > VAR_3 )
            {
                FUNC_3( VAR_5->p_cw );
                if( VAR_5->p_cw->b_visible )
                    VAR_10 |= VAR_1;
            }
            break;
        case 132:
            if( FUNC_11( VAR_9 ) >= 2 )
            {
                VAR_6 = FUNC_10( VAR_9, 1 );

                if( VAR_6 < 0x20 )
                {
                    if( VAR_6 > 0x17 )
                        VAR_7 = 3;
                    else if( VAR_6 > 0x0f )
                        VAR_7 = 2;
                    else if( VAR_6 > 0x07 )
                        VAR_7 = 1;
                    else
                        VAR_7 = 0;
                    if( FUNC_11( VAR_9 ) < 2 + VAR_7 )
                        return VAR_2;
                    FUNC_7();
                    FUNC_6(1 + VAR_7);
                }

                else if( VAR_6 > 0x7f && VAR_6 < 0xa0 )
                {
                    if( VAR_6 > 0x87 )
                        VAR_7 = 5;
                    else
                        VAR_7 = 4;
                    if( FUNC_11( VAR_9 ) < 2 + VAR_7 )
                        return VAR_2;
                    FUNC_7();
                    FUNC_6(1 + VAR_7);
                }
                else
                {
                    FUNC_7();
                    VAR_6 = FUNC_9( VAR_9 );
                    if( VAR_5->p_cw->b_defined )
                        VAR_10 |= FUNC_0( VAR_6, VAR_5 );
                }
            }
            else return VAR_2;
            break;
        case 128:
            FUNC_8(2);
            VAR_8 = FUNC_9( VAR_9 ) << 8;
            VAR_8 |= FUNC_9( VAR_9 );
            VAR_10 |= FUNC_1( VAR_8, VAR_5 );
            FUNC_5(FUNC_12("[P16 %x]", VAR_8));
            break;
        default:
            FUNC_7();
            FUNC_5(FUNC_12("[UNK %2.2x]", VAR_4));
            break;
    }
    FUNC_5(FUNC_12("[C0 %x]", VAR_4));
    return VAR_10;
}
