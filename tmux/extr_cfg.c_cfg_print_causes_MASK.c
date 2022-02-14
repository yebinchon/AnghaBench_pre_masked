
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct cmdq_item {int dummy; } ;


 int ***** VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct cmdq_item*,char*,int ****) ;
 int FUNC_1 (int *****) ;

void
FUNC_2(struct cmdq_item *VAR_2)
{
 u_int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_0(VAR_2, "%s", VAR_0[VAR_3]);
  FUNC_1(&VAR_0[VAR_3]);
 }

 FUNC_1(VAR_0);
 VAR_0 = ((void*)0);
 VAR_1 = 0;
}
