
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {TYPE_2__* p_cw; int b_text_waiting; int input_buffer; } ;
typedef TYPE_1__ cea708_t ;
typedef int cea708_input_buffer_t ;
struct TYPE_5__ {int b_visible; int b_defined; } ;


 int VAR_0 ;
 int FUNC_0 (int*,TYPE_2__*) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2( uint8_t VAR_1, cea708_t *VAR_2 )
{
    cea708_input_buffer_t *VAR_3 = &VAR_2->input_buffer;
    FUNC_1();

    if( !VAR_2->p_cw->b_defined )
        return VAR_0;

    uint8_t VAR_4[4] = {0xc0 | (VAR_1 & 0xc0) >> 6,
                       0x80 | (VAR_1 & 0x3f),
                       0, 0};

    FUNC_0( VAR_4, VAR_2->p_cw );
    VAR_2->b_text_waiting |= VAR_2->p_cw->b_visible;

    return VAR_0;
}
