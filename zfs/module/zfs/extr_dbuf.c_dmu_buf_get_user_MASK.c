
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int dmu_buf_t ;
struct TYPE_3__ {void* db_user; } ;
typedef TYPE_1__ dmu_buf_impl_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

void *
FUNC_1(dmu_buf_t *VAR_1)
{
 dmu_buf_impl_t *VAR_2 = (dmu_buf_impl_t *)VAR_1;

 FUNC_0(VAR_2, VAR_0);
 return (VAR_2->db_user);
}
