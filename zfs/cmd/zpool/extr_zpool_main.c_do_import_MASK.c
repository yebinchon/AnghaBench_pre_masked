
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef void* uint64_t ;
typedef int time_t ;
typedef int nvlist_t ;
typedef scalar_t__ mmp_state_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 char* FUNC_3 (int *,int ) ;
 void* FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,char*,char*,...) ;
 int VAR_16 ;
 char* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int VAR_17 ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,char const*,int ) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int ,int *,char const*,int *,int) ;
 int * FUNC_14 (int ,char*) ;

__attribute__((used)) static int
FUNC_15(nvlist_t *VAR_18, const char *VAR_19, const char *VAR_20,
    nvlist_t *VAR_21, int VAR_22)
{
 int VAR_23 = 0;
 zpool_handle_t *VAR_24;
 char *VAR_25;
 uint64_t VAR_26;

 VAR_25 = FUNC_3(VAR_18, VAR_13);
 VAR_26 = FUNC_4(VAR_18, VAR_15);

 if (!FUNC_0(VAR_26)) {
  (void) FUNC_5(VAR_17, FUNC_6("cannot import '%s': pool "
      "is formatted using an unsupported ZFS version\n"), VAR_25);
  return (1);
 } else if (FUNC_9(VAR_18) &&
     !(VAR_22 & VAR_4)) {
  mmp_state_t VAR_27 = VAR_1;
  nvlist_t *VAR_28;

  VAR_28 = FUNC_2(VAR_18, VAR_9);
  if (FUNC_7(VAR_28, VAR_12))
   VAR_27 = FUNC_4(VAR_28,
       VAR_12);

  if (VAR_27 == VAR_0) {
   char *VAR_29 = "<unknown>";
   uint64_t VAR_30 = 0;

   if (FUNC_7(VAR_28, VAR_11))
    VAR_29 = FUNC_3(VAR_28,
        VAR_11);

   if (FUNC_7(VAR_28, VAR_10))
    VAR_30 = FUNC_4(VAR_28,
        VAR_10);

   (void) FUNC_5(VAR_17, FUNC_6("cannot import '%s': "
       "pool is imported on %s (hostid: "
       "0x%lx)\nExport the pool on the other system, "
       "then run 'zpool import'.\n"),
       VAR_25, VAR_29, (unsigned long) VAR_30);
  } else if (VAR_27 == VAR_2) {
   (void) FUNC_5(VAR_17, FUNC_6("Cannot import '%s': "
       "pool has the multihost property on and the\n"
       "system's hostid is not set. Set a unique hostid "
       "with the zgenhostid(8) command.\n"), VAR_25);
  } else {
   char *VAR_31 = "<unknown>";
   uint64_t VAR_32 = 0;
   uint64_t VAR_33 = 0;

   if (FUNC_7(VAR_18, VAR_8))
    VAR_31 = FUNC_3(VAR_18,
        VAR_8);

   if (FUNC_7(VAR_18, VAR_14))
    VAR_32 = FUNC_4(VAR_18,
        VAR_14);

   if (FUNC_7(VAR_18, VAR_7))
    VAR_33 = FUNC_4(VAR_18,
        VAR_7);

   (void) FUNC_5(VAR_17, FUNC_6("cannot import '%s': "
       "pool was previously in use from another system.\n"
       "Last accessed by %s (hostid=%lx) at %s"
       "The pool can be imported, use 'zpool import -f' "
       "to import the pool.\n"), VAR_25, VAR_31,
       (unsigned long)VAR_33, FUNC_1((time_t *)&VAR_32));
  }

  return (1);
 }

 if (FUNC_13(VAR_16, VAR_18, VAR_19, VAR_21, VAR_22) != 0)
  return (1);

 if (VAR_19 != ((void*)0))
  VAR_25 = (char *)VAR_19;

 if ((VAR_24 = FUNC_14(VAR_16, VAR_25)) == ((void*)0))
  return (1);





 if (VAR_22 & VAR_5) {
  VAR_23 = FUNC_8(VAR_16, VAR_25);
  if (VAR_23 != 0)
   VAR_23 = 1;
 }

 if (FUNC_12(VAR_24) != VAR_3 &&
     !(VAR_22 & VAR_6) &&
     FUNC_11(VAR_24, VAR_20, 0) != 0) {
  FUNC_10(VAR_24);
  return (1);
 }

 FUNC_10(VAR_24);
 return (VAR_23);
}
