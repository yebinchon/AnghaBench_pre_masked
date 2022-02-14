
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int dbu_tqent; int * dbu_evict_func_async; int (* dbu_evict_func_sync ) (TYPE_1__*) ;int ** dbu_clear_on_evict_dbufp; } ;
typedef TYPE_1__ dmu_buf_user_t ;
struct TYPE_8__ {TYPE_1__* db_user; int db_mtx; } ;
typedef TYPE_2__ dmu_buf_impl_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int *,TYPE_1__*,int ,int *) ;

__attribute__((used)) static void
FUNC_5(dmu_buf_impl_t *VAR_2)
{
 dmu_buf_user_t *VAR_3 = VAR_2->db_user;

 FUNC_0(FUNC_1(&VAR_2->db_mtx));

 if (VAR_3 == ((void*)0))
  return;

 FUNC_2(VAR_2, VAR_0);
 VAR_2->db_user = ((void*)0);
 boolean_t VAR_4 = (VAR_3->dbu_evict_func_async != ((void*)0));

 if (VAR_3->dbu_evict_func_sync != ((void*)0))
  VAR_3->dbu_evict_func_sync(VAR_3);

 if (VAR_4) {
  FUNC_4(VAR_1, VAR_3->dbu_evict_func_async,
      VAR_3, 0, &VAR_3->dbu_tqent);
 }
}
