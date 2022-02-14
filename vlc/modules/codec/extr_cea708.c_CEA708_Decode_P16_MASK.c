
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {TYPE_2__* p_cw; int b_text_waiting; } ;
typedef TYPE_1__ cea708_t ;
struct TYPE_5__ {int b_visible; int b_defined; } ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_1( uint16_t VAR_1, cea708_t *VAR_2 )
{
    if( !VAR_2->p_cw->b_defined )
        return VAR_0;

    uint8_t VAR_3[4] = { '?', 0, 0, 0 };


    if( VAR_1 <= 0x7F )
    {
        VAR_3[0] = VAR_1;
    }
    else if( VAR_1 <= 0x7FF )
    {
        VAR_3[0] = 0xC0 | (VAR_1 >> 6);
        VAR_3[1] = 0x80 | (VAR_1 & 0x3F);
    }
    else
    {
        VAR_3[0] = 0xE0 | (VAR_1 >> 12);
        VAR_3[1] = 0x80 | ((VAR_1 >> 6) & 0x3F);
        VAR_3[2] = 0x80 | (VAR_1 & 0x3F);
    }

    FUNC_0( VAR_3, VAR_2->p_cw );

    VAR_2->b_text_waiting |= VAR_2->p_cw->b_visible;

    return VAR_0;
}
