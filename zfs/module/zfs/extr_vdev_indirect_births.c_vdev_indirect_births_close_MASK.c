
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* vib_phys; int * vib_dbuf; scalar_t__ vib_object; int * vib_objset; int * vib_entries; } ;
typedef TYPE_2__ vdev_indirect_births_t ;
typedef int uint64_t ;
struct TYPE_8__ {scalar_t__ vib_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int ) ;

void
FUNC_6(vdev_indirect_births_t *VAR_0)
{
 FUNC_0(FUNC_4(VAR_0));

 if (VAR_0->vib_phys->vib_count > 0) {
  uint64_t VAR_1 = FUNC_3(VAR_0);

  FUNC_5(VAR_0->vib_entries, VAR_1);
  VAR_0->vib_entries = ((void*)0);
 }

 FUNC_1(VAR_0->vib_dbuf, VAR_0);

 VAR_0->vib_objset = ((void*)0);
 VAR_0->vib_object = 0;
 VAR_0->vib_dbuf = ((void*)0);
 VAR_0->vib_phys = ((void*)0);

 FUNC_2(VAR_0, sizeof (*VAR_0));
}
