
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int filter_t ;
struct TYPE_4__ {int filter_cap; } ;
typedef TYPE_1__ filter_chain_t ;
typedef int es_format_t ;
typedef int config_chain_t ;


 int * FUNC_0 (TYPE_1__*,char const*,int ,int *,int const*) ;

filter_t *FUNC_1( filter_chain_t *VAR_0,
    const char *VAR_1, config_chain_t *VAR_2,
    const es_format_t *VAR_3 )
{
    return FUNC_0( VAR_0, VAR_1, VAR_0->filter_cap, VAR_2,
                                     VAR_3 );
}
