
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int p_extra; scalar_t__ i_extra; } ;
typedef TYPE_1__ mux_extradata_builder_t ;
typedef enum av1_obu_type_e { ____Placeholder_av1_obu_type_e } av1_obu_type_e ;
typedef int av1_OBU_sequence_header_t ;
typedef int AV1_OBU_iterator_ctx_t ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int const**,size_t*) ;
 int FUNC_2 (int *,int const*,size_t) ;
 int * FUNC_3 (int const*,size_t) ;
 scalar_t__ FUNC_4 (int *,int *,int,int const**,size_t*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(mux_extradata_builder_t *VAR_1,
                                       const uint8_t *VAR_2, size_t VAR_3)
{
    if(VAR_1->i_extra)
        return;

    AV1_OBU_iterator_ctx_t VAR_4;
    FUNC_2(&VAR_4, VAR_2, VAR_3);
    const uint8_t *VAR_5; size_t VAR_6;
    while(FUNC_1(&VAR_4, &VAR_5, &VAR_6))
    {
        enum av1_obu_type_e VAR_7 = FUNC_0(VAR_5);
        if(VAR_7 != VAR_0)
            continue;
        av1_OBU_sequence_header_t *VAR_8 = FUNC_3(VAR_5, VAR_6);
        if(VAR_8)
        {
            VAR_1->i_extra = FUNC_4(&VAR_1->p_extra, VAR_8,
                                                               1, (const uint8_t **)&VAR_5, &VAR_6);
            FUNC_5(VAR_8);
        }
        break;
    }
}
