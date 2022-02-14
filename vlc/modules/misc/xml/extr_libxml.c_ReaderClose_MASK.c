
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ xml_reader_t ;
struct TYPE_5__ {struct TYPE_5__* node; int xml; } ;
typedef TYPE_2__ xml_reader_sys_t ;
typedef int vlc_object_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5( vlc_object_t *VAR_1 )
{
    xml_reader_t *VAR_2 = (xml_reader_t *)VAR_1;
    xml_reader_sys_t *VAR_3 = VAR_2->p_sys;

    FUNC_4( VAR_3->xml );





    FUNC_0( VAR_3->node );
    FUNC_0( VAR_3 );
}
