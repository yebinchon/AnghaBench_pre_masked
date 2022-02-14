
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int index_entry; } ;
struct TYPE_4__ {TYPE_2__ index; } ;
typedef TYPE_1__ asf_object_t ;
typedef TYPE_2__ asf_object_index_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( asf_object_t *VAR_0 )
{
    asf_object_index_t *VAR_1 = &VAR_0->index;

    FUNC_0( VAR_1->index_entry );
}
