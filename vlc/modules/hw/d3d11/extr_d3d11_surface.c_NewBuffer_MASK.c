
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int picture_t ;
struct TYPE_5__ {TYPE_2__* sys; } ;
struct TYPE_6__ {TYPE_3__* p_sys; TYPE_1__ owner; } ;
typedef TYPE_2__ filter_t ;
struct TYPE_7__ {int * staging_pic; } ;
typedef TYPE_3__ filter_sys_t ;



__attribute__((used)) static picture_t *FUNC_0(filter_t *VAR_0)
{
    filter_t *VAR_1 = VAR_0->owner.sys;
    filter_sys_t *VAR_2 = VAR_1->p_sys;
    return VAR_2->staging_pic;
}
