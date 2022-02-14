
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct window {struct layout_cell* layout_root; } ;
struct layout_cell {scalar_t__ sx; scalar_t__ sy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct window*) ;
 int FUNC_1 (struct window*) ;
 int FUNC_2 (struct window*,struct layout_cell*,int ,int) ;
 int FUNC_3 (struct window*,struct layout_cell*,int ) ;

void
FUNC_4(struct window *VAR_2, u_int VAR_3, u_int VAR_4)
{
 struct layout_cell *VAR_5 = VAR_2->layout_root;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 VAR_8 = VAR_3 - VAR_5->sx;
 VAR_6 = FUNC_3(VAR_2, VAR_5, VAR_0);
 if (VAR_8 < 0 && VAR_8 < -VAR_6)
  VAR_8 = -VAR_6;
 if (VAR_6 == 0) {
  if (VAR_3 <= VAR_5->sx)
   VAR_8 = 0;
  else
   VAR_8 = VAR_3 - VAR_5->sx;
 }
 if (VAR_8 != 0)
  FUNC_2(VAR_2, VAR_5, VAR_0, VAR_8);


 VAR_9 = VAR_4 - VAR_5->sy;
 VAR_7 = FUNC_3(VAR_2, VAR_5, VAR_1);
 if (VAR_9 < 0 && VAR_9 < -VAR_7)
  VAR_9 = -VAR_7;
 if (VAR_7 == 0) {
  if (VAR_4 <= VAR_5->sy)
   VAR_9 = 0;
  else
   VAR_9 = VAR_4 - VAR_5->sy;
 }
 if (VAR_9 != 0)
  FUNC_2(VAR_2, VAR_5, VAR_1, VAR_9);


 FUNC_0(VAR_2);
 FUNC_1(VAR_2);
}
