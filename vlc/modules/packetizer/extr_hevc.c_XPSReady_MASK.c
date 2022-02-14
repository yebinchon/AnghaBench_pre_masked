
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int hevc_sequence_parameter_set_t ;
typedef int hevc_picture_parameter_set_t ;
struct TYPE_9__ {TYPE_1__* rg_vps; TYPE_3__* rg_sps; TYPE_2__* rg_pps; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_8__ {int * p_decoded; } ;
struct TYPE_7__ {int * p_decoded; } ;
struct TYPE_6__ {scalar_t__ p_decoded; } ;


 unsigned int VAR_0 ;
 size_t FUNC_0 (int const*) ;
 size_t FUNC_1 (int const*) ;

__attribute__((used)) static bool FUNC_2(decoder_sys_t *VAR_1)
{
    for(unsigned VAR_2=0;VAR_2<=VAR_0; VAR_2++)
    {
        const hevc_picture_parameter_set_t *VAR_3 = VAR_1->rg_pps[VAR_2].p_decoded;
        if (VAR_3)
        {
            uint8_t VAR_4 = FUNC_0(VAR_3);
            const hevc_sequence_parameter_set_t *VAR_5 = VAR_1->rg_sps[VAR_4].p_decoded;
            if(VAR_5)
            {
                uint8_t VAR_6 = FUNC_1(VAR_5);
                if(VAR_1->rg_vps[VAR_6].p_decoded)
                    return 1;
            }
        }
    }
    return 0;
}
