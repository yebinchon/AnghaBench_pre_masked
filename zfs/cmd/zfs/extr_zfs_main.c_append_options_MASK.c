
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,int) ;
 char* FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(char *VAR_3, char *VAR_4)
{
 int VAR_5 = FUNC_3(VAR_3);


 if (VAR_5 + 1 + FUNC_3(VAR_4) >= VAR_1) {
  (void) FUNC_0(VAR_2, FUNC_1("the opts argument for "
      "'%s' option is too long (more than %d chars)\n"),
      "-o", VAR_1);
  FUNC_4(VAR_0);
 }

 if (*VAR_3)
  VAR_3[VAR_5++] = ',';

 (void) FUNC_2(&VAR_3[VAR_5], VAR_4);
}
