
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct grid_line {int dummy; } ;
struct grid {struct grid_line* linedata; } ;



struct grid_line *
FUNC_0(struct grid *VAR_0, u_int VAR_1)
{
 return (&VAR_0->linedata[VAR_1]);
}
