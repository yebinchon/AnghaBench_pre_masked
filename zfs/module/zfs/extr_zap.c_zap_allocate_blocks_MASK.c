
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zap_rwlock; } ;
typedef TYPE_1__ zap_t ;
typedef int uint64_t ;
struct TYPE_6__ {int zap_freeblk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static uint64_t
FUNC_3(zap_t *VAR_0, int VAR_1)
{
 FUNC_0(FUNC_1(&VAR_0->zap_rwlock));
 uint64_t VAR_2 = FUNC_2(VAR_0)->zap_freeblk;
 FUNC_2(VAR_0)->zap_freeblk += VAR_1;
 return (VAR_2);
}
