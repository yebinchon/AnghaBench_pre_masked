
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int p_module; } ;
typedef TYPE_1__ xml_t ;
typedef int vlc_object_t ;


 int FUNC_0 (TYPE_1__*,char*,int *,int) ;
 int FUNC_1 (int *,char*) ;
 TYPE_1__* FUNC_2 (int *,int,char*) ;
 int FUNC_3 (TYPE_1__*) ;

xml_t *FUNC_4( vlc_object_t *VAR_0 )
{
    xml_t *VAR_1;

    VAR_1 = FUNC_2( VAR_0, sizeof( *VAR_1 ), "xml" );

    VAR_1->p_module = FUNC_0( VAR_1, "xml", ((void*)0), 0 );
    if( !VAR_1->p_module )
    {
        FUNC_3(VAR_1);
        FUNC_1( VAR_0, "XML provider not found" );
        return ((void*)0);
    }

    return VAR_1;
}
