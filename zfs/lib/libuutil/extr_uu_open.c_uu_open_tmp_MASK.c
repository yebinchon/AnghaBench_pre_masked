
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int ,char*,char const*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ) ;

int
FUNC_6(const char *VAR_6, uint_t VAR_7)
{
 int VAR_8;
 char *VAR_9 = FUNC_5(VAR_4);

 if (VAR_9 == ((void*)0))
  return (-1);

 for (;;) {
  (void) FUNC_2(VAR_9, VAR_4, "%s/uu%lld", VAR_6, FUNC_0());

  VAR_8 = FUNC_1(VAR_9, VAR_1 | VAR_2 | VAR_3, 0600);

  if (VAR_8 >= 0 || VAR_5 != VAR_0)
   break;
 }

 if (VAR_8 >= 0)
  (void) FUNC_3(VAR_9);

 FUNC_4(VAR_9);

 return (VAR_8);
}
