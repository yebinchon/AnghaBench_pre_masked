
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uncomp ;
typedef int uint64_t ;
typedef char* u_longlong_t ;
typedef int objset_t ;
typedef int comp ;
typedef int bytes ;
struct TYPE_2__ {int bpo_num_blkptrs; scalar_t__ bpo_num_freed; scalar_t__ bpo_num_subobjs; scalar_t__ bpo_subobjs; int bpo_uncomp; int bpo_comp; int bpo_bytes; } ;
typedef TYPE_1__ bpobj_phys_t ;
typedef int bp ;
typedef int blkptr_t ;
typedef int blkbuf ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int *,int,int,int,int *,int ) ;
 int* VAR_4 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int,int *,int ) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_6(objset_t *VAR_5, uint64_t VAR_6, void *VAR_7, size_t VAR_8)
{
 bpobj_phys_t *VAR_9 = VAR_7;
 uint64_t VAR_10;
 char VAR_11[32], VAR_12[32], VAR_13[32];


 FUNC_1(sizeof (VAR_11) >= VAR_3);
 FUNC_1(sizeof (VAR_12) >= VAR_3);
 FUNC_1(sizeof (VAR_13) >= VAR_3);

 if (VAR_9 == ((void*)0))
  return;

 FUNC_5(VAR_9->bpo_bytes, VAR_11, sizeof (VAR_11));
 FUNC_5(VAR_9->bpo_comp, VAR_12, sizeof (VAR_12));
 FUNC_5(VAR_9->bpo_uncomp, VAR_13, sizeof (VAR_13));

 (void) FUNC_3("\t\tnum_blkptrs = %llu\n",
     (u_longlong_t)VAR_9->bpo_num_blkptrs);
 (void) FUNC_3("\t\tbytes = %s\n", VAR_11);
 if (VAR_8 >= VAR_0) {
  (void) FUNC_3("\t\tcomp = %s\n", VAR_12);
  (void) FUNC_3("\t\tuncomp = %s\n", VAR_13);
 }
 if (VAR_8 >= VAR_1) {
  (void) FUNC_3("\t\tsubobjs = %llu\n",
      (u_longlong_t)VAR_9->bpo_subobjs);
  (void) FUNC_3("\t\tnum_subobjs = %llu\n",
      (u_longlong_t)VAR_9->bpo_num_subobjs);
 }
 if (VAR_8 >= sizeof (*VAR_9)) {
  (void) FUNC_3("\t\tnum_freed = %llu\n",
      (u_longlong_t)VAR_9->bpo_num_freed);
 }

 if (VAR_4['d'] < 5)
  return;

 for (VAR_10 = 0; VAR_10 < VAR_9->bpo_num_blkptrs; VAR_10++) {
  char VAR_14[VAR_2];
  blkptr_t VAR_15;

  int VAR_16 = FUNC_2(VAR_5, VAR_6,
      VAR_10 * sizeof (VAR_15), sizeof (VAR_15), &VAR_15, 0);
  if (VAR_16 != 0) {
   (void) FUNC_3("got error %u from dmu_read\n", VAR_16);
   break;
  }
  FUNC_4(VAR_14, sizeof (VAR_14), &VAR_15,
      FUNC_0(&VAR_15));
  (void) FUNC_3("\t%s\n", VAR_14);
 }
}
