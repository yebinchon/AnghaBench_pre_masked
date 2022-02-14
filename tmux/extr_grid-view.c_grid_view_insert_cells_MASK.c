
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct grid {int sx; } ;


 int FUNC_0 (struct grid*,int,int,int,int,int) ;
 int FUNC_1 (struct grid*,int,int,int,int,int) ;
 int FUNC_2 (struct grid*,int) ;
 int FUNC_3 (struct grid*,int) ;

void
FUNC_4(struct grid *VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4)
{
 u_int VAR_5;

 VAR_1 = FUNC_2(VAR_0, VAR_1);
 VAR_2 = FUNC_3(VAR_0, VAR_2);

 VAR_5 = FUNC_2(VAR_0, VAR_0->sx);

 if (VAR_1 >= VAR_5 - 1)
  FUNC_0(VAR_0, VAR_1, VAR_2, 1, 1, VAR_4);
 else
  FUNC_1(VAR_0, VAR_1 + VAR_3, VAR_1, VAR_2, VAR_5 - VAR_1 - VAR_3, VAR_4);
}
