
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int db_holds; int db_cache_link; int db_changed; int db_rwlock; int db_mtx; } ;
typedef TYPE_1__ dmu_buf_impl_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_0, void *VAR_1)
{
 dmu_buf_impl_t *VAR_2 = VAR_0;
 FUNC_3(&VAR_2->db_mtx);
 FUNC_4(&VAR_2->db_rwlock);
 FUNC_1(&VAR_2->db_changed);
 FUNC_0(!FUNC_2(&VAR_2->db_cache_link));
 FUNC_5(&VAR_2->db_holds);
}
