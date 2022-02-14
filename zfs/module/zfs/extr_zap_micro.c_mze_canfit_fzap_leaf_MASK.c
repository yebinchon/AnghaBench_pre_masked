
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int zap_avl; } ;
struct TYPE_11__ {TYPE_1__ zap_m; } ;
typedef TYPE_2__ zap_t ;
struct TYPE_12__ {TYPE_2__* zn_zap; } ;
typedef TYPE_3__ zap_name_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_13__ {scalar_t__ mze_hash; scalar_t__ mze_cd; } ;
typedef TYPE_4__ mzap_ent_t ;
typedef int boolean_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;


 TYPE_4__* FUNC_0 (int *,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_1 (int *,TYPE_4__*,int *) ;

__attribute__((used)) static boolean_t
FUNC_2(zap_name_t *VAR_2, uint64_t VAR_3)
{
 zap_t *VAR_4 = VAR_2->zn_zap;
 mzap_ent_t VAR_5;
 mzap_ent_t *VAR_6;
 avl_index_t VAR_7;
 avl_tree_t *VAR_8 = &VAR_4->zap_m.zap_avl;
 uint32_t VAR_9 = 0;

 VAR_5.mze_hash = VAR_3;
 VAR_5.mze_cd = 0;

 for (VAR_6 = FUNC_1(VAR_8, &VAR_5, &VAR_7);
     VAR_6 && VAR_6->mze_hash == VAR_3; VAR_6 = FUNC_0(VAR_8, VAR_6)) {
  VAR_9++;
 }


 VAR_9++;

 return (VAR_1 > (VAR_9 * VAR_0));
}
