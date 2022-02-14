
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int i_format; } ;
struct TYPE_8__ {TYPE_1__ audio; } ;
struct TYPE_9__ {TYPE_2__ fmt_in; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_10__ {int* p_buffer; } ;
typedef TYPE_4__ block_t ;
 int FUNC_0 () ;

__attribute__((used)) static bool FUNC_1( filter_t *VAR_0, block_t *VAR_1 )
{
    switch( VAR_0->fmt_in.audio.i_format )
    {
        case 133:
        case 130:
        case 129:
        case 128:
            return 1;
        case 132:
        case 131:
            return VAR_1->p_buffer[0] == 0x1F
                || VAR_1->p_buffer[0] == 0x7F;
        default:
            FUNC_0();
    }
}
