
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int zprop_source_t ;
typedef size_t zfs_share_proto_t ;
struct TYPE_12__ {int zfs_name; TYPE_2__* zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int shareopts ;
typedef int * sa_share_t ;
typedef int mountpoint ;
struct TYPE_13__ {int libzfs_sharehdl; int libzfs_shareflags; } ;
typedef TYPE_2__ libzfs_handle_t ;
struct TYPE_11__ {int p_share_err; int p_name; int p_prop; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 TYPE_10__* VAR_9 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int *,int *,char*,int ,int ,char*,char*,int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ,...) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_1__*,char*,int,int *,int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ,char*,int,int *,char*,int,int ) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int ) ;

int
FUNC_12(zfs_handle_t *VAR_10, zfs_share_proto_t *VAR_11)
{
 char VAR_12[VAR_7];
 char VAR_13[VAR_7];
 char VAR_14[VAR_7];
 libzfs_handle_t *VAR_15 = VAR_10->zfs_hdl;
 sa_share_t VAR_16;
 zfs_share_proto_t *VAR_17;
 zprop_source_t VAR_18;
 int VAR_19, VAR_20;

 if (!FUNC_9(VAR_10, VAR_12, sizeof (VAR_12), ((void*)0), 0))
  return (0);

 for (VAR_17 = VAR_11; *VAR_17 != VAR_2; VAR_17++) {



  if (FUNC_10(VAR_10, VAR_9[*VAR_17].p_prop,
      VAR_13, sizeof (VAR_13), &VAR_18, VAR_14,
      VAR_7, VAR_0) != 0 ||
      FUNC_5(VAR_13, "off") == 0)
   continue;

  VAR_20 = FUNC_8(VAR_15, VAR_3);
  if (VAR_20 != VAR_4) {
   (void) FUNC_6(VAR_15, VAR_1,
       FUNC_0(VAR_5, "cannot share '%s': %s"),
       FUNC_7(VAR_10), FUNC_2(VAR_20));
   return (-1);
  }







  if (FUNC_11(VAR_10, VAR_8))
   continue;

  VAR_16 = FUNC_3(VAR_15->libzfs_sharehdl, VAR_12);
  if (VAR_16 == ((void*)0)) {
   if (FUNC_4(VAR_15->libzfs_sharehdl,
       ((void*)0), ((void*)0), VAR_12,
       VAR_9[*VAR_17].p_name, VAR_18,
       VAR_13, VAR_14, VAR_10->zfs_name) != VAR_4) {
    (void) FUNC_6(VAR_15,
        VAR_9[*VAR_17].p_share_err,
        FUNC_0(VAR_5, "cannot share '%s'"),
        FUNC_7(VAR_10));
    return (-1);
   }
   VAR_15->libzfs_shareflags |= VAR_6;
   VAR_16 = FUNC_3(VAR_15->libzfs_sharehdl,
       VAR_12);
  }
  if (VAR_16 != ((void*)0)) {
   VAR_19 = FUNC_1(VAR_16,
       VAR_9[*VAR_17].p_name);
   if (VAR_19 != VAR_4) {
    (void) FUNC_6(VAR_15,
        VAR_9[*VAR_17].p_share_err,
        FUNC_0(VAR_5, "cannot share '%s'"),
        FUNC_7(VAR_10));
    return (-1);
   }
  } else {
   (void) FUNC_6(VAR_15,
       VAR_9[*VAR_17].p_share_err,
       FUNC_0(VAR_5, "cannot share '%s'"),
       FUNC_7(VAR_10));
   return (-1);
  }

 }
 return (0);
}
