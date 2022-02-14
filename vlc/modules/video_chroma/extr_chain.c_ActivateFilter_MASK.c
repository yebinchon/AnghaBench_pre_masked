
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {int * psz_name; int b_allow_fmt_out_change; } ;
typedef TYPE_1__ filter_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5( vlc_object_t *VAR_3 )
{
    filter_t *VAR_4 = (filter_t *)VAR_3;

    if( !VAR_4->b_allow_fmt_out_change || VAR_4->psz_name == ((void*)0) )
        return VAR_1;

    if( FUNC_3( FUNC_4(VAR_4), "chain-filter-level" ) != 0 )
        return VAR_1;

    FUNC_1( VAR_4, "chain-filter-level", VAR_2 );
    int VAR_5 = FUNC_0( VAR_4, VAR_0 );
    FUNC_2( VAR_4, "chain-filter-level" );

    return VAR_5;
}
