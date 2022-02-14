
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int zap_avl; } ;
struct TYPE_11__ {int zap_ismicro; TYPE_1__ zap_m; int zap_rwlock; } ;
typedef TYPE_2__ zap_t ;
typedef int uint64_t ;
struct TYPE_12__ {int mze_chunkid; int mze_cd; int mze_hash; } ;
typedef TYPE_3__ mzap_ent_t ;
struct TYPE_13__ {scalar_t__* mze_name; int mze_cd; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_7__* FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int,int ) ;

__attribute__((used)) static void
FUNC_5(zap_t *VAR_1, int VAR_2, uint64_t VAR_3)
{
 FUNC_0(VAR_1->zap_ismicro);
 FUNC_0(FUNC_2(&VAR_1->zap_rwlock));

 mzap_ent_t *VAR_4 = FUNC_4(sizeof (mzap_ent_t), VAR_0);
 VAR_4->mze_chunkid = VAR_2;
 VAR_4->mze_hash = VAR_3;
 VAR_4->mze_cd = FUNC_1(VAR_1, VAR_4)->mze_cd;
 FUNC_0(FUNC_1(VAR_1, VAR_4)->mze_name[0] != 0);
 FUNC_3(&VAR_1->zap_m.zap_avl, VAR_4);
}
