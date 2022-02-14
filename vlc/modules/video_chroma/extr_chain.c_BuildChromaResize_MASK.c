
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int fmt_in; int fmt_out; } ;
typedef TYPE_1__ filter_t ;
typedef int es_format_t ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_5( filter_t *VAR_2 )
{
    es_format_t VAR_3;
    int VAR_4;


    FUNC_4( VAR_2, "Trying to build resize+chroma" );
    FUNC_2( &VAR_3, &VAR_2->fmt_in, &VAR_2->fmt_out );
    VAR_4 = FUNC_1( VAR_2, &VAR_3 );
    FUNC_3( &VAR_3 );

    if( VAR_4 == VAR_1 )
        return VAR_1;


    FUNC_4( VAR_2, "Trying to build chroma+resize" );
    FUNC_2( &VAR_3, &VAR_2->fmt_out, &VAR_2->fmt_in );
    VAR_4 = FUNC_0( VAR_2, &VAR_3 );
    FUNC_3( &VAR_3 );
    if( VAR_4 == VAR_1 )
        return VAR_1;

    return VAR_0;
}
