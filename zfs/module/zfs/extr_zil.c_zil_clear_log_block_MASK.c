
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int zl_spa; } ;
typedef TYPE_1__ zilog_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_10__ {scalar_t__ blk_birth; } ;
typedef TYPE_2__ blkptr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int ,scalar_t__,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_4(zilog_t *VAR_0, blkptr_t *VAR_1, void *VAR_2, uint64_t VAR_3)
{
 FUNC_0(!FUNC_1(VAR_1));







 if (VAR_1->blk_birth >= VAR_3)
  return (-1);

 if (FUNC_2(VAR_0, VAR_1) != 0)
  return (0);

 FUNC_3(VAR_0->zl_spa, VAR_3, VAR_1);
 return (0);
}
