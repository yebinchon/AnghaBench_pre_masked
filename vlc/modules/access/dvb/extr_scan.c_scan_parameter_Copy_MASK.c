
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ psz_scanlist_file; } ;
typedef TYPE_1__ scan_parameter_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2( const scan_parameter_t *VAR_0, scan_parameter_t *VAR_1 )
{
    FUNC_0( VAR_1 );
    *VAR_1 = *VAR_0;
    if( VAR_0->psz_scanlist_file )
        VAR_1->psz_scanlist_file = FUNC_1( VAR_0->psz_scanlist_file );
}
