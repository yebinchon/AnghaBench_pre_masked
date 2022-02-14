
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_2 (int,int,int ,int) ;
 int FUNC_3 (scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_4(int VAR_1, int VAR_2)
{
 if (!VAR_0) {
  VAR_0 = FUNC_2(VAR_1, 1, 0, VAR_2);
  if (!VAR_0)
   FUNC_0("Failed to create separator window");

 } else {
  FUNC_3(VAR_0, VAR_1, 1);
  FUNC_1(VAR_0, 0, VAR_2);
 }
}
