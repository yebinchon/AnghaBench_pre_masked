
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int i_channel; } ;
typedef TYPE_2__ subpicture_t ;
typedef int ssize_t ;
struct TYPE_7__ {scalar_t__ sys; } ;
struct TYPE_9__ {TYPE_1__ owner; } ;
typedef TYPE_3__ filter_t ;


 TYPE_2__* FUNC_0 (int *) ;

__attribute__((used)) static subpicture_t *FUNC_1(filter_t *VAR_0)
{
    ssize_t VAR_1 = *(ssize_t *)VAR_0->owner.sys;

    subpicture_t *VAR_2 = FUNC_0(((void*)0));
    if (VAR_2)
        VAR_2->i_channel = VAR_1;
    return VAR_2;
}
