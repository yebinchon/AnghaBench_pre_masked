
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int,int *) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(int VAR_2)
{
 if (!FUNC_2(((unsigned) VAR_2), &VAR_0)) {
  FUNC_4(VAR_1, "Attempting to delete unknown cpu %d\n", VAR_2);
  FUNC_3(1);
 }

 FUNC_0(((unsigned) VAR_2), &VAR_0);
 return (FUNC_1(&VAR_0));
}
