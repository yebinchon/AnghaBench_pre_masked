
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_9__ {int dn_mtx; int dn_holds; TYPE_3__* dn_handle; TYPE_4__* dn_dbuf; } ;
typedef TYPE_2__ dnode_t ;
struct TYPE_8__ {scalar_t__ zr_owner; } ;
struct TYPE_10__ {TYPE_1__ dnh_zrlock; } ;
typedef TYPE_3__ dnode_handle_t ;
struct TYPE_11__ {int db_mtx; } ;
typedef TYPE_4__ dmu_buf_impl_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,void*) ;

void
FUNC_5(dnode_t *VAR_1, void *VAR_2, boolean_t VAR_3)
{
 uint64_t VAR_4;

 dmu_buf_impl_t *VAR_5 = VAR_1->dn_dbuf;
 dnode_handle_t *VAR_6 = VAR_1->dn_handle;

 VAR_4 = FUNC_4(&VAR_1->dn_holds, VAR_2);
 FUNC_3(&VAR_1->dn_mtx);
 FUNC_0(VAR_4 > 0 || VAR_6->dnh_zrlock.zr_owner != VAR_0);


 if (VAR_4 == 0 && VAR_5 != ((void*)0)) {
  FUNC_2(&VAR_5->db_mtx);
  FUNC_1(VAR_5, VAR_6, VAR_3);
 }
}
