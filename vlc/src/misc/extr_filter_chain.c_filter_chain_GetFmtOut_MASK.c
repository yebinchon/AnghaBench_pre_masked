
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int const fmt_out; TYPE_2__* last; } ;
typedef TYPE_3__ filter_chain_t ;
typedef int es_format_t ;
struct TYPE_5__ {int const fmt_out; } ;
struct TYPE_6__ {TYPE_1__ filter; } ;



const es_format_t *FUNC_0( const filter_chain_t *VAR_0 )
{
    if( VAR_0->last != ((void*)0) )
        return &VAR_0->last->filter.fmt_out;


    return &VAR_0->fmt_out;
}
