
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zap_num_entries_mtx; } ;
struct TYPE_6__ {TYPE_1__ zap_f; scalar_t__ zap_ismicro; int zap_rwlock; } ;
typedef TYPE_2__ zap_t ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;

void
FUNC_4(void *VAR_0)
{
 zap_t *VAR_1 = VAR_0;

 FUNC_3(&VAR_1->zap_rwlock);

 if (VAR_1->zap_ismicro)
  FUNC_2(VAR_1);
 else
  FUNC_1(&VAR_1->zap_f.zap_num_entries_mtx);

 FUNC_0(VAR_1, sizeof (zap_t));
}
