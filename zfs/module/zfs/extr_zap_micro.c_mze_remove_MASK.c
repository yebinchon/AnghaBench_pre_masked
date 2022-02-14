
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zap_avl; } ;
struct TYPE_5__ {TYPE_1__ zap_m; int zap_rwlock; int zap_ismicro; } ;
typedef TYPE_2__ zap_t ;
typedef int mzap_ent_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(zap_t *VAR_0, mzap_ent_t *VAR_1)
{
 FUNC_0(VAR_0->zap_ismicro);
 FUNC_0(FUNC_1(&VAR_0->zap_rwlock));

 FUNC_2(&VAR_0->zap_m.zap_avl, VAR_1);
 FUNC_3(VAR_1, sizeof (mzap_ent_t));
}
