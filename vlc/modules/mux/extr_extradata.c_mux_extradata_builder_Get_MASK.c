
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t i_extra; int * p_extra; } ;
typedef TYPE_1__ mux_extradata_builder_t ;



size_t FUNC_0(mux_extradata_builder_t *VAR_0, const uint8_t **VAR_1)
{
    *VAR_1 = VAR_0->p_extra;
    return VAR_0->i_extra;
}
