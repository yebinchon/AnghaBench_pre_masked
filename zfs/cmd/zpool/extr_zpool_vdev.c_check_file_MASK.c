
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pool_state_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;




 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (char*,char const*,char const*,...) ;
 scalar_t__ FUNC_5 (int ,int,int*,char**,scalar_t__*) ;

int
FUNC_6(const char *VAR_2, boolean_t VAR_3, boolean_t VAR_4)
{
 char *VAR_5;
 int VAR_6;
 int VAR_7 = 0;
 pool_state_t VAR_8;
 boolean_t VAR_9;

 if ((VAR_6 = FUNC_3(VAR_2, VAR_0)) < 0)
  return (0);

 if (FUNC_5(VAR_1, VAR_6, &VAR_8, &VAR_5, &VAR_9) == 0 && VAR_9) {
  const char *VAR_10;

  switch (VAR_8) {
  case 131:
   VAR_10 = FUNC_2("active");
   break;

  case 130:
   VAR_10 = FUNC_2("exported");
   break;

  case 129:
   VAR_10 = FUNC_2("potentially active");
   break;

  default:
   VAR_10 = FUNC_2("unknown");
   break;
  }




  if (VAR_8 == 128 && VAR_4) {
   FUNC_1(VAR_5);
   (void) FUNC_0(VAR_6);
   return (0);
  }

  if (VAR_8 == 131 ||
      VAR_8 == 128 || !VAR_3) {
   switch (VAR_8) {
   case 128:
    FUNC_4(FUNC_2("%s is reserved as a hot "
        "spare for pool %s\n"), VAR_2, VAR_5);
    break;
   default:
    FUNC_4(FUNC_2("%s is part of %s pool "
        "'%s'\n"), VAR_2, VAR_10, VAR_5);
    break;
   }
   VAR_7 = -1;
  }

  FUNC_1(VAR_5);
 }

 (void) FUNC_0(VAR_6);
 return (VAR_7);
}
