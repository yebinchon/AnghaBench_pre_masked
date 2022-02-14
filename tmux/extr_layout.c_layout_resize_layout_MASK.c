
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window {int dummy; } ;
struct layout_cell {int dummy; } ;
typedef enum layout_type { ____Placeholder_layout_type } layout_type ;


 int FUNC_0 (struct window*) ;
 int FUNC_1 (struct window*) ;
 int FUNC_2 (struct window*,struct layout_cell*,int,int,int) ;
 int FUNC_3 (struct window*,struct layout_cell*,int,int) ;
 int FUNC_4 (char*,struct window*) ;

void
FUNC_5(struct window *VAR_0, struct layout_cell *VAR_1,
    enum layout_type VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;


 VAR_5 = VAR_3;
 while (VAR_5 != 0) {
  if (VAR_3 > 0) {
   VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_5,
       VAR_4);
   VAR_5 -= VAR_6;
  } else {
   VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_5);
   VAR_5 += VAR_6;
  }

  if (VAR_6 == 0)
   break;
 }


 FUNC_0(VAR_0);
 FUNC_1(VAR_0);
 FUNC_4("window-layout-changed", VAR_0);
}
