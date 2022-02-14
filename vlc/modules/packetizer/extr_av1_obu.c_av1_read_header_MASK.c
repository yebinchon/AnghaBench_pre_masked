
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct av1_header_info_s {void* spatial_id; void* temporal_id; void* obu_type; } ;
typedef scalar_t__ obu_u1_t ;
typedef int bs_t ;


 void* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static bool FUNC_4(bs_t *VAR_0, struct av1_header_info_s *VAR_1)
{
    if(FUNC_1(VAR_0))
        return 0;
    VAR_1->obu_type = FUNC_0(VAR_0, 4);
    const obu_u1_t VAR_2 = FUNC_1(VAR_0);
    const obu_u1_t VAR_3 = FUNC_1(VAR_0);
    if(FUNC_1(VAR_0))
        return 0;
    if(VAR_2)
    {
        if(FUNC_2(VAR_0) < 8)
            return 0;
        VAR_1->temporal_id = FUNC_0(VAR_0, 3);
        VAR_1->spatial_id = FUNC_0(VAR_0, 2);
        FUNC_3(VAR_0, 3);
    }
    if(VAR_3)
    {
        for (uint8_t VAR_4 = 0; VAR_4 < 8; VAR_4++)
        {
            if(FUNC_2(VAR_0) < 8)
                return 0;
            uint8_t VAR_5 = FUNC_0(VAR_0, 8);
            if (!(VAR_5 & 0x80))
                break;
            if(VAR_4 == 7)
                return 0;
        }
    }
    return 1;
}
