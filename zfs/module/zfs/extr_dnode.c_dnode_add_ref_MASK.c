
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dn_mtx; int dn_holds; } ;
typedef TYPE_1__ dnode_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,void*) ;
 scalar_t__ FUNC_4 (int *) ;

boolean_t
FUNC_5(dnode_t *VAR_2, void *VAR_3)
{
 FUNC_1(&VAR_2->dn_mtx);
 if (FUNC_4(&VAR_2->dn_holds)) {
  FUNC_2(&VAR_2->dn_mtx);
  return (VAR_0);
 }
 FUNC_0(1 < FUNC_3(&VAR_2->dn_holds, VAR_3));
 FUNC_2(&VAR_2->dn_mtx);
 return (VAR_1);
}
