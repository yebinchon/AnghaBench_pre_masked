
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct grid {size_t hsize; size_t sy; int * linedata; } ;


 int FUNC_0 (struct grid*,int ,size_t) ;
 int FUNC_1 (int *,int *,size_t) ;

__attribute__((used)) static void
FUNC_2(struct grid *VAR_0, u_int VAR_1)
{
 FUNC_0(VAR_0, 0, VAR_1);
 FUNC_1(&VAR_0->linedata[0], &VAR_0->linedata[VAR_1],
     (VAR_0->hsize + VAR_0->sy - VAR_1) * (sizeof *VAR_0->linedata));
}
