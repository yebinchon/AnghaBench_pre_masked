
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int zo_verbose; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*,int ) ;
 int * FUNC_4 (char*,int,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 char* VAR_3 ;
 int FUNC_8 (char*,char*,char*,char*,char*,char*,char*) ;
 char* FUNC_9 (char*,char*) ;
 char* FUNC_10 (int const,int ) ;
 int FUNC_11 (char*,int const) ;
 scalar_t__ VAR_4 ;
 int FUNC_12 (char*,int const) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void
FUNC_13(char *VAR_6)
{
 int VAR_7;
 char *VAR_8;
 char *VAR_9;
 char *VAR_10;
 const int VAR_11 = VAR_1 + VAR_0 + 20;
 FILE *VAR_12;

 VAR_8 = FUNC_10(VAR_11, VAR_2);
 VAR_9 = FUNC_10(VAR_11, VAR_2);
 VAR_10 = FUNC_10(1024, VAR_2);

 FUNC_12(VAR_8, VAR_11);

 (void) FUNC_8(VAR_9,
     "%s -bcc%s%s -G -d -Y -U %s %s",
     VAR_8,
     VAR_5.zo_verbose >= 3 ? "s" : "",
     VAR_5.zo_verbose >= 4 ? "v" : "",
     VAR_3,
     VAR_6);

 if (VAR_5.zo_verbose >= 5)
  (void) FUNC_7("Executing %s\n", FUNC_9(VAR_9, "zdb "));

 VAR_12 = FUNC_6(VAR_9, "r");

 while (FUNC_4(VAR_10, 1024, VAR_12) != ((void*)0))
  if (VAR_5.zo_verbose >= 3)
   (void) FUNC_7("%s", VAR_10);

 VAR_7 = FUNC_5(VAR_12);

 if (VAR_7 == 0)
  goto out;

 VAR_4 = 0;
 if (FUNC_1(VAR_7))
  FUNC_3(0, "'%s' exit code %d", VAR_9, FUNC_0(VAR_7));
 else
  FUNC_3(0, "'%s' died with signal %d", VAR_9, FUNC_2(VAR_7));
out:
 FUNC_11(VAR_8, VAR_11);
 FUNC_11(VAR_9, VAR_11);
 FUNC_11(VAR_10, 1024);
}
