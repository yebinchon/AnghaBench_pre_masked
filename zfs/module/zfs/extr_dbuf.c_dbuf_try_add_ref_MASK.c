
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int objset_t ;
typedef int dmu_buf_t ;
struct TYPE_5__ {scalar_t__ db_dirtycnt; int db_mtx; int db_holds; } ;
typedef TYPE_1__ dmu_buf_impl_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (int *,scalar_t__,int ,scalar_t__) ;
 TYPE_1__* FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,void*) ;

boolean_t
FUNC_5(dmu_buf_t *VAR_3, objset_t *VAR_4, uint64_t VAR_5, uint64_t VAR_6,
    void *VAR_7)
{
 dmu_buf_impl_t *VAR_8 = (dmu_buf_impl_t *)VAR_3;
 dmu_buf_impl_t *VAR_9;
 boolean_t VAR_10 = VAR_0;

 if (VAR_6 == VAR_2)
  VAR_9 = FUNC_1(VAR_4, VAR_5);
 else
  VAR_9 = FUNC_0(VAR_4, VAR_5, 0, VAR_6);

 if (VAR_9 != ((void*)0)) {
  if (VAR_8 == VAR_9 && FUNC_2(VAR_8) > VAR_8->db_dirtycnt) {
   (void) FUNC_4(&VAR_8->db_holds, VAR_7);
   VAR_10 = VAR_1;
  }
  FUNC_3(&VAR_9->db_mtx);
 }
 return (VAR_10);
}
