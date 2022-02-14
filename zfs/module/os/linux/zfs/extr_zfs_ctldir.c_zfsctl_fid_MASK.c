
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int z_id; } ;
typedef TYPE_1__ znode_t ;
typedef int zfsvfs_t ;
struct TYPE_8__ {scalar_t__* zf_gen; scalar_t__* zf_object; scalar_t__ zf_len; } ;
typedef TYPE_2__ zfid_short_t ;
typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
struct inode {int dummy; } ;
struct TYPE_9__ {scalar_t__ fid_len; } ;
typedef TYPE_3__ fid_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int * FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,TYPE_3__*) ;

int
FUNC_7(struct inode *VAR_2, fid_t *VAR_3)
{
 znode_t *VAR_4 = FUNC_0(VAR_2);
 zfsvfs_t *VAR_5 = FUNC_1(VAR_2);
 uint64_t VAR_6 = VAR_4->z_id;
 zfid_short_t *VAR_7;
 int VAR_8;

 FUNC_3(VAR_5);

 if (FUNC_5(VAR_2)) {
  FUNC_4(VAR_5);
  return (FUNC_6(VAR_2, VAR_3));
 }

 if (VAR_3->fid_len < VAR_1) {
  VAR_3->fid_len = VAR_1;
  FUNC_4(VAR_5);
  return (FUNC_2(VAR_0));
 }

 VAR_7 = (zfid_short_t *)VAR_3;

 VAR_7->zf_len = VAR_1;

 for (VAR_8 = 0; VAR_8 < sizeof (VAR_7->zf_object); VAR_8++)
  VAR_7->zf_object[VAR_8] = (uint8_t)(VAR_6 >> (8 * VAR_8));


 for (VAR_8 = 0; VAR_8 < sizeof (VAR_7->zf_gen); VAR_8++)
  VAR_7->zf_gen[VAR_8] = 0;

 FUNC_4(VAR_5);
 return (0);
}
