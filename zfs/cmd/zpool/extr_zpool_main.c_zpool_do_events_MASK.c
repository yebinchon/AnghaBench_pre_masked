
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int verbose; int scripted; int follow; int clear; char* poolname; int member_0; } ;
typedef TYPE_1__ ev_opts_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

int
FUNC_8(int VAR_5, char **VAR_6)
{
 ev_opts_t VAR_7 = { 0 };
 int VAR_8;
 int VAR_9;


 while ((VAR_9 = FUNC_1(VAR_5, VAR_6, "vHfc")) != -1) {
  switch (VAR_9) {
  case 'v':
   VAR_7.verbose = 1;
   break;
  case 'H':
   VAR_7.scripted = 1;
   break;
  case 'f':
   VAR_7.follow = 1;
   break;
  case 'c':
   VAR_7.clear = 1;
   break;
  case '?':
   (void) FUNC_0(VAR_4, FUNC_2("invalid option '%c'\n"),
       VAR_3);
   FUNC_4(VAR_0);
  }
 }
 VAR_5 -= VAR_2;
 VAR_6 += VAR_2;

 if (VAR_5 > 1) {
  (void) FUNC_0(VAR_4, "%s", FUNC_2("too many arguments\n"));
  FUNC_4(VAR_0);
 } else if (VAR_5 == 1) {
  (void) FUNC_3(VAR_7.poolname, VAR_6[0], sizeof (VAR_7.poolname));
  if (!FUNC_5(VAR_7.poolname, VAR_1)) {
   (void) FUNC_0(VAR_4,
       FUNC_2("invalid pool name '%s'\n"), VAR_7.poolname);
   FUNC_4(VAR_0);
  }
 }

 if ((VAR_5 == 1 || VAR_7.verbose || VAR_7.scripted || VAR_7.follow) &&
     VAR_7.clear) {
  (void) FUNC_0(VAR_4,
      "%s", FUNC_2("invalid options combined with -c\n"));
  FUNC_4(VAR_0);
 }

 if (VAR_7.clear)
  VAR_8 = FUNC_6(&VAR_7);
 else
  VAR_8 = FUNC_7(&VAR_7);

 return (VAR_8);
}
