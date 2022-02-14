
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {int dummy; } ;
struct vlapic {int dummy; } ;
typedef int cpuset_t ;


 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct vlapic*,int) ;
 int FUNC_4 (struct vm*) ;
 struct vlapic* FUNC_5 (struct vm*,int) ;

int
FUNC_6(struct vm *VAR_2, int VAR_3, int VAR_4)
{
 struct vlapic *VAR_5;
 cpuset_t VAR_6;
 int VAR_7;

 if (VAR_3 < -1 || VAR_3 >= VAR_1)
  return (VAR_0);

 if (VAR_3 == -1)
  VAR_6 = FUNC_4(VAR_2);
 else
  FUNC_2(((unsigned) VAR_3), &VAR_6);
 VAR_7 = 0;
 while ((VAR_3 = FUNC_1(&VAR_6)) != 0) {
  VAR_3--;
  FUNC_0(((unsigned) VAR_3), &VAR_6);
  VAR_5 = FUNC_5(VAR_2, VAR_3);
  VAR_7 = FUNC_3(VAR_5, VAR_4);
  if (VAR_7)
   break;
 }

 return (VAR_7);
}
