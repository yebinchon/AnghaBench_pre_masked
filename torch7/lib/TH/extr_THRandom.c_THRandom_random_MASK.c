
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ left; unsigned long* state; int next; } ;
typedef TYPE_1__ THGenerator ;


 int FUNC_0 (TYPE_1__*) ;

unsigned long FUNC_1(THGenerator *VAR_0)
{
  unsigned long VAR_1;

  if (--(VAR_0->left) == 0)
    FUNC_0(VAR_0);
  VAR_1 = *(VAR_0->state + (VAR_0->next)++);


  VAR_1 ^= (VAR_1 >> 11);
  VAR_1 ^= (VAR_1 << 7) & 0x9d2c5680UL;
  VAR_1 ^= (VAR_1 << 15) & 0xefc60000UL;
  VAR_1 ^= (VAR_1 >> 18);

  return VAR_1;
}
