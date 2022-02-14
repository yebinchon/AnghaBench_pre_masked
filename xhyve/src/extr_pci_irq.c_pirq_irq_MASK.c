
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reg; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

int
FUNC_2(int VAR_2)
{
 FUNC_0((VAR_2 > 0) && (((unsigned) VAR_2) <= FUNC_1(VAR_1)));
 return (VAR_1[VAR_2 - 1].reg & VAR_0);
}
