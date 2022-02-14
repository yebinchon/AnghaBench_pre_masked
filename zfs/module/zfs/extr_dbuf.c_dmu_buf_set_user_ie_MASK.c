
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int dmu_buf_user_t ;
typedef int dmu_buf_t ;
struct TYPE_2__ {int db_user_immediate_evict; } ;
typedef TYPE_1__ dmu_buf_impl_t ;


 int VAR_0 ;
 void* FUNC_0 (int *,int *) ;

void *
FUNC_1(dmu_buf_t *VAR_1, dmu_buf_user_t *VAR_2)
{
 dmu_buf_impl_t *VAR_3 = (dmu_buf_impl_t *)VAR_1;

 VAR_3->db_user_immediate_evict = VAR_0;
 return (FUNC_0(VAR_1, VAR_2));
}
