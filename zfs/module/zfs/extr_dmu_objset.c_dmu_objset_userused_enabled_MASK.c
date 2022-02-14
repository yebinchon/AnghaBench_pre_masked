
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* os_phys; int os_spa; } ;
typedef TYPE_2__ objset_t ;
typedef int boolean_t ;
struct TYPE_5__ {size_t os_type; } ;


 int * FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int ** VAR_1 ;

boolean_t
FUNC_2(objset_t *VAR_2)
{
 return (FUNC_1(VAR_2->os_spa) >= VAR_0 &&
     VAR_1[VAR_2->os_phys->os_type] != ((void*)0) &&
     FUNC_0(VAR_2) != ((void*)0));
}
