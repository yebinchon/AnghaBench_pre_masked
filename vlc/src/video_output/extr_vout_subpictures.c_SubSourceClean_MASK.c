
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
typedef int spu_t ;
struct TYPE_4__ {int * sys; } ;
struct TYPE_5__ {TYPE_1__ owner; } ;
typedef TYPE_2__ filter_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(filter_t *VAR_1, void *VAR_2)
{
    spu_t *VAR_3 = VAR_2;
    ssize_t *VAR_4 = VAR_1->owner.sys;

    FUNC_1(VAR_3, *VAR_4);
    FUNC_0(VAR_4);
    return VAR_0;
}
