
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_3__ {int * os_dirty_dnodes; } ;
typedef TYPE_1__ objset_t ;
typedef int boolean_t ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;

boolean_t
FUNC_1(objset_t *VAR_1, uint64_t VAR_2)
{
 return (!FUNC_0(VAR_1->os_dirty_dnodes[VAR_2 & VAR_0]));
}
