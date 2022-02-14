
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void** zf_gen; void** zf_object; scalar_t__ zf_len; } ;
typedef TYPE_1__ zfid_short_t ;
struct TYPE_6__ {scalar_t__* zf_setgen; void** zf_setid; } ;
typedef TYPE_2__ zfid_long_t ;
typedef void* uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct inode {int i_ino; } ;
struct dentry {int dummy; } ;
struct TYPE_7__ {scalar_t__ fid_len; } ;
typedef TYPE_3__ fid_t ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_3, fid_t *VAR_4)
{
 zfid_short_t *VAR_5 = (zfid_short_t *)VAR_4;
 zfid_long_t *VAR_6 = (zfid_long_t *)VAR_4;
 uint32_t VAR_7 = 0;
 uint64_t VAR_8;
 uint64_t VAR_9;
 int VAR_10;
 struct dentry *VAR_11;

 if (VAR_4->fid_len < VAR_1) {
  VAR_4->fid_len = VAR_1;
  return (FUNC_1(VAR_0));
 }

 VAR_8 = VAR_3->i_ino;
 VAR_9 = VAR_2 - VAR_3->i_ino;
 VAR_5->zf_len = VAR_1;

 VAR_11 = FUNC_3(FUNC_5(VAR_3));
 if (!FUNC_0(VAR_11)) {
  VAR_7 = !!FUNC_2(VAR_11);
  FUNC_4(VAR_11);
 }

 for (VAR_10 = 0; VAR_10 < sizeof (VAR_5->zf_object); VAR_10++)
  VAR_5->zf_object[VAR_10] = (uint8_t)(VAR_8 >> (8 * VAR_10));

 for (VAR_10 = 0; VAR_10 < sizeof (VAR_5->zf_gen); VAR_10++)
  VAR_5->zf_gen[VAR_10] = (uint8_t)(VAR_7 >> (8 * VAR_10));

 for (VAR_10 = 0; VAR_10 < sizeof (VAR_6->zf_setid); VAR_10++)
  VAR_6->zf_setid[VAR_10] = (uint8_t)(VAR_9 >> (8 * VAR_10));

 for (VAR_10 = 0; VAR_10 < sizeof (VAR_6->zf_setgen); VAR_10++)
  VAR_6->zf_setgen[VAR_10] = 0;

 return (0);
}
