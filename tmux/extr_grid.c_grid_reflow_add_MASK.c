
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct grid_line {int dummy; } ;
struct grid {size_t sy; struct grid_line* linedata; } ;


 int FUNC_0 (struct grid_line*,int ,int) ;
 struct grid_line* FUNC_1 (struct grid_line*,int,int) ;

__attribute__((used)) static struct grid_line *
FUNC_2(struct grid *VAR_0, u_int VAR_1)
{
 struct grid_line *VAR_2;
 u_int VAR_3 = VAR_0->sy + VAR_1;

 VAR_0->linedata = FUNC_1(VAR_0->linedata, VAR_3, sizeof *VAR_0->linedata);
 VAR_2 = &VAR_0->linedata[VAR_0->sy];
 FUNC_0(VAR_2, 0, VAR_1 * (sizeof *VAR_2));
 VAR_0->sy = VAR_3;
 return (VAR_2);
}
