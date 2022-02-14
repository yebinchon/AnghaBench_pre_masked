
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * zv_objset; } ;
typedef TYPE_2__ zvol_state_t ;
typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_5__ {int lrc_reclen; } ;
struct TYPE_7__ {int lr_offset; int lr_length; int lr_blkptr; TYPE_1__ lr_common; } ;
typedef TYPE_3__ lr_write_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int,int) ;
 int FUNC_7 (int *,int ,int,int,char*,int *) ;

__attribute__((used)) static int
FUNC_8(void *VAR_2, void *VAR_3, boolean_t VAR_4)
{
 zvol_state_t *VAR_5 = VAR_2;
 lr_write_t *VAR_6 = VAR_3;
 objset_t *VAR_7 = VAR_5->zv_objset;
 char *VAR_8 = (char *)(VAR_6 + 1);
 uint64_t VAR_9, VAR_10;
 dmu_tx_t *VAR_11;
 int VAR_12;

 if (VAR_4)
  FUNC_1(VAR_6, sizeof (*VAR_6));

 VAR_9 = VAR_6->lr_offset;
 VAR_10 = VAR_6->lr_length;


 if (VAR_6->lr_common.lrc_reclen == sizeof (lr_write_t)) {
  uint64_t VAR_13 = FUNC_0(&VAR_6->lr_blkptr);
  if (VAR_10 < VAR_13) {
   VAR_9 -= VAR_9 % VAR_13;
   VAR_10 = VAR_13;
  }
 }

 VAR_11 = FUNC_5(VAR_7);
 FUNC_6(VAR_11, VAR_1, VAR_9, VAR_10);
 VAR_12 = FUNC_3(VAR_11, VAR_0);
 if (VAR_12) {
  FUNC_2(VAR_11);
 } else {
  FUNC_7(VAR_7, VAR_1, VAR_9, VAR_10, VAR_8, VAR_11);
  FUNC_4(VAR_11);
 }

 return (VAR_12);
}
