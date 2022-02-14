
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window {int dummy; } ;
struct layout_cell {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct window*,struct layout_cell*) ;
 int FUNC_1 (struct window*,struct layout_cell*) ;

__attribute__((used)) static int
FUNC_2(struct window *VAR_2, struct layout_cell *VAR_3, int VAR_4)
{
 if (VAR_4 == VAR_1)
  return (FUNC_1(VAR_2, VAR_3));
 if (VAR_4 == VAR_0)
  return (FUNC_0(VAR_2, VAR_3));
 return (0);
}
