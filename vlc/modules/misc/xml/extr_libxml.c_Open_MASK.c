
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pf_catalog_add; int pf_catalog_load; } ;
typedef TYPE_1__ xml_t ;
typedef int vlc_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4( vlc_object_t *VAR_6 )
{
    xml_t *VAR_7 = (xml_t *)VAR_6;

    if( !FUNC_2( VAR_4 ) )
        return VAR_2;

    FUNC_0( &VAR_5 );
    FUNC_3();
    FUNC_1( &VAR_5 );

    VAR_7->pf_catalog_load = VAR_1;
    VAR_7->pf_catalog_add = VAR_0;

    return VAR_3;
}
