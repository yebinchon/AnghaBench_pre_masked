
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ cb_type; scalar_t__ cb_scrub_cmd; } ;
typedef TYPE_1__ zpool_wait_activity_t ;
typedef TYPE_1__ scrub_cbdata_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_0 (int,char**,scalar_t__,int *,int ,TYPE_1__*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int,char**,char*) ;
 char* FUNC_3 (char*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_11 ;

int
FUNC_5(int VAR_12, char **VAR_13)
{
 int VAR_14;
 scrub_cbdata_t VAR_15;
 boolean_t VAR_16 = VAR_0;
 int VAR_17;

 VAR_15.cb_type = VAR_3;
 VAR_15.cb_scrub_cmd = VAR_4;


 while ((VAR_14 = FUNC_2(VAR_12, VAR_13, "spw")) != -1) {
  switch (VAR_14) {
  case 's':
   VAR_15.cb_type = VAR_2;
   break;
  case 'p':
   VAR_15.cb_scrub_cmd = VAR_5;
   break;
  case 'w':
   VAR_16 = VAR_1;
   break;
  case '?':
   (void) FUNC_1(VAR_10, FUNC_3("invalid option '%c'\n"),
       VAR_8);
   FUNC_4(VAR_0);
  }
 }

 if (VAR_15.cb_type == VAR_2 &&
     VAR_15.cb_scrub_cmd == VAR_5) {
  (void) FUNC_1(VAR_10, "%s", FUNC_3("invalid option combination: "
      "-s and -p are mutually exclusive\n"));
  FUNC_4(VAR_0);
 }

 if (VAR_16 && (VAR_15.cb_type == VAR_2 ||
     VAR_15.cb_scrub_cmd == VAR_5)) {
  (void) FUNC_1(VAR_10, "%s", FUNC_3("invalid option combination: "
      "-w cannot be used with -p or -s\n"));
  FUNC_4(VAR_0);
 }

 VAR_12 -= VAR_7;
 VAR_13 += VAR_7;

 if (VAR_12 < 1) {
  (void) FUNC_1(VAR_10, "%s", FUNC_3("missing pool name argument\n"));
  FUNC_4(VAR_0);
 }

 VAR_17 = FUNC_0(VAR_12, VAR_13, VAR_1, ((void*)0), VAR_9, &VAR_15);

 if (VAR_16 && !VAR_17) {
  zpool_wait_activity_t VAR_18 = VAR_6;
  VAR_17 = FUNC_0(VAR_12, VAR_13, VAR_1, ((void*)0), VAR_11,
      &VAR_18);
 }

 return (VAR_17);
}
