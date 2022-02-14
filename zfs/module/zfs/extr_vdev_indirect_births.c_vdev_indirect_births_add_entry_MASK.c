
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vibe ;
struct TYPE_13__ {TYPE_3__* vib_entries; TYPE_1__* vib_phys; int vib_object; int vib_objset; int vib_dbuf; } ;
typedef TYPE_2__ vdev_indirect_births_t ;
struct TYPE_14__ {scalar_t__ vibe_phys_birth_txg; scalar_t__ vibe_offset; } ;
typedef TYPE_3__ vdev_indirect_birth_entry_phys_t ;
typedef scalar_t__ uint64_t ;
typedef int dmu_tx_t ;
struct TYPE_12__ {int vib_count; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,TYPE_3__*,scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,scalar_t__,int,TYPE_3__*,int *) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_3__* FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (TYPE_3__*,scalar_t__) ;

void
FUNC_11(vdev_indirect_births_t *VAR_1,
    uint64_t VAR_2, uint64_t VAR_3, dmu_tx_t *VAR_4)
{
 vdev_indirect_birth_entry_phys_t VAR_5;
 uint64_t VAR_6;
 uint64_t VAR_7;
 vdev_indirect_birth_entry_phys_t *VAR_8;

 FUNC_0(FUNC_3(VAR_4));
 FUNC_0(FUNC_6(FUNC_4(VAR_4)));
 FUNC_0(FUNC_8(VAR_1));

 FUNC_2(VAR_1->vib_dbuf, VAR_4);

 VAR_5.vibe_offset = VAR_2;
 VAR_5.vibe_phys_birth_txg = VAR_3;

 VAR_6 = FUNC_7(VAR_1);
 FUNC_5(VAR_1->vib_objset, VAR_1->vib_object, VAR_6, sizeof (VAR_5),
     &VAR_5, VAR_4);
 VAR_1->vib_phys->vib_count++;
 VAR_7 = FUNC_7(VAR_1);

 VAR_8 = FUNC_9(VAR_7, VAR_0);
 if (VAR_6 > 0) {
  FUNC_1(VAR_1->vib_entries, VAR_8, VAR_6);
  FUNC_10(VAR_1->vib_entries, VAR_6);
 }
 VAR_8[VAR_1->vib_phys->vib_count - 1] = VAR_5;
 VAR_1->vib_entries = VAR_8;
}
