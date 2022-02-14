
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Relids ;
typedef int PlannerInfo ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static bool
FUNC_2(PlannerInfo *VAR_0, Relids VAR_1)
{
 int VAR_2 = -1;

 while ((VAR_2 = FUNC_0(VAR_1, VAR_2)) >= 0)
 {
  if (FUNC_1(VAR_0, VAR_2))
   return 1;
 }
 return 0;
}
