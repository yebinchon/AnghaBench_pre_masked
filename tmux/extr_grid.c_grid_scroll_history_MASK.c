
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct grid {size_t hsize; int * linedata; int hscrolled; scalar_t__ sy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct grid*,scalar_t__,scalar_t__) ;
 int * FUNC_2 (int *,scalar_t__,int) ;

void
FUNC_3(struct grid *VAR_0, u_int VAR_1)
{
 u_int VAR_2;

 VAR_2 = VAR_0->hsize + VAR_0->sy;
 VAR_0->linedata = FUNC_2(VAR_0->linedata, VAR_2 + 1,
     sizeof *VAR_0->linedata);
 FUNC_1(VAR_0, VAR_2, VAR_1);

 VAR_0->hscrolled++;
 FUNC_0(&VAR_0->linedata[VAR_0->hsize]);
 VAR_0->hsize++;
}
