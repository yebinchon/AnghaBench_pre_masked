
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int
FUNC_3(void)
{
 int VAR_5;

 if (VAR_4 != 0) {
  if ((VAR_5 = FUNC_1(VAR_4)) !=
      VAR_1) {
   FUNC_0(VAR_0,
       "skein _fini: crypto_unregister_provider() "
       "failed (0x%x)", VAR_5);
   return (VAR_2);
  }
  VAR_4 = 0;
 }

 return (FUNC_2(&VAR_3));
}
