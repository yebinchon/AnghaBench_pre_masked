
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int addons_manager_t ;
typedef int addon_uuid_t ;
typedef int addon_entry_t ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int const) ;

int FUNC_3( addons_manager_t *VAR_1, const addon_uuid_t VAR_2 )
{
    addon_entry_t *VAR_3 = FUNC_2( VAR_1, VAR_2 );
    if ( ! VAR_3 ) return VAR_0;
    int VAR_4 = FUNC_0( VAR_1, VAR_3 );
    FUNC_1( VAR_3 );
    return VAR_4;
}
