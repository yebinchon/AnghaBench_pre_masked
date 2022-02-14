
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
typedef int spu_t ;
struct TYPE_4__ {int * sub; int * sys; } ;
struct TYPE_5__ {TYPE_1__ owner; } ;
typedef TYPE_2__ filter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(filter_t *VAR_3, void *VAR_4)
{
    spu_t *VAR_5 = VAR_4;
    ssize_t *VAR_6 = FUNC_0(sizeof (ssize_t));
    if (FUNC_2(VAR_6 == ((void*)0)))
        return VAR_0;

    *VAR_6 = FUNC_1(VAR_5);
    VAR_3->owner.sys = VAR_6;
    VAR_3->owner.sub = &VAR_2;
    return VAR_1;
}
