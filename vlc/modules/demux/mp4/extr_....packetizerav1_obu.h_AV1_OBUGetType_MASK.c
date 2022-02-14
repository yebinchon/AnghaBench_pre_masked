
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum av1_obu_type_e { ____Placeholder_av1_obu_type_e } av1_obu_type_e ;



__attribute__((used)) static inline enum av1_obu_type_e FUNC_0(const uint8_t *VAR_0)
{
    return (enum av1_obu_type_e)((VAR_0[0] >> 3) & 0x0F);
}
