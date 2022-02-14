
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct utf8_data {scalar_t__ size; } ;
struct grid_cell {int flags; int data; } ;
struct grid {scalar_t__ hsize; } ;


 int VAR_0 ;
 int FUNC_0 (struct utf8_data*) ;
 int FUNC_1 (struct grid*,scalar_t__,scalar_t__,struct grid_cell*) ;
 scalar_t__ FUNC_2 (struct grid*,scalar_t__) ;
 int FUNC_3 (struct utf8_data*,int *,int) ;
 char* FUNC_4 (struct utf8_data*) ;
 struct utf8_data* FUNC_5 (struct utf8_data*,size_t,int) ;

char *
FUNC_6(struct grid *VAR_1, u_int VAR_2)
{
 struct grid_cell VAR_3;
 struct utf8_data *VAR_4 = ((void*)0);
 u_int VAR_5;
 size_t VAR_6 = 0;
 char *VAR_7 = ((void*)0);

 VAR_2 = VAR_1->hsize + VAR_2;
 for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_1, VAR_2); VAR_5++) {
  FUNC_1(VAR_1, VAR_5, VAR_2, &VAR_3);
  if (VAR_3.flags & VAR_0)
   break;

  VAR_4 = FUNC_5(VAR_4, VAR_6 + 2, sizeof *VAR_4);
  FUNC_3(&VAR_4[VAR_6++], &VAR_3.data, sizeof *VAR_4);
 }
 if (VAR_6 != 0) {
  VAR_4[VAR_6].size = 0;
  VAR_7 = FUNC_4(VAR_4);
  FUNC_0(VAR_4);
 }
 return (VAR_7);
}
