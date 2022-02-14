
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dn_struct_rwlock; int dn_have_spill; TYPE_1__* dn_objset; } ;
typedef TYPE_2__ dnode_t ;
typedef int dmu_buf_t ;
typedef int dmu_buf_impl_t ;
struct TYPE_5__ {int os_spa; } ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (TYPE_2__*,int,void*,int **) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;

int
FUNC_8(dmu_buf_t *VAR_6, void *VAR_7, dmu_buf_t **VAR_8)
{
 dmu_buf_impl_t *VAR_9 = (dmu_buf_impl_t *)VAR_6;
 dnode_t *VAR_10;
 int VAR_11;

 FUNC_1(VAR_9);
 VAR_10 = FUNC_0(VAR_9);

 if (FUNC_7(VAR_10->dn_objset->os_spa) < VAR_5) {
  VAR_11 = FUNC_3(VAR_2);
 } else {
  FUNC_5(&VAR_10->dn_struct_rwlock, VAR_4);

  if (!VAR_10->dn_have_spill) {
   VAR_11 = FUNC_3(VAR_3);
  } else {
   VAR_11 = FUNC_4(VAR_10,
       VAR_1 | VAR_0, VAR_7, VAR_8);
  }

  FUNC_6(&VAR_10->dn_struct_rwlock);
 }

 FUNC_2(VAR_9);
 return (VAR_11);
}
