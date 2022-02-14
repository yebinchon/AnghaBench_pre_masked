
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fmt_out; int fmt_in; } ;
typedef TYPE_1__ filter_chain_t ;
typedef int es_format_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4( filter_chain_t *VAR_0, const es_format_t *VAR_1,
                         const es_format_t *VAR_2 )
{
    FUNC_3( VAR_0 );

    FUNC_0(VAR_1 != ((void*)0));
    FUNC_1( &VAR_0->fmt_in );
    FUNC_2( &VAR_0->fmt_in, VAR_1 );

    FUNC_0(VAR_2 != ((void*)0));
    FUNC_1( &VAR_0->fmt_out );
    FUNC_2( &VAR_0->fmt_out, VAR_2 );
}
