
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int b_bitstream_restriction_flag; int i_max_num_reorder_frames; } ;
struct TYPE_6__ {int i_profile; int i_constraint_set_flags; TYPE_1__ vui; } ;
typedef TYPE_2__ h264_sequence_parameter_set_t ;


 int FUNC_0 (int) ;







 int FUNC_1 (TYPE_2__ const*) ;

bool FUNC_2( const h264_sequence_parameter_set_t *VAR_0,
                          uint8_t *VAR_1, unsigned *VAR_2 )
{
    uint8_t VAR_3 = VAR_0->vui.i_max_num_reorder_frames;
    if( !VAR_0->vui.b_bitstream_restriction_flag )
    {
        switch( VAR_0->i_profile )
        {
            case 134:
                VAR_3 = 0;
                break;
            case 133:
            case 128:
            case 132:
            case 131:
            case 130:
            case 129:
                if( VAR_0->i_constraint_set_flags & FUNC_0(3) )
                {
                    VAR_3 = 0;
                    break;
                }

            default:
                VAR_3 = FUNC_1( VAR_0 );
                break;
        }
    }

    *VAR_1 = VAR_3;
    *VAR_2 = 0;

    return 1;
}
