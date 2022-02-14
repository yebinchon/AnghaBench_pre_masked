
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct grid_line {scalar_t__ cellused; } ;
struct grid {scalar_t__ sy; scalar_t__ hscrolled; int sx; } ;


 int FUNC_0 (struct grid*) ;
 struct grid_line* FUNC_1 (struct grid*,int ) ;
 int FUNC_2 (struct grid*,scalar_t__) ;
 int FUNC_3 (struct grid*,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct grid*,scalar_t__) ;

void
FUNC_5(struct grid *VAR_0, u_int VAR_1)
{
 struct grid_line *VAR_2;
 u_int VAR_3, VAR_4;


 VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0->sy; VAR_3++) {
  VAR_2 = FUNC_1(VAR_0, FUNC_4(VAR_0, VAR_3));
  if (VAR_2->cellused != 0)
   VAR_4 = VAR_3 + 1;
 }
 if (VAR_4 == 0) {
  FUNC_3(VAR_0, 0, 0, VAR_0->sx, VAR_0->sy, VAR_1);
  return;
 }


 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  FUNC_0(VAR_0);
  FUNC_2(VAR_0, VAR_1);
 }
 if (VAR_4 < VAR_0->sy)
  FUNC_3(VAR_0, 0, 0, VAR_0->sx, VAR_0->sy - VAR_4, VAR_1);
 VAR_0->hscrolled = 0;
}
