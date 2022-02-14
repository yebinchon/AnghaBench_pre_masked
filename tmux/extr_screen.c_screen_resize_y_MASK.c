
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct screen {int cy; void* rlower; scalar_t__ rupper; struct grid* grid; } ;
struct grid_line {int dummy; } ;
struct grid {int flags; int hscrolled; int hsize; int sy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct grid*,int) ;
 int FUNC_2 (struct grid*,int) ;
 int FUNC_3 (struct grid*,int,int,int) ;
 int FUNC_4 (int ,int ,int) ;
 void* FUNC_5 (struct screen*) ;

__attribute__((used)) static void
FUNC_6(struct screen *VAR_1, u_int VAR_2)
{
 struct grid *VAR_3 = VAR_1->grid;
 u_int VAR_4, VAR_5, VAR_6, VAR_7;

 if (VAR_2 == 0)
  FUNC_0("zero size");
 VAR_6 = FUNC_5(VAR_1);
 if (VAR_2 < VAR_6) {
  VAR_4 = VAR_6 - VAR_2;


  VAR_5 = VAR_6 - 1 - VAR_1->cy;
  if (VAR_5 > 0) {
   if (VAR_5 > VAR_4)
    VAR_5 = VAR_4;
   FUNC_3(VAR_3, VAR_6 - VAR_5, VAR_5,
       8);
  }
  VAR_4 -= VAR_5;






  VAR_5 = VAR_1->cy;
  if (VAR_3->flags & VAR_0) {
   VAR_3->hscrolled += VAR_4;
   VAR_3->hsize += VAR_4;
  } else if (VAR_4 > 0 && VAR_5 > 0) {
   if (VAR_5 > VAR_4)
    VAR_5 = VAR_4;
   FUNC_3(VAR_3, 0, VAR_5, 8);
  }
  VAR_1->cy -= VAR_4;
 }


 FUNC_1(VAR_3, VAR_3->hsize + VAR_2);


 if (VAR_2 > VAR_6) {
  VAR_4 = VAR_2 - VAR_6;





  VAR_5 = VAR_3->hscrolled;
  if (VAR_3->flags & VAR_0 && VAR_5 > 0) {
   if (VAR_5 > VAR_4)
    VAR_5 = VAR_4;
   VAR_3->hscrolled -= VAR_5;
   VAR_3->hsize -= VAR_5;
   VAR_1->cy += VAR_5;
  } else
   VAR_5 = 0;
  VAR_4 -= VAR_5;


  for (VAR_7 = VAR_3->hsize + VAR_2 - VAR_4; VAR_7 < VAR_3->hsize + VAR_2; VAR_7++)
   FUNC_4(FUNC_2(VAR_3, VAR_7), 0, sizeof(struct grid_line));
 }


 VAR_3->sy = VAR_2;
 VAR_1->rupper = 0;
 VAR_1->rlower = FUNC_5(VAR_1) - 1;
}
