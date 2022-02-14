
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int inuse; int baseaddr; int irq; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;

int
FUNC_0(int VAR_2, int *VAR_3, int *VAR_4)
{

 if ((VAR_2 < 0) || (((unsigned) VAR_2) >= VAR_0) ||
  VAR_1[VAR_2].inuse)
 {
  return (-1);
 }

 VAR_1[VAR_2].inuse = 1;
 *VAR_3 = VAR_1[VAR_2].baseaddr;
 *VAR_4 = VAR_1[VAR_2].irq;

 return (0);
}
