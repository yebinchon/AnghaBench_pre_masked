
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct screen_write_ctx {int dummy; } ;
struct screen {int cx; } ;
struct format_ranges {int dummy; } ;


 int FUNC_0 (struct screen_write_ctx*,int,int,struct screen*,struct format_ranges*,int,int,int) ;
 int FUNC_1 (struct screen_write_ctx*,int,int,int ) ;
 int FUNC_2 (struct screen_write_ctx*,struct screen*,int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_3(struct screen_write_ctx *VAR_0,
    u_int VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4, struct screen *VAR_5,
    struct screen *VAR_6, struct screen *VAR_7, int VAR_8,
    int VAR_9, struct format_ranges *VAR_10)
{
 u_int VAR_11, VAR_12;


 if (VAR_4 >= VAR_5->cx) {
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, VAR_10, VAR_3, 0, VAR_4);
  return;
 }


 VAR_12 = VAR_8 + (VAR_9 - VAR_8) / 2;
 if (VAR_12 < VAR_4 / 2)
  VAR_11 = 0;
 else
  VAR_11 = VAR_12 - VAR_4 / 2;
 if (VAR_11 + VAR_4 > VAR_5->cx)
  VAR_11 = VAR_5->cx - VAR_4;


 if (VAR_11 != 0 && VAR_4 > VAR_6->cx) {
  FUNC_1(VAR_0, VAR_1 + VAR_3, VAR_2, 0);
  FUNC_2(VAR_0, VAR_6, 0, 0, VAR_6->cx, 1);
  VAR_3 += VAR_6->cx;
  VAR_11 += VAR_6->cx;
  VAR_4 -= VAR_6->cx;
 }
 if (VAR_11 + VAR_4 < VAR_5->cx && VAR_4 > VAR_7->cx) {
  FUNC_1(VAR_0, VAR_1 + VAR_3 + VAR_4 - 1, VAR_2, 0);
  FUNC_2(VAR_0, VAR_7, 0, 0, VAR_7->cx,
      1);
  VAR_4 -= VAR_7->cx;
 }


 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_5, VAR_10, VAR_3, VAR_11, VAR_4);
}
