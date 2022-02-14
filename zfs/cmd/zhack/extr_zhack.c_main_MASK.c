
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char** path; int paths; void* cachefile; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,char**) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int ,char*,...) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 () ;
 void* VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (int ,int *,int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (int,char**) ;

int
FUNC_10(int VAR_10, char **VAR_11)
{
 extern void FUNC_0(void);

 char *VAR_12[VAR_3];
 const char *VAR_13;
 int VAR_14 = 0;
 int VAR_15;

 VAR_4.path = VAR_12;

 FUNC_1(&VAR_10, VAR_11);
 FUNC_0();

 while ((VAR_15 = FUNC_4(VAR_10, VAR_11, "+c:d:")) != -1) {
  switch (VAR_15) {
  case 'c':
   VAR_4.cachefile = VAR_7;
   break;
  case 'd':
   FUNC_0(VAR_4.paths < VAR_3);
   VAR_4.path[VAR_4.paths++] = VAR_7;
   break;
  default:
   FUNC_8();
   break;
  }
 }

 VAR_10 -= VAR_8;
 VAR_11 += VAR_8;
 VAR_8 = 1;

 if (VAR_10 == 0) {
  (void) FUNC_3(VAR_9, "error: no command specified\n");
  FUNC_8();
 }

 VAR_13 = VAR_11[0];

 if (FUNC_7(VAR_13, "feature") == 0) {
  VAR_14 = FUNC_9(VAR_10, VAR_11);
 } else {
  (void) FUNC_3(VAR_9, "error: unknown subcommand: %s\n",
      VAR_13);
  FUNC_8();
 }

 if (!VAR_6 && FUNC_6(VAR_5, ((void*)0), VAR_1, VAR_0) != 0) {
  FUNC_2(((void*)0), VAR_2, "pool export failed; "
      "changes may not be committed to disk\n");
 }

 FUNC_5();

 return (VAR_14);
}
