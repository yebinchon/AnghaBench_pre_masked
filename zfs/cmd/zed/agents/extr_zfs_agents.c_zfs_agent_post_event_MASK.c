
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
typedef int nvlist_t ;
typedef scalar_t__ int64_t ;
struct TYPE_7__ {char const* gs_devid; int gs_vdev_type; scalar_t__ gs_vdev_expandtime; int gs_vdev_guid; int gs_pool_guid; int member_0; } ;
typedef TYPE_1__ guid_search_t ;
typedef int device_type_t ;
struct TYPE_8__ {int ae_subclass; int ae_class; int * ae_nvl; } ;
typedef TYPE_2__ agent_event_t ;





 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char const* VAR_11 ;
 char const* VAR_12 ;
 char const* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_19 ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (int *,int ,scalar_t__*,int) ;
 int FUNC_5 (int *,int ,char const*) ;
 int FUNC_6 (int *,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int **,int ) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ,char const**) ;
 int FUNC_10 (int *,int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (char const*,char*) ;
 int FUNC_15 (int ,char const*,int) ;
 int FUNC_16 (int ,char*,char*,char const*) ;
 int VAR_20 ;
 int FUNC_17 (int ,int ,TYPE_1__*) ;

void
FUNC_18(const char *VAR_21, const char *VAR_22, nvlist_t *VAR_23)
{
 agent_event_t *VAR_24;

 if (VAR_22 == ((void*)0))
  VAR_22 = "";

 VAR_24 = FUNC_3(sizeof (agent_event_t));
 if (VAR_24 == ((void*)0) || FUNC_7(VAR_23, &VAR_24->ae_nvl, 0) != 0) {
  if (VAR_24)
   FUNC_0(VAR_24);
  return;
 }

 if (FUNC_14(VAR_21, "sysevent.fs.zfs.vdev_check") == 0) {
  VAR_21 = VAR_2;
  VAR_22 = VAR_4;
 }







 if ((FUNC_14(VAR_21, VAR_1) == 0) &&
     (FUNC_14(VAR_22, VAR_3) == 0) &&
     (FUNC_8(VAR_23, VAR_15) ||
     FUNC_8(VAR_23, VAR_0))) {
  nvlist_t *VAR_25 = VAR_24->ae_nvl;
  struct timeval VAR_26;
  int64_t VAR_27[2];
  uint64_t VAR_28 = 0, VAR_29 = 0;
  guid_search_t VAR_30 = { 0 };
  device_type_t VAR_31 = 129;

  VAR_21 = "resource.fs.zfs.removed";
  VAR_22 = "";

  (void) FUNC_5(VAR_25, VAR_5, VAR_21);
  (void) FUNC_10(VAR_23, VAR_14, &VAR_28);
  (void) FUNC_10(VAR_23, VAR_15, &VAR_29);

  (void) FUNC_1(&VAR_26, ((void*)0));
  VAR_27[0] = VAR_26.tv_sec;
  VAR_27[1] = VAR_26.tv_usec;
  (void) FUNC_4(VAR_25, VAR_9, VAR_27, 2);





  (void) FUNC_9(VAR_23, VAR_0,
      &VAR_30.gs_devid);
  (void) FUNC_17(VAR_19, VAR_20, &VAR_30);
  VAR_28 = VAR_30.gs_pool_guid;
  VAR_29 = VAR_30.gs_vdev_guid;
  VAR_31 = VAR_30.gs_vdev_type;







  if (VAR_30.gs_vdev_expandtime != 0 &&
      VAR_30.gs_vdev_expandtime + 10 > VAR_26.tv_sec) {
   FUNC_16(VAR_10, "agent post event: ignoring '%s' "
       "for recently expanded device '%s'", VAR_1,
       VAR_30.gs_devid);
   goto out;
  }

  (void) FUNC_6(VAR_25,
      VAR_6, VAR_28);
  (void) FUNC_6(VAR_25,
      VAR_7, VAR_29);
  switch (VAR_31) {
  case 130:
   (void) FUNC_5(VAR_25,
       VAR_8,
       VAR_12);
   break;
  case 128:
   (void) FUNC_5(VAR_25,
       VAR_8, VAR_13);
   break;
  case 129:
   (void) FUNC_5(VAR_25,
       VAR_8, VAR_11);
   break;
  }

  FUNC_16(VAR_10, "agent post event: mapping '%s' to '%s'",
      VAR_1, VAR_21);
 }

 (void) FUNC_15(VAR_24->ae_class, VAR_21, sizeof (VAR_24->ae_class));
 (void) FUNC_15(VAR_24->ae_subclass, VAR_22,
     sizeof (VAR_24->ae_subclass));

 (void) FUNC_12(&VAR_18);
 FUNC_2(&VAR_17, VAR_24);
 (void) FUNC_13(&VAR_18);

out:
 (void) FUNC_11(&VAR_16);
}
