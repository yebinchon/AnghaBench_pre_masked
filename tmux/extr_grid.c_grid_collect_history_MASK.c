
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct grid {int hsize; int hlimit; int hscrolled; } ;


 int FUNC_0 (struct grid*,int) ;

void
FUNC_1(struct grid *VAR_0)
{
 u_int VAR_1;

 if (VAR_0->hsize == 0 || VAR_0->hsize < VAR_0->hlimit)
  return;

 VAR_1 = VAR_0->hlimit / 10;
 if (VAR_1 < 1)
  VAR_1 = 1;
 if (VAR_1 > VAR_0->hsize)
  VAR_1 = VAR_0->hsize;





 FUNC_0(VAR_0, VAR_1);

 VAR_0->hsize -= VAR_1;
 if (VAR_0->hscrolled > VAR_0->hsize)
  VAR_0->hscrolled = VAR_0->hsize;
}
