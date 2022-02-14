
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zap_t ;
typedef scalar_t__ zap_flags_t ;
struct TYPE_10__ {uintptr_t mz_salt; int mz_normflags; int mz_block_type; } ;
typedef TYPE_1__ mzap_phys_t ;
struct TYPE_11__ {int dn_object; } ;
typedef TYPE_2__ dnode_t ;
typedef int dmu_tx_t ;
struct TYPE_12__ {TYPE_1__* db_data; } ;
typedef TYPE_3__ dmu_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,int ,TYPE_3__**,int ) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int **,int ,int *,scalar_t__) ;
 int FUNC_5 (TYPE_3__*,int ,int *,int ,int ,int ,int **) ;
 int FUNC_6 (int *,int ) ;

void
FUNC_7(dnode_t *VAR_5, int VAR_6, zap_flags_t VAR_7, dmu_tx_t *VAR_8)
{
 dmu_buf_t *VAR_9;

 FUNC_0(FUNC_1(VAR_5, 0, VAR_2, &VAR_9, VAR_1));

 FUNC_3(VAR_9, VAR_8);
 mzap_phys_t *VAR_10 = VAR_9->db_data;
 VAR_10->mz_block_type = VAR_4;
 VAR_10->mz_salt =
     ((uintptr_t)VAR_9 ^ (uintptr_t)VAR_8 ^ (VAR_5->dn_object << 1)) | 1ULL;
 VAR_10->mz_normflags = VAR_6;

 if (VAR_7 != 0) {
  zap_t *VAR_11;

  FUNC_0(FUNC_5(VAR_9, VAR_2, VAR_8, VAR_3,
      VAR_0, VAR_0, &VAR_11));
  FUNC_0(FUNC_4(&VAR_11, VAR_2, VAR_8, VAR_7));
  FUNC_6(VAR_11, VAR_2);
 } else {
  FUNC_2(VAR_9, VAR_2);
 }
}
