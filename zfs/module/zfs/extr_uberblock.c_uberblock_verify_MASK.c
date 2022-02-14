
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {scalar_t__ ub_magic; } ;
typedef TYPE_1__ uberblock_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,int) ;

int
FUNC_3(uberblock_t *VAR_2)
{
 if (VAR_2->ub_magic == FUNC_0((uint64_t)VAR_1))
  FUNC_2(VAR_2, sizeof (uberblock_t));

 if (VAR_2->ub_magic != VAR_1)
  return (FUNC_1(VAR_0));

 return (0);
}
