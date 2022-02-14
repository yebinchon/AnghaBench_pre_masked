
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ z_id; int z_parent_lock; int z_sa_hdl; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_15__ {TYPE_1__* zl_znode; struct TYPE_15__* zl_next; int * zl_rwlock; } ;
typedef TYPE_2__ zfs_zlock_t ;
typedef scalar_t__ uint64_t ;
typedef int oidp ;
typedef int krwlock_t ;
typedef scalar_t__ krw_t ;
struct TYPE_16__ {scalar_t__ z_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int ,int ,scalar_t__*,int) ;
 int FUNC_7 (TYPE_2__**) ;
 int FUNC_8 (TYPE_3__*,scalar_t__,TYPE_1__**) ;

__attribute__((used)) static int
FUNC_9(znode_t *VAR_4, znode_t *VAR_5, znode_t *VAR_6, zfs_zlock_t **VAR_7)
{
 zfs_zlock_t *VAR_8;
 znode_t *VAR_9 = VAR_5;
 uint64_t VAR_10 = FUNC_2(VAR_9)->z_root;
 uint64_t VAR_11 = VAR_9->z_id;
 krwlock_t *VAR_12 = &VAR_4->z_parent_lock;
 krw_t VAR_13 = VAR_3;





 do {
  if (!FUNC_5(VAR_12, VAR_13)) {





   if (VAR_13 == VAR_2 && VAR_9->z_id > VAR_4->z_id) {



    FUNC_7(&VAR_8);
    *VAR_7 = ((void*)0);
    VAR_9 = VAR_5;
    VAR_11 = VAR_9->z_id;
    VAR_12 = &VAR_4->z_parent_lock;
    VAR_13 = VAR_3;
    continue;
   } else {



    FUNC_4(VAR_12, VAR_13);
   }
  }

  VAR_8 = FUNC_3(sizeof (*VAR_8), VAR_1);
  VAR_8->zl_rwlock = VAR_12;
  VAR_8->zl_znode = ((void*)0);
  VAR_8->zl_next = *VAR_7;
  *VAR_7 = VAR_8;

  if (VAR_11 == VAR_4->z_id)
   return (FUNC_1(VAR_0));

  if (VAR_11 == VAR_10)
   return (0);

  if (VAR_13 == VAR_2) {
   int VAR_14 = FUNC_8(FUNC_2(VAR_9), VAR_11, &VAR_9);
   if (VAR_14)
    return (VAR_14);
   VAR_8->zl_znode = VAR_9;
  }
  (void) FUNC_6(VAR_9->z_sa_hdl, FUNC_0(FUNC_2(VAR_9)),
      &VAR_11, sizeof (VAR_11));
  VAR_12 = &VAR_9->z_parent_lock;
  VAR_13 = VAR_2;

 } while (VAR_9->z_id != VAR_6->z_id);

 return (0);
}
