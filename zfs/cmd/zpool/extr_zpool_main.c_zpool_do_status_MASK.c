
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cb_count; void* cb_allpools; void* cb_first; void* cb_explain; int * vcdl; void* cb_print_status; void* cb_print_vdev_trim; void* cb_dedup_stats; void* cb_verbose; void* cb_print_slow_ios; int cb_name_flags; void* cb_literal; void* cb_print_vdev_init; int member_0; } ;
typedef TYPE_1__ status_cbdata_t ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int,char**,char*,int *,int *,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char**,void*,int *,int ,TYPE_1__*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (float) ;
 int FUNC_6 (int*,char**,float*,unsigned long*) ;
 int FUNC_7 (char) ;
 int * FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 (int,char**,char*) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 char VAR_8 ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_17 (int ) ;

int
FUNC_18(int VAR_12, char **VAR_13)
{
 int VAR_14;
 int VAR_15;
 float VAR_16 = 0;
 unsigned long VAR_17 = 0;
 status_cbdata_t VAR_18 = { 0 };
 char *VAR_19 = ((void*)0);


 while ((VAR_14 = FUNC_10(VAR_12, VAR_13, "c:igLpPsvxDtT:")) != -1) {
  switch (VAR_14) {
  case 'c':
   if (VAR_19 != ((void*)0)) {
    FUNC_3(VAR_10,
        "%s", FUNC_11("Can't set -c flag twice\n"));
    FUNC_1(1);
   }

   if (FUNC_8("ZPOOL_SCRIPTS_ENABLED") != ((void*)0) &&
       !FUNC_13("ZPOOL_SCRIPTS_ENABLED")) {
    FUNC_3(VAR_10, "%s", FUNC_11(
        "Can't run -c, disabled by "
        "ZPOOL_SCRIPTS_ENABLED.\n"));
    FUNC_1(1);
   }

   if ((FUNC_12() <= 0 || FUNC_9() <= 0) &&
       !FUNC_13("ZPOOL_SCRIPTS_AS_ROOT")) {
    FUNC_3(VAR_10, "%s", FUNC_11(
        "Can't run -c with root privileges "
        "unless ZPOOL_SCRIPTS_AS_ROOT is set.\n"));
    FUNC_1(1);
   }
   VAR_19 = VAR_6;
   break;
  case 'i':
   VAR_18.cb_print_vdev_init = VAR_1;
   break;
  case 'g':
   VAR_18.cb_name_flags |= VAR_4;
   break;
  case 'L':
   VAR_18.cb_name_flags |= VAR_3;
   break;
  case 'p':
   VAR_18.cb_literal = VAR_1;
   break;
  case 'P':
   VAR_18.cb_name_flags |= VAR_5;
   break;
  case 's':
   VAR_18.cb_print_slow_ios = VAR_1;
   break;
  case 'v':
   VAR_18.cb_verbose = VAR_1;
   break;
  case 'x':
   VAR_18.cb_explain = VAR_1;
   break;
  case 'D':
   VAR_18.cb_dedup_stats = VAR_1;
   break;
  case 't':
   VAR_18.cb_print_vdev_trim = VAR_1;
   break;
  case 'T':
   FUNC_7(*VAR_6);
   break;
  case '?':
   if (VAR_8 == 'c') {
    FUNC_15("status");
    FUNC_1(0);
   } else {
    FUNC_3(VAR_10,
        FUNC_11("invalid option '%c'\n"), VAR_8);
   }
   FUNC_17(VAR_0);
  }
 }

 VAR_12 -= VAR_7;
 VAR_13 += VAR_7;

 FUNC_6(&VAR_12, VAR_13, &VAR_16, &VAR_17);

 if (VAR_12 == 0)
  VAR_18.cb_allpools = VAR_1;

 VAR_18.cb_first = VAR_1;
 VAR_18.cb_print_status = VAR_1;

 for (;;) {
  if (VAR_11 != VAR_2)
   FUNC_14(VAR_11);

  if (VAR_19 != ((void*)0))
   VAR_18.vcdl = FUNC_0(VAR_12, VAR_13, VAR_19,
       ((void*)0), ((void*)0), 0, 0);

  VAR_15 = FUNC_2(VAR_12, VAR_13, VAR_1, ((void*)0),
      VAR_9, &VAR_18);

  if (VAR_18.vcdl != ((void*)0))
   FUNC_4(VAR_18.vcdl);

  if (VAR_12 == 0 && VAR_18.cb_count == 0)
   (void) FUNC_3(VAR_10, "%s", FUNC_11("no pools available\n"));
  else if (VAR_18.cb_explain && VAR_18.cb_first && VAR_18.cb_allpools)
   (void) FUNC_16(FUNC_11("all pools are healthy\n"));

  if (VAR_15 != 0)
   return (VAR_15);

  if (VAR_16 == 0)
   break;

  if (VAR_17 != 0 && --VAR_17 == 0)
   break;

  (void) FUNC_5(VAR_16);
 }

 return (0);
}
