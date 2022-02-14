
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int (* pf_feed ) (TYPE_2__*,int const*,size_t) ;} ;
struct TYPE_6__ {TYPE_1__ cb; } ;
typedef TYPE_2__ mux_extradata_builder_t ;


 int FUNC_0 (TYPE_2__*,int const*,size_t) ;

void FUNC_1(mux_extradata_builder_t *VAR_0,
                                const uint8_t *VAR_1, size_t VAR_2)
{
    VAR_0->cb.pf_feed(VAR_0, VAR_1, VAR_2);
}
