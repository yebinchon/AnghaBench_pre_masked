
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int FUNC_2 (int) ;

int
FUNC_3(int VAR_4)
{
 int VAR_5 = 10;
 int VAR_6;


 while ((VAR_6 = FUNC_1(VAR_4, VAR_0)) != 0) {
  if ((--VAR_5 == 0) || (VAR_2 != VAR_1)) {
   (void) FUNC_0(VAR_3, "the kernel failed to rescan "
       "the partition table: %ld\n", VAR_2);
   return (-1);
  }
  FUNC_2(50000);
 }

 return (0);
}
