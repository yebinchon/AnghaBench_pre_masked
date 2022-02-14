
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u_char ;
typedef int Widget ;
typedef int Boolean ;
typedef int Atom ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,scalar_t__,int ,long,long,int ,int ,int *,int*,int*,int*,int **) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static Boolean
FUNC_5(
 Widget VAR_4)
{
 Atom VAR_5;
 Atom VAR_6;
 int VAR_7;
 u_long VAR_8;
 u_long VAR_9;
 u_long *VAR_10;






 VAR_5 = FUNC_2(FUNC_3(VAR_4), FUNC_0("WM_STATE"), VAR_1);
 if (FUNC_4(VAR_4) != 0) {
  FUNC_1(FUNC_3(VAR_4), FUNC_4(VAR_4), VAR_5, 0L, 2L,
      VAR_1, VAR_0, &VAR_6, &VAR_7, &VAR_8,
      &VAR_9, (u_char **) &VAR_10);
  if (VAR_8 == 2 && VAR_10[0] == VAR_2) {
   return VAR_3;
  }
 }

 return VAR_1;

}
