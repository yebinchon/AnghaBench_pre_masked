
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct screen_write_ctx {struct screen* s; } ;
struct screen {int cx; int cy; } ;
struct grid_cell {int attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct grid_cell*,int *,int) ;
 int FUNC_1 (struct screen_write_ctx*,struct grid_cell*,char) ;
 int FUNC_2 (struct screen_write_ctx*,int,int) ;

void
FUNC_3(struct screen_write_ctx *VAR_2, u_int VAR_3, u_int VAR_4)
{
 struct screen *VAR_5 = VAR_2->s;
 struct grid_cell VAR_6;
 u_int VAR_7, VAR_8, VAR_9;

 VAR_7 = VAR_5->cx;
 VAR_8 = VAR_5->cy;

 FUNC_0(&VAR_6, &VAR_1, sizeof VAR_6);
 VAR_6.attr |= VAR_0;

 FUNC_1(VAR_2, &VAR_6, 'l');
 for (VAR_9 = 1; VAR_9 < VAR_3 - 1; VAR_9++)
  FUNC_1(VAR_2, &VAR_6, 'q');
 FUNC_1(VAR_2, &VAR_6, 'k');

 FUNC_2(VAR_2, VAR_7, VAR_8 + VAR_4 - 1);
 FUNC_1(VAR_2, &VAR_6, 'm');
 for (VAR_9 = 1; VAR_9 < VAR_3 - 1; VAR_9++)
  FUNC_1(VAR_2, &VAR_6, 'q');
 FUNC_1(VAR_2, &VAR_6, 'j');

 for (VAR_9 = 1; VAR_9 < VAR_4 - 1; VAR_9++) {
  FUNC_2(VAR_2, VAR_7, VAR_8 + VAR_9);
  FUNC_1(VAR_2, &VAR_6, 'x');
 }
 for (VAR_9 = 1; VAR_9 < VAR_4 - 1; VAR_9++) {
  FUNC_2(VAR_2, VAR_7 + VAR_3 - 1, VAR_8 + VAR_9);
  FUNC_1(VAR_2, &VAR_6, 'x');
 }

 FUNC_2(VAR_2, VAR_7, VAR_8);
}
