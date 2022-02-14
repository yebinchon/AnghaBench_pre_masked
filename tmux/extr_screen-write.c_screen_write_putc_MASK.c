
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct screen_write_ctx {int dummy; } ;
struct grid_cell {int data; } ;


 int FUNC_0 (struct grid_cell*,struct grid_cell const*,int) ;
 int FUNC_1 (struct screen_write_ctx*,struct grid_cell*) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(struct screen_write_ctx *VAR_0, const struct grid_cell *VAR_1,
    u_char VAR_2)
{
 struct grid_cell VAR_3;

 FUNC_0(&VAR_3, VAR_1, sizeof VAR_3);

 FUNC_2(&VAR_3.data, VAR_2);
 FUNC_1(VAR_0, &VAR_3);
}
