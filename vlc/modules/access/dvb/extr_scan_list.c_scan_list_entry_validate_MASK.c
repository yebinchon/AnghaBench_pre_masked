
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int delivery; int i_bw; int i_freq; int i_rate; } ;
typedef TYPE_1__ scan_list_entry_t ;
__attribute__((used)) static bool FUNC_0( const scan_list_entry_t *VAR_0 )
{
    switch( VAR_0->delivery )
    {
        case 133:
        case 132:
        case 134:
            return VAR_0->i_freq && VAR_0->i_rate;

        case 131:
        case 130:
        case 129:
            return VAR_0->i_freq && VAR_0->i_bw;

        case 128:
        default:
            break;
    }
    return 0;
}
