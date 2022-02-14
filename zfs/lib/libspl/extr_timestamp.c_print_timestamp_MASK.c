
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint_t ;
typedef char* time_t ;
typedef int dstr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,char*,int ) ;
 char* FUNC_4 (int *) ;

void
FUNC_5(uint_t VAR_3)
{
 time_t VAR_4 = FUNC_4(((void*)0));
 static char *VAR_5 = ((void*)0);


 if (VAR_5 == ((void*)0))
  VAR_5 = FUNC_1(VAR_2);

 if (VAR_3 == VAR_1) {
  (void) FUNC_2("%ld\n", VAR_4);
 } else if (VAR_3 == VAR_0) {
  char VAR_6[64];
  int VAR_7;

  VAR_7 = FUNC_3(VAR_6, sizeof (VAR_6), VAR_5, FUNC_0(&VAR_4));
  if (VAR_7 > 0)
   (void) FUNC_2("%s\n", VAR_6);
 }
}
