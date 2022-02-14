
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int conv_cap; } ;
typedef TYPE_1__ filter_chain_t ;
typedef int es_format_t ;


 int * FUNC_0 (TYPE_1__*,int *,int ,int *,int const*) ;

int FUNC_1( filter_chain_t *VAR_0,
    const es_format_t *VAR_1 )
{
    return FUNC_0( VAR_0, ((void*)0), VAR_0->conv_cap, ((void*)0),
                                     VAR_1 ) != ((void*)0) ? 0 : -1;
}
