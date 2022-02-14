
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct grid_line {size_t hsize; size_t sy; int flags; size_t cellused; scalar_t__ hscrolled; struct grid_line* linedata; int sx; } ;
struct TYPE_2__ {size_t width; } ;
struct grid_cell {TYPE_1__ data; } ;
struct grid {size_t hsize; size_t sy; int flags; size_t cellused; scalar_t__ hscrolled; struct grid* linedata; int sx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct grid_line*) ;
 struct grid_line* FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct grid_line*,size_t,struct grid_cell*) ;
 int FUNC_3 (struct grid_line*,scalar_t__) ;
 int FUNC_4 (struct grid_line*,struct grid_line*,size_t,size_t,size_t,int ) ;
 int FUNC_5 (struct grid_line*,struct grid_line*) ;
 int FUNC_6 (struct grid_line*,struct grid_line*,size_t,size_t,size_t) ;

void
FUNC_7(struct grid *VAR_3, u_int VAR_4)
{
 struct grid *VAR_5;
 struct grid_line *VAR_6;
 struct grid_cell VAR_7;
 u_int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;





 VAR_5 = FUNC_1(VAR_3->sx, 0, 0);




 for (VAR_8 = 0; VAR_8 < VAR_3->hsize + VAR_3->sy; VAR_8++) {
  VAR_6 = &VAR_3->linedata[VAR_8];
  if (VAR_6->flags & VAR_0)
   continue;






  VAR_12 = VAR_11 = VAR_9 = 0;
  if (~VAR_6->flags & VAR_1) {
   VAR_12 = 1;
   VAR_9 = VAR_6->cellused;
   if (VAR_9 > VAR_4)
    VAR_11 = VAR_4;
   else
    VAR_11 = VAR_9;
  } else {
   for (VAR_10 = 0; VAR_10 < VAR_6->cellused; VAR_10++) {
    FUNC_2(VAR_6, VAR_10, &VAR_7);
    if (VAR_10 == 0)
     VAR_12 = VAR_7.data.width;
    if (VAR_11 == 0 && VAR_9 + VAR_7.data.width > VAR_4)
     VAR_11 = VAR_10;
    VAR_9 += VAR_7.data.width;
   }
  }





  if (VAR_9 == VAR_4 || VAR_12 > VAR_4) {
   FUNC_5(VAR_5, VAR_6);
   continue;
  }





  if (VAR_9 > VAR_4) {
   FUNC_6(VAR_5, VAR_3, VAR_4, VAR_8, VAR_11);
   continue;
  }





  if (VAR_6->flags & VAR_2)
   FUNC_4(VAR_5, VAR_3, VAR_4, VAR_8, VAR_9, 0);
  else
   FUNC_5(VAR_5, VAR_6);
 }




 if (VAR_5->sy < VAR_3->sy)
  FUNC_3(VAR_5, VAR_3->sy - VAR_5->sy);
 VAR_3->hsize = VAR_5->sy - VAR_3->sy;
 if (VAR_3->hscrolled > VAR_3->hsize)
  VAR_3->hscrolled = VAR_3->hsize;
 FUNC_0(VAR_3->linedata);
 VAR_3->linedata = VAR_5->linedata;
 FUNC_0(VAR_5);
}
