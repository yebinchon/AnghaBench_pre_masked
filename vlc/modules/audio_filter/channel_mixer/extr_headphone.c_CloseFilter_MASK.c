
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_5__ {struct TYPE_5__* p_atomic_operations; struct TYPE_5__* p_overflow_buffer; } ;
typedef TYPE_2__ filter_sys_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1( vlc_object_t *VAR_0 )
{
    filter_t *VAR_1 = (filter_t *)VAR_0;
    filter_sys_t *VAR_2 = VAR_1->p_sys;

    FUNC_0( VAR_2->p_overflow_buffer );
    FUNC_0( VAR_2->p_atomic_operations );
    FUNC_0( VAR_2 );
}
