
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef enum av1_obu_metadata_type_e { ____Placeholder_av1_obu_metadata_type_e } av1_obu_metadata_type_e ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__ const**,size_t*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__ const*,size_t,scalar_t__*) ;

__attribute__((used)) static inline enum av1_obu_metadata_type_e
        FUNC_3(const uint8_t *VAR_1, size_t VAR_2)
{
    if(!FUNC_0(&VAR_1, &VAR_2) || VAR_2 < 1)
        return VAR_0;

    uint8_t VAR_3;
    uint64_t VAR_4 = FUNC_2(VAR_1, VAR_2, &VAR_3);
    if(VAR_3 == 0 || VAR_4 > ((FUNC_1(1) << 32) - 1))
        return VAR_0;
    return (enum av1_obu_metadata_type_e) VAR_4;
}
