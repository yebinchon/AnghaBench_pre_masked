
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int zl_spa; TYPE_3__* zl_itxg; int zl_issuer_lock; int zl_itx_commit_list; } ;
typedef TYPE_2__ zilog_t ;
typedef size_t uint64_t ;
typedef int list_t ;
struct TYPE_8__ {size_t itxg_txg; int itxg_lock; TYPE_1__* itxg_itxs; } ;
typedef TYPE_3__ itxg_t ;
struct TYPE_6__ {int i_sync_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 size_t FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*,size_t) ;

__attribute__((used)) static void
FUNC_8(zilog_t *VAR_4)
{
 uint64_t VAR_5, VAR_6;
 list_t *VAR_7 = &VAR_4->zl_itx_commit_list;

 FUNC_0(FUNC_1(&VAR_4->zl_issuer_lock));

 if (FUNC_5(VAR_4->zl_spa) != VAR_2)
  VAR_5 = VAR_3;
 else
  VAR_5 = FUNC_6(VAR_4->zl_spa) + 1;






 for (VAR_6 = VAR_5; VAR_6 < (VAR_5 + VAR_0); VAR_6++) {
  itxg_t *VAR_8 = &VAR_4->zl_itxg[VAR_6 & VAR_1];

  FUNC_3(&VAR_8->itxg_lock);
  if (VAR_8->itxg_txg != VAR_6) {
   FUNC_4(&VAR_8->itxg_lock);
   continue;
  }
  FUNC_0(FUNC_7(VAR_4, VAR_6) ||
      FUNC_5(VAR_4->zl_spa) != VAR_2);
  FUNC_2(VAR_7, &VAR_8->itxg_itxs->i_sync_list);

  FUNC_4(&VAR_8->itxg_lock);
 }
}
