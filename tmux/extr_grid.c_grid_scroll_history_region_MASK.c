
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct grid_line {int dummy; } ;
struct grid {size_t hsize; size_t sy; int hscrolled; struct grid_line* linedata; } ;


 int FUNC_0 (struct grid*,size_t,size_t) ;
 int FUNC_1 (struct grid_line*,struct grid_line*,int) ;
 int FUNC_2 (struct grid_line*,struct grid_line*,size_t) ;
 struct grid_line* FUNC_3 (struct grid_line*,size_t,int) ;

void
FUNC_4(struct grid *VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3)
{
 struct grid_line *VAR_4, *VAR_5;
 u_int VAR_6;


 VAR_6 = VAR_0->hsize + VAR_0->sy;
 VAR_0->linedata = FUNC_3(VAR_0->linedata, VAR_6 + 1,
     sizeof *VAR_0->linedata);


 VAR_4 = &VAR_0->linedata[VAR_0->hsize];
 FUNC_2(VAR_4 + 1, VAR_4, VAR_0->sy * sizeof *VAR_4);


 VAR_1++;
 VAR_5 = &VAR_0->linedata[VAR_1];
 VAR_2++;


 FUNC_1(VAR_4, VAR_5, sizeof *VAR_4);


 FUNC_2(VAR_5, VAR_5 + 1, (VAR_2 - VAR_1) * sizeof *VAR_5);
 FUNC_0(VAR_0, VAR_2, VAR_3);


 VAR_0->hscrolled++;
 VAR_0->hsize++;
}
