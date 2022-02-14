
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ z_size; int z_sa_hdl; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_10__ {int z_log; int z_os; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_11__ {scalar_t__ lr_offset; scalar_t__ lr_length; int lr_foid; } ;
typedef TYPE_3__ lr_write_t ;
typedef int dmu_tx_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,void*,int,int *) ;
 int FUNC_11 (TYPE_2__*,int ,TYPE_1__**) ;
 int FUNC_12 (int ,int *) ;

__attribute__((used)) static int
FUNC_13(void *VAR_3, void *VAR_4, boolean_t VAR_5)
{
 zfsvfs_t *VAR_6 = VAR_3;
 lr_write_t *VAR_7 = VAR_4;
 znode_t *VAR_8;
 int VAR_9;
 uint64_t VAR_10;

 if (VAR_5)
  FUNC_2(VAR_7, sizeof (*VAR_7));

 if ((VAR_9 = FUNC_11(VAR_6, VAR_7->lr_foid, &VAR_8)) != 0)
  return (VAR_9);

top:
 VAR_10 = VAR_7->lr_offset + VAR_7->lr_length;
 if (VAR_10 > VAR_8->z_size) {
  dmu_tx_t *VAR_11 = FUNC_6(VAR_6->z_os);

  VAR_8->z_size = VAR_10;
  FUNC_7(VAR_11, VAR_8->z_sa_hdl, VAR_0);
  VAR_9 = FUNC_4(VAR_11, VAR_2);
  if (VAR_9) {
   FUNC_9(FUNC_1(VAR_8));
   if (VAR_9 == VAR_1) {
    FUNC_8(VAR_11);
    FUNC_3(VAR_11);
    goto top;
   }
   FUNC_3(VAR_11);
   return (VAR_9);
  }
  (void) FUNC_10(VAR_8->z_sa_hdl, FUNC_0(VAR_6),
      (void *)&VAR_8->z_size, sizeof (uint64_t), VAR_11);


  (void) FUNC_12(VAR_6->z_log, VAR_11);

  FUNC_5(VAR_11);
 }

 FUNC_9(FUNC_1(VAR_8));

 return (VAR_9);
}
