
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int dummy; } ;
struct vlapic {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vm*,int,int) ;
 scalar_t__ FUNC_1 (struct vlapic*,int,int) ;
 struct vlapic* FUNC_2 (struct vm*,int) ;

int
FUNC_3(struct vm *VAR_2, int VAR_3, int VAR_4, bool VAR_5)
{
 struct vlapic *VAR_6;

 if (VAR_3 < 0 || VAR_3 >= VAR_1)
  return (VAR_0);





 if (VAR_4 < 16 || VAR_4 > 255)
  return (VAR_0);

 VAR_6 = FUNC_2(VAR_2, VAR_3);
 if (FUNC_1(VAR_6, VAR_4, VAR_5))
  FUNC_0(VAR_2, VAR_3, 1);
 return (0);
}
