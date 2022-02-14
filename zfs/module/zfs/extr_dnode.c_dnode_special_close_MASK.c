
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* dn_dbuf; int dn_holds; } ;
typedef TYPE_2__ dnode_t ;
struct TYPE_8__ {TYPE_2__* dnh_dnode; int dnh_zrlock; } ;
typedef TYPE_3__ dnode_handle_t ;
struct TYPE_6__ {int db; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void
FUNC_7(dnode_handle_t *VAR_0)
{
 dnode_t *VAR_1 = VAR_0->dnh_dnode;







 while (FUNC_4(&VAR_1->dn_holds) > 0)
  FUNC_1(1);
 FUNC_0(VAR_1->dn_dbuf == ((void*)0) ||
     FUNC_2(&VAR_1->dn_dbuf->db) == ((void*)0));
 FUNC_5(&VAR_0->dnh_zrlock);
 FUNC_3(VAR_1);
 FUNC_6(&VAR_0->dnh_zrlock);
 VAR_0->dnh_dnode = ((void*)0);
}
