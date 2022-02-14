
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_3(void)
{
 int VAR_5;

 if ((VAR_5 = FUNC_2(&VAR_2)) != 0)
  return (VAR_5);






 if ((VAR_5 = FUNC_1(&VAR_4,
     &VAR_3)) != VAR_1)
  FUNC_0(VAR_0, "sha1 _init: "
      "crypto_register_provider() failed (0x%x)", VAR_5);

 return (0);
}
