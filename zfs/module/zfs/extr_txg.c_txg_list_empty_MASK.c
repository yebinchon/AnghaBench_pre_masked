
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int tl_lock; } ;
typedef TYPE_1__ txg_list_t ;
typedef int boolean_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;

boolean_t
FUNC_3(txg_list_t *VAR_0, uint64_t VAR_1)
{
 FUNC_0(&VAR_0->tl_lock);
 boolean_t VAR_2 = FUNC_2(VAR_0, VAR_1);
 FUNC_1(&VAR_0->tl_lock);

 return (VAR_2);
}
