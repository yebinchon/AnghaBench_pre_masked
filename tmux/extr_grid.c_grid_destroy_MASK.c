
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grid {struct grid* linedata; scalar_t__ sy; scalar_t__ hsize; } ;


 int FUNC_0 (struct grid*) ;
 int FUNC_1 (struct grid*,int ,scalar_t__) ;

void
FUNC_2(struct grid *VAR_0)
{
 FUNC_1(VAR_0, 0, VAR_0->hsize + VAR_0->sy);

 FUNC_0(VAR_0->linedata);

 FUNC_0(VAR_0);
}
