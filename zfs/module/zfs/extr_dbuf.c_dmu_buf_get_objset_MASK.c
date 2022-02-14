
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int objset_t ;
typedef int dmu_buf_t ;
struct TYPE_2__ {int * db_objset; } ;
typedef TYPE_1__ dmu_buf_impl_t ;



objset_t *
FUNC_0(dmu_buf_t *VAR_0)
{
 dmu_buf_impl_t *VAR_1 = (dmu_buf_impl_t *)VAR_0;
 return (VAR_1->db_objset);
}
