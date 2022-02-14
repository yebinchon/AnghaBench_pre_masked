
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_4__ {int * blk_dva; } ;
typedef TYPE_1__ blkptr_t ;


 int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (int *,int *) ;

uint64_t
FUNC_2(spa_t *VAR_0, const blkptr_t *VAR_1)
{
 uint64_t VAR_2 = 0;

 for (int VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  VAR_2 += FUNC_1(VAR_0, &VAR_1->blk_dva[VAR_3]);

 return (VAR_2);
}
