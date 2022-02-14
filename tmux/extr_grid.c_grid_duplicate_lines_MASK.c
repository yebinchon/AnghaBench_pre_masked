
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct grid_line {int cellsize; scalar_t__ extdsize; struct grid_line* extddata; struct grid_line* celldata; } ;
struct grid {scalar_t__ hsize; scalar_t__ sy; struct grid_line* linedata; } ;


 int FUNC_0 (struct grid*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct grid_line*,struct grid_line*,int) ;
 void* FUNC_2 (int *,int,int) ;

void
FUNC_3(struct grid *VAR_0, u_int VAR_1, struct grid *VAR_2, u_int VAR_3,
    u_int VAR_4)
{
 struct grid_line *VAR_5, *VAR_6;
 u_int VAR_7;

 if (VAR_1 + VAR_4 > VAR_0->hsize + VAR_0->sy)
  VAR_4 = VAR_0->hsize + VAR_0->sy - VAR_1;
 if (VAR_3 + VAR_4 > VAR_2->hsize + VAR_2->sy)
  VAR_4 = VAR_2->hsize + VAR_2->sy - VAR_3;
 FUNC_0(VAR_0, VAR_1, VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = &VAR_2->linedata[VAR_3];
  VAR_5 = &VAR_0->linedata[VAR_1];

  FUNC_1(VAR_5, VAR_6, sizeof *VAR_5);
  if (VAR_6->cellsize != 0) {
   VAR_5->celldata = FUNC_2(((void*)0),
       VAR_6->cellsize, sizeof *VAR_5->celldata);
   FUNC_1(VAR_5->celldata, VAR_6->celldata,
       VAR_6->cellsize * sizeof *VAR_5->celldata);
  } else
   VAR_5->celldata = ((void*)0);

  if (VAR_6->extdsize != 0) {
   VAR_5->extdsize = VAR_6->extdsize;
   VAR_5->extddata = FUNC_2(((void*)0), VAR_5->extdsize,
       sizeof *VAR_5->extddata);
   FUNC_1(VAR_5->extddata, VAR_6->extddata, VAR_5->extdsize *
       sizeof *VAR_5->extddata);
  }

  VAR_3++;
  VAR_1++;
 }
}
