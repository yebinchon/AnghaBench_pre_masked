
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_6__ {int context; } ;
typedef TYPE_2__ filter_sys_t ;


 int * FUNC_0 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static picture_t *FUNC_1(filter_t *VAR_0, picture_t *VAR_1)
{
    filter_sys_t *VAR_2 = VAR_0->p_sys;
    return FUNC_0( VAR_0, &VAR_2->context, VAR_1 );
}
