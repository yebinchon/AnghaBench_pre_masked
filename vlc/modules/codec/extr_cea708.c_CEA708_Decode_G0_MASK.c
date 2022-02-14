
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_2__* p_cw; int b_text_waiting; int input_buffer; } ;
typedef TYPE_1__ cea708_t ;
typedef int cea708_input_buffer_t ;
struct TYPE_6__ {int b_visible; int b_defined; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int*,TYPE_2__*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3( uint8_t VAR_2, cea708_t *VAR_3 )
{
    cea708_input_buffer_t *VAR_4 = &VAR_3->input_buffer;
    FUNC_2();
    int VAR_5 = VAR_0;

    if( !VAR_3->p_cw->b_defined )
        return VAR_5;

    uint8_t VAR_6[4] = {VAR_2,0x00,0x00,0x00};

    if(VAR_2 == 0x7F)
    {
        VAR_6[0] = 0xe2;
        VAR_6[1] = 0x99;
        VAR_6[2] = 0xaa;
    }

    FUNC_1( VAR_6, VAR_3->p_cw );

    if( VAR_2 == 0x20 &&
        VAR_3->b_text_waiting &&
        FUNC_0( VAR_3->p_cw ) )
    {
        VAR_5 |= VAR_1;
    }


    VAR_3->b_text_waiting |= VAR_3->p_cw->b_visible;

    return VAR_5;
}
