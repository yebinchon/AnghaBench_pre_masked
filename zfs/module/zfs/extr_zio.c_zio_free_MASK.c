
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_8__ {size_t spa_syncing_txg; int * spa_free_bplist; } ;
typedef TYPE_1__ spa_t ;
typedef int blkptr_t ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int const*) ;
 int FUNC_5 (TYPE_1__*,int const*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int const*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (int *,TYPE_1__*,size_t,int const*,int ) ;
 int FUNC_10 (int ) ;

void
FUNC_11(spa_t *VAR_4, uint64_t VAR_5, const blkptr_t *VAR_6)
{

 FUNC_8(VAR_4, VAR_6, VAR_0);






 if (FUNC_1(VAR_6))
  return;
 FUNC_5(VAR_4, VAR_6);
 if (FUNC_2(VAR_6) ||
     FUNC_0(VAR_6) ||
     VAR_5 != VAR_4->spa_syncing_txg ||
     (FUNC_7(VAR_4) >= VAR_3 &&
     !FUNC_6(VAR_4, VAR_1))) {
  FUNC_4(&VAR_4->spa_free_bplist[VAR_5 & VAR_2], VAR_6);
 } else {
  FUNC_3(FUNC_10(FUNC_9(((void*)0), VAR_4, VAR_5, VAR_6, 0)));
 }
}
