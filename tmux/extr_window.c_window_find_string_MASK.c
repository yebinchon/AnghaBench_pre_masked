
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct window_pane {int dummy; } ;
struct window {int sx; int sy; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 struct window_pane* FUNC_1 (struct window*,int,int) ;

struct window_pane *
FUNC_2(struct window *VAR_0, const char *VAR_1)
{
 u_int VAR_2, VAR_3;

 VAR_2 = VAR_0->sx / 2;
 VAR_3 = VAR_0->sy / 2;

 if (FUNC_0(VAR_1, "top") == 0)
  VAR_3 = 0;
 else if (FUNC_0(VAR_1, "bottom") == 0)
  VAR_3 = VAR_0->sy - 1;
 else if (FUNC_0(VAR_1, "left") == 0)
  VAR_2 = 0;
 else if (FUNC_0(VAR_1, "right") == 0)
  VAR_2 = VAR_0->sx - 1;
 else if (FUNC_0(VAR_1, "top-left") == 0) {
  VAR_2 = 0;
  VAR_3 = 0;
 } else if (FUNC_0(VAR_1, "top-right") == 0) {
  VAR_2 = VAR_0->sx - 1;
  VAR_3 = 0;
 } else if (FUNC_0(VAR_1, "bottom-left") == 0) {
  VAR_2 = 0;
  VAR_3 = VAR_0->sy - 1;
 } else if (FUNC_0(VAR_1, "bottom-right") == 0) {
  VAR_2 = VAR_0->sx - 1;
  VAR_3 = VAR_0->sy - 1;
 } else
  return (((void*)0));

 return (FUNC_1(VAR_0, VAR_2, VAR_3));
}
