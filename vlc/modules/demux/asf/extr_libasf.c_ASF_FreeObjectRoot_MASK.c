
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_7__ {TYPE_2__* p_next; } ;
struct TYPE_8__ {TYPE_1__ common; } ;
typedef TYPE_2__ asf_object_t ;
struct TYPE_9__ {TYPE_2__* p_first; } ;
typedef TYPE_3__ asf_object_root_t ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2( stream_t *VAR_0, asf_object_root_t *VAR_1 )
{
    asf_object_t *VAR_2;

    VAR_2 = VAR_1->p_first;
    while( VAR_2 )
    {
        asf_object_t *VAR_3;
        VAR_3 = VAR_2->common.p_next;
        FUNC_0( VAR_0, VAR_2 );
        VAR_2 = VAR_3;
    }
    FUNC_1( VAR_1 );
}
