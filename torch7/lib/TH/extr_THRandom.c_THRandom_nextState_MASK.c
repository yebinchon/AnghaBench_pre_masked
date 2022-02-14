
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long* state; int left; scalar_t__ next; } ;
typedef TYPE_1__ THGenerator ;


 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(THGenerator *VAR_2)
{
  unsigned long *VAR_3 = VAR_2->state;
  int VAR_4;

  VAR_2->left = VAR_1;
  VAR_2->next = 0;

  for(VAR_4 = VAR_1-VAR_0+1; --VAR_4; VAR_3++)
    *VAR_3 = VAR_3[VAR_0] ^ FUNC_0(VAR_3[0], VAR_3[1]);

  for(VAR_4 = VAR_0; --VAR_4; VAR_3++)
    *VAR_3 = VAR_3[VAR_0-VAR_1] ^ FUNC_0(VAR_3[0], VAR_3[1]);

  *VAR_3 = VAR_3[VAR_0-VAR_1] ^ FUNC_0(VAR_3[0], VAR_2->state[0]);
}
