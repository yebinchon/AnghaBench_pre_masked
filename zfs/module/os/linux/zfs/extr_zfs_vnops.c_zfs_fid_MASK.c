
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int z_id; int z_sa_hdl; } ;
typedef TYPE_1__ znode_t ;
typedef int zfsvfs_t ;
struct TYPE_6__ {int zf_len; void** zf_gen; void** zf_object; } ;
typedef TYPE_2__ zfid_short_t ;
typedef void* uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct inode {int dummy; } ;
typedef int fid_t ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int * FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ,int*,int) ;

int
FUNC_7(struct inode *VAR_1, fid_t *VAR_2)
{
 znode_t *VAR_3 = FUNC_0(VAR_1);
 zfsvfs_t *VAR_4 = FUNC_1(VAR_1);
 uint32_t VAR_5;
 uint64_t VAR_6;
 uint64_t VAR_7 = VAR_3->z_id;
 zfid_short_t *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 FUNC_3(VAR_4);
 FUNC_5(VAR_3);

 if ((VAR_11 = FUNC_6(VAR_3->z_sa_hdl, FUNC_2(VAR_4),
     &VAR_6, sizeof (uint64_t))) != 0) {
  FUNC_4(VAR_4);
  return (VAR_11);
 }

 VAR_5 = (uint32_t)VAR_6;

 VAR_9 = VAR_0;

 VAR_8 = (zfid_short_t *)VAR_2;

 VAR_8->zf_len = VAR_9;

 for (VAR_10 = 0; VAR_10 < sizeof (VAR_8->zf_object); VAR_10++)
  VAR_8->zf_object[VAR_10] = (uint8_t)(VAR_7 >> (8 * VAR_10));


 if (VAR_5 == 0)
  VAR_5 = 1;
 for (VAR_10 = 0; VAR_10 < sizeof (VAR_8->zf_gen); VAR_10++)
  VAR_8->zf_gen[VAR_10] = (uint8_t)(VAR_5 >> (8 * VAR_10));

 FUNC_4(VAR_4);
 return (0);
}
