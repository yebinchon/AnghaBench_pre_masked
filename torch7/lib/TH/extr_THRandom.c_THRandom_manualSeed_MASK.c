
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned long the_initial_seed; int* state; int left; int seeded; } ;
typedef TYPE_1__ THGenerator ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 int VAR_0 ;

void FUNC_3(THGenerator *VAR_1, unsigned long VAR_2)
{
  int VAR_3;


  THGenerator *VAR_4 = FUNC_2();
  FUNC_0(VAR_1, VAR_4);
  FUNC_1(VAR_4);

  VAR_1->the_initial_seed = VAR_2;
  VAR_1->state[0] = VAR_1->the_initial_seed & 0xffffffffUL;
  for(VAR_3 = 1; VAR_3 < VAR_0; VAR_3++)
  {
    VAR_1->state[VAR_3] = (1812433253UL * (VAR_1->state[VAR_3-1] ^ (VAR_1->state[VAR_3-1] >> 30)) + VAR_3);




    VAR_1->state[VAR_3] &= 0xffffffffUL;
  }
  VAR_1->left = 1;
  VAR_1->seeded = 1;
}
