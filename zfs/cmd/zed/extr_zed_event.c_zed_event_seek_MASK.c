
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int uint64_t ;
struct zed_conf {int zevent_fd; int zfs_hdl; } ;
typedef int nvlist_t ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*,scalar_t__**,int*) ;
 scalar_t__ FUNC_2 (int *,char*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,int **,int*,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;

int
FUNC_7(struct zed_conf *VAR_7, uint64_t VAR_8, int64_t VAR_9[])
{
 uint64_t VAR_10;
 int VAR_11;
 nvlist_t *VAR_12;
 int VAR_13;
 int64_t *VAR_14;
 uint_t VAR_15;
 int VAR_16;

 if (!VAR_7) {
  VAR_6 = VAR_0;
  FUNC_4(VAR_1, "Failed to seek zevent: %s",
      FUNC_3(VAR_6));
  return (-1);
 }
 VAR_10 = 0;
 VAR_11 = 0;
 while ((VAR_10 < VAR_8) && !VAR_11) {
  VAR_16 = FUNC_5(VAR_7->zfs_hdl, &VAR_12, &VAR_13,
      VAR_4, VAR_7->zevent_fd);

  if ((VAR_16 != 0) || !VAR_12)
   break;

  if (VAR_13 > 0) {
   FUNC_4(VAR_3, "Missed %d events", VAR_13);




  }
  if (FUNC_2(VAR_12, "eid", &VAR_10) != 0) {
   FUNC_4(VAR_3, "Failed to lookup zevent eid");
  } else if (FUNC_1(VAR_12, "time",
      &VAR_14, &VAR_15) != 0) {
   FUNC_4(VAR_3,
       "Failed to lookup zevent time (eid=%llu)", VAR_10);
  } else if (VAR_15 != 2) {
   FUNC_4(VAR_3,
       "Failed to lookup zevent time (eid=%llu, nelem=%u)",
       VAR_10, VAR_15);
  } else if ((VAR_10 != VAR_8) ||
      (VAR_14[0] != VAR_9[0]) ||
      (VAR_14[1] != VAR_9[1])) {

  } else {
   VAR_11 = 1;
  }
  FUNC_0(VAR_12);
 }
 if (!VAR_11 && (VAR_8 > 0)) {
  if (FUNC_6(VAR_7->zfs_hdl, VAR_5,
      VAR_7->zevent_fd) < 0)
   FUNC_4(VAR_3, "Failed to seek to eid=0");
  else
   VAR_10 = 0;
 }
 FUNC_4(VAR_2, "Processing events since eid=%llu", VAR_10);
 return (VAR_11 ? 0 : -1);
}
