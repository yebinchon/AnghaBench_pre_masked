
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zed_strings_t ;
typedef int uint_t ;
typedef int uint64_t ;
struct zed_conf {char const* zedlet_dir; int zevent_fd; int zedlets; int path; int zfs_hdl; } ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *,int ) ;
 int FUNC_2 (int,int *,int *) ;
 int FUNC_3 (int,int *,int *) ;
 int FUNC_4 (int,int *,int ,char*,char*,...) ;
 char* FUNC_5 (char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,char*,int **,int*) ;
 scalar_t__ FUNC_9 (int *,char*,char**) ;
 scalar_t__ FUNC_10 (int *,char*,int*) ;
 int * FUNC_11 (int *,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct zed_conf*,int,int *) ;
 int FUNC_14 (int,char*,char const*,char const*,int ,int *,int ) ;
 int FUNC_15 (int ,char*,...) ;
 int * FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (char*,int *,int *) ;
 int FUNC_19 (int ,int **,int*,int ,int ) ;

void
FUNC_20(struct zed_conf *VAR_7)
{
 nvlist_t *VAR_8;
 nvpair_t *VAR_9;
 int VAR_10;
 zed_strings_t *VAR_11;
 uint64_t VAR_12;
 int64_t *VAR_13;
 uint_t VAR_14;
 char *VAR_15;
 const char *VAR_16;
 int VAR_17;

 if (!VAR_7) {
  VAR_6 = VAR_0;
  FUNC_15(VAR_1, "Failed to service zevent: %s",
      FUNC_12(VAR_6));
  return;
 }
 VAR_17 = FUNC_19(VAR_7->zfs_hdl, &VAR_8, &VAR_10, VAR_4,
     VAR_7->zevent_fd);

 if ((VAR_17 != 0) || !VAR_8)
  return;

 if (VAR_10 > 0) {
  FUNC_15(VAR_2, "Missed %d events", VAR_10);




 }
 if (FUNC_10(VAR_8, "eid", &VAR_12) != 0) {
  FUNC_15(VAR_2, "Failed to lookup zevent eid");
 } else if (FUNC_8(
     VAR_8, "time", &VAR_13, &VAR_14) != 0) {
  FUNC_15(VAR_2,
      "Failed to lookup zevent time (eid=%llu)", VAR_12);
 } else if (VAR_14 != 2) {
  FUNC_15(VAR_2,
      "Failed to lookup zevent time (eid=%llu, nelem=%u)",
      VAR_12, VAR_14);
 } else if (FUNC_9(VAR_8, "class", &VAR_15) != 0) {
  FUNC_15(VAR_2,
      "Failed to lookup zevent class (eid=%llu)", VAR_12);
 } else {

  FUNC_18(VAR_15, ((void*)0), VAR_8);

  VAR_11 = FUNC_16();

  VAR_9 = ((void*)0);
  while ((VAR_9 = FUNC_11(VAR_8, VAR_9)))
   FUNC_2(VAR_12, VAR_11, VAR_9);

  FUNC_1(VAR_12, VAR_11, VAR_7->path);
  FUNC_0(VAR_12, VAR_11);

  FUNC_4(VAR_12, VAR_11, VAR_3, "PID",
      "%d", (int)FUNC_6());
  FUNC_4(VAR_12, VAR_11, VAR_3, "ZEDLET_DIR",
      "%s", VAR_7->zedlet_dir);
  VAR_16 = FUNC_5(VAR_15);
  FUNC_4(VAR_12, VAR_11, VAR_5, "SUBCLASS",
      "%s", (VAR_16 ? VAR_16 : VAR_15));

  FUNC_3(VAR_12, VAR_11, VAR_13);

  FUNC_14(VAR_12, VAR_15, VAR_16,
      VAR_7->zedlet_dir, VAR_7->zedlets, VAR_11, VAR_7->zevent_fd);

  FUNC_13(VAR_7, VAR_12, VAR_13);

  FUNC_17(VAR_11);
 }
 FUNC_7(VAR_8);
}
