
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vm {int dummy; } ;
typedef int cpuset_t ;


 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct vm*,char*,int) ;
 int FUNC_3 (struct vm*,int,int,int) ;
 int FUNC_4 (struct vm*,int *,int ,int,int,int) ;
 int FUNC_5 (struct vm*,int) ;

void
FUNC_6(struct vm *VAR_3, bool VAR_4, uint32_t VAR_5, bool VAR_6,
    int VAR_7, int VAR_8)
{
 bool VAR_9;
 int VAR_10;
 cpuset_t VAR_11;

 if (VAR_7 != VAR_1 &&
     VAR_7 != VAR_2 &&
     VAR_7 != VAR_0) {
  FUNC_2(VAR_3, "vlapic intr invalid delmode %#x", VAR_7);
  return;
 }
 VAR_9 = (VAR_7 == VAR_2);






 FUNC_4(VAR_3, &VAR_11, VAR_5, VAR_6, VAR_9, 0);

 while ((VAR_10 = FUNC_1(&VAR_11)) != 0) {
  VAR_10--;
  FUNC_0(((unsigned) VAR_10), &VAR_11);
  if (VAR_7 == VAR_0) {
   FUNC_5(VAR_3, VAR_10);
  } else {
   FUNC_3(VAR_3, VAR_10, VAR_8, VAR_4);
  }
 }
}
