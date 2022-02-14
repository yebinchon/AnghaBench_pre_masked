
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int b_allow_fmt_out_change; char const* filter_cap; char const* conv_cap; int fmt_out; int fmt_in; int * last; int * first; int * obj; } ;
typedef TYPE_1__ filter_chain_t ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int ) ;
 TYPE_1__* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static filter_chain_t *FUNC_4( vlc_object_t *VAR_0,
    const char *VAR_1, const char *VAR_2, bool VAR_3,
    enum es_format_category_e VAR_4 )
{
    FUNC_0( VAR_0 != ((void*)0) );
    FUNC_0( VAR_1 != ((void*)0) );

    filter_chain_t *VAR_5 = FUNC_2( sizeof (*VAR_5) );
    if( FUNC_3(VAR_5 == ((void*)0)) )
        return ((void*)0);

    VAR_5->obj = VAR_0;
    VAR_5->first = ((void*)0);
    VAR_5->last = ((void*)0);
    FUNC_1( &VAR_5->fmt_in, VAR_4, 0 );
    FUNC_1( &VAR_5->fmt_out, VAR_4, 0 );
    VAR_5->b_allow_fmt_out_change = VAR_3;
    VAR_5->filter_cap = VAR_1;
    VAR_5->conv_cap = VAR_2;
    return VAR_5;
}
