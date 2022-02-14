
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int b_interlace; scalar_t__ i_res; int i_pps; int * p_pps; int i_sps; int * p_sps; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(uint16_t VAR_2, bool VAR_3,
                               const uint8_t **VAR_4, uint8_t *VAR_5,
                               const uint8_t **VAR_6, uint8_t *VAR_7)
{
    for(int VAR_8=0; VAR_8<VAR_0; VAR_8++)
    {
        if(VAR_1[VAR_8].b_interlace == VAR_3 && VAR_1[VAR_8].i_res == VAR_2)
        {
            *VAR_4 = VAR_1[VAR_8].p_sps;
            *VAR_5 = VAR_1[VAR_8].i_sps;
            *VAR_6 = VAR_1[VAR_8].p_pps;
            *VAR_7 = VAR_1[VAR_8].i_pps;
            return 1;
        }
    }
    return 0;
}
