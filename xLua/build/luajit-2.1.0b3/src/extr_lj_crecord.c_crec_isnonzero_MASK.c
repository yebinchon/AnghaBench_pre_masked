
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int info; int size; } ;
typedef TYPE_1__ CType ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(CType *VAR_1, void *VAR_2)
{
  if (VAR_2 == (void *)0)
    return 0;
  if (VAR_2 == (void *)1)
    return 1;
  if ((VAR_1->info & VAR_0)) {
    if (VAR_1->size == sizeof(float))
      return (*(float *)VAR_2 != 0);
    else
      return (*(double *)VAR_2 != 0);
  } else {
    if (VAR_1->size == 1)
      return (*(uint8_t *)VAR_2 != 0);
    else if (VAR_1->size == 2)
      return (*(uint16_t *)VAR_2 != 0);
    else if (VAR_1->size == 4)
      return (*(uint32_t *)VAR_2 != 0);
    else
      return (*(uint64_t *)VAR_2 != 0);
  }
}
