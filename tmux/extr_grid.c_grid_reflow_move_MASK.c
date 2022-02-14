
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grid_line {int dummy; } ;
struct grid {int dummy; } ;


 struct grid_line* FUNC_0 (struct grid*,int) ;
 int FUNC_1 (struct grid_line*) ;
 int FUNC_2 (struct grid_line*,struct grid_line*,int) ;

__attribute__((used)) static struct grid_line *
FUNC_3(struct grid *VAR_0, struct grid_line *VAR_1)
{
 struct grid_line *VAR_2;

 VAR_2 = FUNC_0(VAR_0, 1);
 FUNC_2(VAR_2, VAR_1, sizeof *VAR_2);
 FUNC_1(VAR_1);
 return (VAR_2);
}
