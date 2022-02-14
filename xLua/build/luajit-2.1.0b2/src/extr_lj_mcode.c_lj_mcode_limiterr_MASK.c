
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t szallmcarea; scalar_t__* param; } ;
typedef TYPE_1__ jit_State ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(jit_State *VAR_6, size_t VAR_7)
{
  size_t VAR_8, VAR_9;
  FUNC_0(VAR_6);
  VAR_8 = (size_t)VAR_6->param[VAR_1] << 10;
  VAR_8 = (VAR_8 + VAR_2-1) & ~(size_t)(VAR_2 - 1);
  VAR_9 = (size_t)VAR_6->param[VAR_0] << 10;
  if ((size_t)VAR_7 > VAR_8)
    FUNC_1(VAR_6, VAR_5);
  if (VAR_6->szallmcarea + VAR_8 > VAR_9)
    FUNC_1(VAR_6, VAR_3);
  FUNC_2(VAR_6);
  FUNC_1(VAR_6, VAR_4);
}
