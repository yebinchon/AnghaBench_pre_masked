
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_0; int member_1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct timeval*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_4(int VAR_5)
{
 struct timeval VAR_6 = { VAR_5, 0 };

 if (VAR_4 == -1)
  return;

 if (FUNC_2(&VAR_3))
  FUNC_1(&VAR_3);

 if (VAR_5 == 0) {
  FUNC_3(&VAR_3, VAR_4, VAR_0, VAR_2,
      ((void*)0));
  FUNC_0(&VAR_3, ((void*)0));
 } else {
  FUNC_3(&VAR_3, VAR_4, VAR_1,
      VAR_2, ((void*)0));
  FUNC_0(&VAR_3, &VAR_6);
 }
}
