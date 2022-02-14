
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int zap_avl; } ;
struct TYPE_10__ {int zap_rwlock; int zap_ismicro; TYPE_1__ zap_m; } ;
typedef TYPE_2__ zap_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_11__ {scalar_t__ mze_hash; scalar_t__ mze_cd; } ;
typedef TYPE_3__ mzap_ent_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int *,TYPE_3__*,int *) ;

__attribute__((used)) static uint32_t
FUNC_4(zap_t *VAR_0, uint64_t VAR_1)
{
 mzap_ent_t VAR_2;
 avl_index_t VAR_3;
 avl_tree_t *VAR_4 = &VAR_0->zap_m.zap_avl;

 FUNC_0(VAR_0->zap_ismicro);
 FUNC_0(FUNC_2(&VAR_0->zap_rwlock));

 VAR_2.mze_hash = VAR_1;
 VAR_2.mze_cd = 0;

 uint32_t VAR_5 = 0;
 for (mzap_ent_t *VAR_6 = FUNC_3(VAR_4, &VAR_2, &VAR_3);
     VAR_6 && VAR_6->mze_hash == VAR_1; VAR_6 = FUNC_1(VAR_4, VAR_6)) {
  if (VAR_6->mze_cd != VAR_5)
   break;
  VAR_5++;
 }

 return (VAR_5);
}
