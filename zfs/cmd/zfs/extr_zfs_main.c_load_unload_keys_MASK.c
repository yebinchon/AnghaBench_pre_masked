
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_longlong_t ;
struct TYPE_3__ {scalar_t__ cb_numattempted; scalar_t__ cb_numfailed; void* cb_noop; void* cb_recursive; int * cb_keylocation; void* cb_loadkey; int member_0; } ;
typedef TYPE_1__ loadkey_cbdata_t ;
typedef void* boolean_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 int VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*,int ,int ,char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int,char**,int,int,int *,int *,int ,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(int VAR_10, char **VAR_11, boolean_t VAR_12)
{
 int VAR_13, VAR_14 = 0, VAR_15 = 0;
 boolean_t VAR_16 = VAR_0;
 loadkey_cbdata_t VAR_17 = { 0 };

 VAR_17.cb_loadkey = VAR_12;

 while ((VAR_13 = FUNC_1(VAR_10, VAR_11, "anrL:")) != -1) {

  if (VAR_12) {
   switch (VAR_13) {
   case 'n':
    VAR_17.cb_noop = VAR_1;
    continue;
   case 'L':
    VAR_17.cb_keylocation = VAR_6;
    continue;
   default:
    break;
   }
  }

  switch (VAR_13) {
  case 'a':
   VAR_16 = VAR_1;
   VAR_17.cb_recursive = VAR_1;
   break;
  case 'r':
   VAR_15 |= VAR_2;
   VAR_17.cb_recursive = VAR_1;
   break;
  default:
   (void) FUNC_0(VAR_9,
       FUNC_2("invalid option '%c'\n"), VAR_8);
   FUNC_5(VAR_0);
  }
 }

 VAR_10 -= VAR_7;
 VAR_11 += VAR_7;

 if (!VAR_16 && VAR_10 == 0) {
  (void) FUNC_0(VAR_9,
      "%s", FUNC_2("Missing dataset argument or -a option\n"));
  FUNC_5(VAR_0);
 }

 if (VAR_16 && VAR_10 != 0) {
  (void) FUNC_0(VAR_9,
      "%s", FUNC_2("Cannot specify dataset with -a option\n"));
  FUNC_5(VAR_0);
 }

 if (VAR_17.cb_recursive && VAR_17.cb_keylocation != ((void*)0) &&
     FUNC_4(VAR_17.cb_keylocation, "prompt") != 0) {
  (void) FUNC_0(VAR_9, "%s", FUNC_2("alternate keylocation may only "
      "be 'prompt' with -r or -a\n"));
  FUNC_5(VAR_0);
 }

 VAR_14 = FUNC_6(VAR_10, VAR_11, VAR_15,
     VAR_3 | VAR_4, ((void*)0), ((void*)0), 0,
     VAR_5, &VAR_17);

 if (VAR_17.cb_noop || (VAR_17.cb_recursive && VAR_17.cb_numattempted != 0)) {
  (void) FUNC_3(FUNC_2("%llu / %llu key(s) successfully %s\n"),
      (u_longlong_t)(VAR_17.cb_numattempted - VAR_17.cb_numfailed),
      (u_longlong_t)VAR_17.cb_numattempted,
      VAR_12 ? (VAR_17.cb_noop ? "verified" : "loaded") :
      "unloaded");
 }

 if (VAR_17.cb_numfailed != 0)
  VAR_14 = -1;

 return (VAR_14);
}
