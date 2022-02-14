
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zap_dbuf; int zap_rwlock; } ;
typedef TYPE_1__ zap_t ;
typedef int dmu_tx_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(zap_t *VAR_0, dmu_tx_t *VAR_1)
{
 if (FUNC_0(&VAR_0->zap_rwlock))
  return (1);
 if (FUNC_2(&VAR_0->zap_rwlock)) {
  FUNC_1(VAR_0->zap_dbuf, VAR_1);
  return (1);
 }
 return (0);
}
