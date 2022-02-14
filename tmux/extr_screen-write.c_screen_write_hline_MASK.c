
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
 int FUNC_1 (struct screen_write_ctx*,struct grid_cell*,unsigned char) ;
 int FUNC_2 (struct screen_write_ctx*,int,int) ;

void
FUNC_3(struct screen_write_ctx *VAR_2, u_int VAR_3, int VAR_4, int VAR_5)
{
 struct screen *VAR_6 = VAR_2->s;
 struct grid_cell VAR_7;
 u_int VAR_8, VAR_9, VAR_10;

 VAR_8 = VAR_6->cx;
 VAR_9 = VAR_6->cy;

 FUNC_0(&VAR_7, &VAR_1, sizeof VAR_7);
 VAR_7.attr |= VAR_0;

 FUNC_1(VAR_2, &VAR_7, VAR_4 ? 't' : 'q');
 for (VAR_10 = 1; VAR_10 < VAR_3 - 1; VAR_10++)
  FUNC_1(VAR_2, &VAR_7, 'q');
 FUNC_1(VAR_2, &VAR_7, VAR_5 ? 'u' : 'q');

 FUNC_2(VAR_2, VAR_8, VAR_9);
}
