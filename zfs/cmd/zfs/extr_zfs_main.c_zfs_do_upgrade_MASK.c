
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cb_version; scalar_t__ cb_numfailed; void* cb_foundone; void* cb_newer; scalar_t__ cb_numsamegraded; scalar_t__ cb_numupgraded; int member_0; } ;
typedef TYPE_1__ upgrade_cbdata_t ;
typedef int u_longlong_t ;
typedef void* boolean_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,char**,char*) ;
 char* FUNC_2 (char*) ;
 char* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (char*,...) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int,char**,int,int ,int *,int *,int ,int ,TYPE_1__*) ;
 int FUNC_6 (int ,char*,int*) ;

__attribute__((used)) static int
FUNC_7(int VAR_13, char **VAR_14)
{
 boolean_t VAR_15 = VAR_0;
 boolean_t VAR_16 = VAR_0;
 int VAR_17 = 0;
 upgrade_cbdata_t VAR_18 = { 0 };
 int VAR_19;
 int VAR_20 = VAR_2;


 while ((VAR_19 = FUNC_1(VAR_13, VAR_14, "rvV:a")) != -1) {
  switch (VAR_19) {
  case 'r':
   VAR_20 |= VAR_3;
   break;
  case 'v':
   VAR_16 = VAR_1;
   break;
  case 'V':
   if (FUNC_6(VAR_4,
       VAR_7, &VAR_18.cb_version) != 0) {
    (void) FUNC_0(VAR_10,
        FUNC_2("invalid version %s\n"), VAR_7);
    FUNC_4(VAR_0);
   }
   break;
  case 'a':
   VAR_15 = VAR_1;
   break;
  case '?':
  default:
   (void) FUNC_0(VAR_10, FUNC_2("invalid option '%c'\n"),
       VAR_9);
   FUNC_4(VAR_0);
  }
 }

 VAR_13 -= VAR_8;
 VAR_14 += VAR_8;

 if ((!VAR_15 && !VAR_13) && ((VAR_20 & VAR_3) | VAR_18.cb_version))
  FUNC_4(VAR_0);
 if (VAR_16 && (VAR_20 & VAR_3 || VAR_15 ||
     VAR_18.cb_version || VAR_13))
  FUNC_4(VAR_0);
 if ((VAR_15 || VAR_13) && (VAR_16))
  FUNC_4(VAR_0);
 if (VAR_15 && VAR_13)
  FUNC_4(VAR_0);

 if (VAR_16) {

  (void) FUNC_3(FUNC_2("The following filesystem versions are "
      "supported:\n\n"));
  (void) FUNC_3(FUNC_2("VER  DESCRIPTION\n"));
  (void) FUNC_3("---  -----------------------------------------"
      "---------------\n");
  (void) FUNC_3(FUNC_2(" 1   Initial ZFS filesystem version\n"));
  (void) FUNC_3(FUNC_2(" 2   Enhanced directory entries\n"));
  (void) FUNC_3(FUNC_2(" 3   Case insensitive and filesystem "
      "user identifier (FUID)\n"));
  (void) FUNC_3(FUNC_2(" 4   userquota, groupquota "
      "properties\n"));
  (void) FUNC_3(FUNC_2(" 5   System attributes\n"));
  (void) FUNC_3(FUNC_2("\nFor more information on a particular "
      "version, including supported releases,\n"));
  (void) FUNC_3("see the ZFS Administration Guide.\n\n");
  VAR_17 = 0;
 } else if (VAR_13 || VAR_15) {

  if (VAR_18.cb_version == 0)
   VAR_18.cb_version = VAR_6;
  VAR_17 = FUNC_5(VAR_13, VAR_14, VAR_20, VAR_5,
      ((void*)0), ((void*)0), 0, VAR_12, &VAR_18);
  (void) FUNC_3(FUNC_2("%llu filesystems upgraded\n"),
      (u_longlong_t)VAR_18.cb_numupgraded);
  if (VAR_18.cb_numsamegraded) {
   (void) FUNC_3(FUNC_2("%llu filesystems already at "
       "this version\n"),
       (u_longlong_t)VAR_18.cb_numsamegraded);
  }
  if (VAR_18.cb_numfailed != 0)
   VAR_17 = 1;
 } else {

  boolean_t VAR_21;
  (void) FUNC_3(FUNC_2("This system is currently running "
      "ZFS filesystem version %llu.\n\n"), VAR_6);

  VAR_20 |= VAR_3;
  VAR_17 = FUNC_5(0, ((void*)0), VAR_20, VAR_5,
      ((void*)0), ((void*)0), 0, VAR_11, &VAR_18);

  VAR_21 = VAR_18.cb_foundone;
  VAR_18.cb_foundone = VAR_0;
  VAR_18.cb_newer = VAR_1;

  VAR_17 = FUNC_5(0, ((void*)0), VAR_20, VAR_5,
      ((void*)0), ((void*)0), 0, VAR_11, &VAR_18);

  if (!VAR_18.cb_foundone && !VAR_21) {
   (void) FUNC_3(FUNC_2("All filesystems are "
       "formatted with the current version.\n"));
  }
 }

 return (VAR_17);
}
