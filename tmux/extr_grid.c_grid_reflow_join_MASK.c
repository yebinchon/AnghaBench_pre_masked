
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct grid_line {size_t cellused; int flags; size_t cellsize; int extddata; int celldata; } ;
struct TYPE_2__ {size_t width; } ;
struct grid_cell {TYPE_1__ data; } ;
struct grid {size_t sy; size_t hsize; size_t hscrolled; struct grid_line* linedata; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct grid_line*,size_t,struct grid_cell*) ;
 int FUNC_2 (struct grid*,int ,size_t,size_t,size_t,int) ;
 int FUNC_3 (struct grid_line*) ;
 struct grid_line* FUNC_4 (struct grid*,struct grid_line*) ;
 int FUNC_5 (struct grid*,size_t,size_t,struct grid_cell*) ;

__attribute__((used)) static void
FUNC_6(struct grid *VAR_1, struct grid *VAR_2, u_int VAR_3, u_int VAR_4,
    u_int VAR_5, int VAR_6)
{
 struct grid_line *VAR_7, *VAR_8 = ((void*)0);
 struct grid_cell VAR_9;
 u_int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15 = 0;
 u_int VAR_16;
 int VAR_17 = 1;




 if (!VAR_6) {
  VAR_13 = VAR_1->sy;
  VAR_7 = FUNC_4(VAR_1, &VAR_2->linedata[VAR_4]);
 } else {
  VAR_13 = VAR_1->sy - 1;
  VAR_7 = &VAR_1->linedata[VAR_13];
 }
 VAR_16 = VAR_7->cellused;




 VAR_10 = 0;
 for (;;) {




  if (VAR_4 + 1 + VAR_10 == VAR_2->hsize + VAR_2->sy)
   break;
  VAR_14 = VAR_4 + 1 + VAR_10;


  if (~VAR_2->linedata[VAR_14].flags & VAR_0)
   VAR_17 = 0;
  if (VAR_2->linedata[VAR_14].cellused == 0) {
   if (!VAR_17)
    break;
   VAR_10++;
   continue;
  }






  FUNC_1(&VAR_2->linedata[VAR_14], 0, &VAR_9);
  if (VAR_5 + VAR_9.data.width > VAR_3)
   break;
  VAR_5 += VAR_9.data.width;
  FUNC_5(VAR_1, VAR_16, VAR_13, &VAR_9);
  VAR_16++;


  VAR_8 = &VAR_2->linedata[VAR_14];
  for (VAR_15 = 1; VAR_15 < VAR_8->cellused; VAR_15++) {
   FUNC_1(VAR_8, VAR_15, &VAR_9);
   if (VAR_5 + VAR_9.data.width > VAR_3)
    break;
   VAR_5 += VAR_9.data.width;

   FUNC_5(VAR_1, VAR_16, VAR_13, &VAR_9);
   VAR_16++;
  }
  VAR_10++;





  if (!VAR_17 || VAR_15 != VAR_8->cellused || VAR_5 == VAR_3)
   break;
 }
 if (VAR_10 == 0)
  return;






 VAR_11 = VAR_8->cellused - VAR_15;
 if (VAR_11 != 0) {
  FUNC_2(VAR_2, 0, VAR_15, VAR_4 + VAR_10, VAR_11, 8);
  VAR_8->cellsize = VAR_8->cellused = VAR_11;
  VAR_10--;
 } else if (!VAR_17)
  VAR_7->flags &= ~VAR_0;


 for (VAR_12 = VAR_4 + 1; VAR_12 < VAR_4 + 1 + VAR_10; VAR_12++) {
  FUNC_0(VAR_2->linedata[VAR_12].celldata);
  FUNC_0(VAR_2->linedata[VAR_12].extddata);
  FUNC_3(&VAR_2->linedata[VAR_12]);
 }


 if (VAR_2->hscrolled > VAR_13 + VAR_10)
  VAR_2->hscrolled -= VAR_10;
 else if (VAR_2->hscrolled > VAR_13)
  VAR_2->hscrolled = VAR_13;
}
