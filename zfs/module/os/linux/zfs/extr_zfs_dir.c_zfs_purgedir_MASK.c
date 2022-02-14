
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


struct TYPE_19__ {int z_sa_hdl; int z_id; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_20__ {int z_unlinkedobj; int z_os; } ;
typedef TYPE_2__ zfsvfs_t ;
struct TYPE_21__ {int * dl_name; TYPE_1__* dl_dzp; } ;
typedef TYPE_3__ zfs_dirlock_t ;
typedef int zap_cursor_t ;
struct TYPE_22__ {int * za_name; int za_first_integer; } ;
typedef TYPE_4__ zap_attribute_t ;
typedef int dmu_tx_t ;
typedef int dl ;
struct TYPE_18__ {int i_mode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 TYPE_11__* FUNC_4 (TYPE_1__*) ;
 TYPE_2__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,int ,int ,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (int *,TYPE_4__*) ;
 int FUNC_18 (TYPE_11__*) ;
 int FUNC_19 (TYPE_3__*,TYPE_1__*,int *,int ,int *) ;
 int FUNC_20 (int *,TYPE_1__*) ;
 int FUNC_21 (TYPE_2__*,int ,TYPE_1__**) ;

__attribute__((used)) static int
FUNC_22(znode_t *VAR_4)
{
 zap_cursor_t VAR_5;
 zap_attribute_t VAR_6;
 znode_t *VAR_7;
 dmu_tx_t *VAR_8;
 zfsvfs_t *VAR_9 = FUNC_5(VAR_4);
 zfs_dirlock_t VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 for (FUNC_16(&VAR_5, VAR_9->z_os, VAR_4->z_id);
     (VAR_12 = FUNC_17(&VAR_5, &VAR_6)) == 0;
     FUNC_14(&VAR_5)) {
  VAR_12 = FUNC_21(VAR_9,
      FUNC_3(VAR_6.za_first_integer), &VAR_7);
  if (VAR_12) {
   VAR_11 += 1;
   continue;
  }

  FUNC_0(FUNC_2(FUNC_4(VAR_7)->i_mode) ||
      FUNC_1(FUNC_4(VAR_7)->i_mode));

  VAR_8 = FUNC_10(VAR_9->z_os);
  FUNC_11(VAR_8, VAR_4->z_sa_hdl, VAR_0);
  FUNC_12(VAR_8, VAR_4->z_id, VAR_2, VAR_6.za_name);
  FUNC_11(VAR_8, VAR_7->z_sa_hdl, VAR_0);
  FUNC_12(VAR_8, VAR_9->z_unlinkedobj, VAR_2, ((void*)0));

  FUNC_20(VAR_8, VAR_7);
  FUNC_13(VAR_8);
  VAR_12 = FUNC_8(VAR_8, VAR_3);
  if (VAR_12) {
   FUNC_7(VAR_8);
   FUNC_18(FUNC_4(VAR_7));
   VAR_11 += 1;
   continue;
  }
  FUNC_6(&VAR_10, sizeof (VAR_10));
  VAR_10.dl_dzp = VAR_4;
  VAR_10.dl_name = VAR_6.za_name;

  VAR_12 = FUNC_19(&VAR_10, VAR_7, VAR_8, 0, ((void*)0));
  if (VAR_12)
   VAR_11 += 1;
  FUNC_9(VAR_8);

  FUNC_18(FUNC_4(VAR_7));
 }
 FUNC_15(&VAR_5);
 if (VAR_12 != VAR_1)
  VAR_11 += 1;
 return (VAR_11);
}
