
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int asf_object_t ;
struct TYPE_3__ {size_t i_count; TYPE_2__* name; TYPE_2__* marker; } ;
typedef TYPE_1__ asf_object_marker_t ;
struct TYPE_4__ {struct TYPE_4__* p_marker_description; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1( asf_object_t *VAR_0)
{
    asf_object_marker_t *VAR_1 = (asf_object_marker_t *)VAR_0;

    for( uint32_t VAR_2 = 0; VAR_2 < VAR_1->i_count; VAR_2++ )
    {
        FUNC_0( VAR_1->marker[VAR_2].p_marker_description );
    }
    FUNC_0( VAR_1->marker );
    FUNC_0( VAR_1->name );
}
