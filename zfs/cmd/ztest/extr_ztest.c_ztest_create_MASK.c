
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ od_object; int od_name; int od_crgen; int od_gen; int od_crblocksize; int od_blocksize; int od_crtype; int od_type; int od_crdnodesize; int od_dir; } ;
typedef TYPE_1__ ztest_od_t ;
struct TYPE_11__ {int zd_dirobj_lock; } ;
typedef TYPE_2__ ztest_ds_t ;
struct TYPE_12__ {scalar_t__ lr_foid; int * lr_crtime; int lr_gen; int lrz_dnodesize; int lrz_bonustype; int lrz_ibshift; int lrz_blocksize; int lrz_type; int lr_doid; } ;
typedef TYPE_3__ lr_create_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_3__*,int,int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_3__*,int ) ;

__attribute__((used)) static int
FUNC_7(ztest_ds_t *VAR_2, ztest_od_t *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;

 FUNC_0(FUNC_1(&VAR_2->zd_dirobj_lock));

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++, VAR_3++) {
  if (VAR_5) {
   VAR_3->od_object = 0;
   VAR_5++;
   continue;
  }

  lr_create_t *VAR_7 = FUNC_3(sizeof (*VAR_7), VAR_3->od_name);

  VAR_7->lr_doid = VAR_3->od_dir;
  VAR_7->lr_foid = 0;
  VAR_7->lrz_type = VAR_3->od_crtype;
  VAR_7->lrz_blocksize = VAR_3->od_crblocksize;
  VAR_7->lrz_ibshift = FUNC_5();
  VAR_7->lrz_bonustype = VAR_1;
  VAR_7->lrz_dnodesize = VAR_3->od_crdnodesize;
  VAR_7->lr_gen = VAR_3->od_crgen;
  VAR_7->lr_crtime[0] = FUNC_2(((void*)0));

  if (FUNC_6(VAR_2, VAR_7, VAR_0) != 0) {
   FUNC_0(VAR_5 == 0);
   VAR_3->od_object = 0;
   VAR_5++;
  } else {
   VAR_3->od_object = VAR_7->lr_foid;
   VAR_3->od_type = VAR_3->od_crtype;
   VAR_3->od_blocksize = VAR_3->od_crblocksize;
   VAR_3->od_gen = VAR_3->od_crgen;
   FUNC_0(VAR_3->od_object != 0);
  }

  FUNC_4(VAR_7, sizeof (*VAR_7), VAR_3->od_name);
 }

 return (VAR_5);
}
