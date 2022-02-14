
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct screen_write_ctx {int dummy; } ;
struct grid_cell {int dummy; } ;


 int FUNC_0 (struct screen_write_ctx*,size_t,int) ;
 int FUNC_1 (struct screen_write_ctx*,int,int,int ) ;
 int FUNC_2 (struct screen_write_ctx*,struct grid_cell const*,char*,char const*) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(struct screen_write_ctx *VAR_0, u_int VAR_1, u_int VAR_2,
    u_int VAR_3, u_int VAR_4, const struct grid_cell *VAR_5, const char *VAR_6)
{
 size_t VAR_7;
 u_int VAR_8, VAR_9;

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_3 == 0 || VAR_4 == 1 || VAR_7 > VAR_3)
  return;
 VAR_8 = (VAR_3 - VAR_7 + 1) / 2;
 VAR_9 = (VAR_4 + 1) / 2;

 if (VAR_8 > 1 && VAR_8 + VAR_7 < VAR_3 - 1 && VAR_4 >= 3) {
  FUNC_1(VAR_0, VAR_1 + VAR_8 - 1, VAR_2 + VAR_9 - 1, 0);
  FUNC_0(VAR_0, VAR_7 + 2, 3);
 }
 FUNC_1(VAR_0, VAR_1 + VAR_8, VAR_2 + VAR_9, 0);
 FUNC_2(VAR_0, VAR_5, "%s", VAR_6);
}
