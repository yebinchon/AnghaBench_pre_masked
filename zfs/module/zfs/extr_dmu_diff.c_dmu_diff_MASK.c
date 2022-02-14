
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct vnode {int dummy; } ;
struct TYPE_3__ {scalar_t__ ddr_last; scalar_t__ ddr_first; int ddr_type; } ;
struct diffarg {int da_err; TYPE_1__ da_ddr; int * da_offp; struct vnode* da_vp; } ;
typedef int offset_t ;
typedef int dsl_pool_t ;
typedef int dsl_dataset_t ;
struct TYPE_4__ {int ds_creation_txg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char const*,int ,int **) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 TYPE_2__* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char const*,int ,int **) ;
 int FUNC_8 (int *,int ) ;
 int * FUNC_9 (char const*,char) ;
 int FUNC_10 (int *,int ,int,int ,struct diffarg*) ;
 int FUNC_11 (struct diffarg*) ;

int
FUNC_12(const char *VAR_8, const char *VAR_9,
    struct vnode *VAR_10, offset_t *VAR_11)
{
 struct diffarg VAR_12;
 dsl_dataset_t *VAR_13;
 dsl_dataset_t *VAR_14;
 dsl_pool_t *VAR_15;
 int VAR_16;
 uint64_t VAR_17;

 if (FUNC_9(VAR_8, '@') == ((void*)0) ||
     FUNC_9(VAR_9, '@') == ((void*)0))
  return (FUNC_0(VAR_1));

 VAR_16 = FUNC_7(VAR_8, VAR_3, &VAR_15);
 if (VAR_16 != 0)
  return (VAR_16);

 VAR_16 = FUNC_1(VAR_15, VAR_8, VAR_3, &VAR_14);
 if (VAR_16 != 0) {
  FUNC_8(VAR_15, VAR_3);
  return (VAR_16);
 }

 VAR_16 = FUNC_1(VAR_15, VAR_9, VAR_3, &VAR_13);
 if (VAR_16 != 0) {
  FUNC_6(VAR_14, VAR_3);
  FUNC_8(VAR_15, VAR_3);
  return (VAR_16);
 }

 if (!FUNC_2(VAR_14, VAR_13, 0)) {
  FUNC_6(VAR_13, VAR_3);
  FUNC_6(VAR_14, VAR_3);
  FUNC_8(VAR_15, VAR_3);
  return (FUNC_0(VAR_2));
 }

 VAR_17 = FUNC_5(VAR_13)->ds_creation_txg;
 FUNC_6(VAR_13, VAR_3);

 FUNC_3(VAR_14, VAR_3);
 FUNC_8(VAR_15, VAR_3);

 VAR_12.da_vp = VAR_10;
 VAR_12.da_offp = VAR_11;
 VAR_12.da_ddr.ddr_type = VAR_0;
 VAR_12.da_ddr.ddr_first = VAR_12.da_ddr.ddr_last = 0;
 VAR_12.da_err = 0;
 VAR_16 = FUNC_10(VAR_14, VAR_17,
     VAR_5 | VAR_6 | VAR_4,
     VAR_7, &VAR_12);

 if (VAR_16 != 0) {
  VAR_12.da_err = VAR_16;
 } else {

  (void) FUNC_11(&VAR_12);
 }

 FUNC_4(VAR_14, VAR_3);
 FUNC_6(VAR_14, VAR_3);

 return (VAR_12.da_err);
}
