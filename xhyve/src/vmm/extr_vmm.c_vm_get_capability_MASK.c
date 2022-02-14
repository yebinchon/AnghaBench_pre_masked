
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int cookie; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int,int*) ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(struct vm *VAR_3, int VAR_4, int VAR_5, int *VAR_6)
{
 if (VAR_4 < 0 || VAR_4 >= VAR_2)
  return (VAR_0);

 if (VAR_5 < 0 || VAR_5 >= VAR_1)
  return (VAR_0);

 return (FUNC_0(VAR_3->cookie, VAR_4, VAR_5, VAR_6));
}
