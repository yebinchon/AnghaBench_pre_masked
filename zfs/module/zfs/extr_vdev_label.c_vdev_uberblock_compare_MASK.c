
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned int ub_txg; unsigned int ub_timestamp; } ;
typedef TYPE_1__ uberblock_t ;


 unsigned int FUNC_0 (TYPE_1__ const*) ;
 scalar_t__ FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(const uberblock_t *VAR_0, const uberblock_t *VAR_1)
{
 int VAR_2 = FUNC_3(VAR_0->ub_txg, VAR_1->ub_txg);

 if (FUNC_4(VAR_2))
  return (VAR_2);

 VAR_2 = FUNC_3(VAR_0->ub_timestamp, VAR_1->ub_timestamp);
 if (FUNC_4(VAR_2))
  return (VAR_2);
 unsigned int VAR_3 = 0;
 unsigned int VAR_4 = 0;

 if (FUNC_2(VAR_0) && FUNC_1(VAR_0))
  VAR_3 = FUNC_0(VAR_0);

 if (FUNC_2(VAR_1) && FUNC_1(VAR_1))
  VAR_4 = FUNC_0(VAR_1);

 return (FUNC_3(VAR_3, VAR_4));
}
