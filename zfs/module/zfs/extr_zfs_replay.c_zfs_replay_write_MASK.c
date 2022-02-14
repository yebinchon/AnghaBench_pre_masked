
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ z_size; } ;
typedef TYPE_2__ znode_t ;
struct TYPE_11__ {scalar_t__ z_replay_eof; } ;
typedef TYPE_3__ zfsvfs_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_9__ {int lrc_reclen; } ;
struct TYPE_12__ {scalar_t__ lr_offset; scalar_t__ lr_length; int lr_blkptr; TYPE_1__ lr_common; int lr_foid; } ;
typedef TYPE_4__ lr_write_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_3__*,int ,TYPE_2__**) ;
 int FUNC_6 (int ,char*,scalar_t__,scalar_t__*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(void *VAR_4, void *VAR_5, boolean_t VAR_6)
{
 zfsvfs_t *VAR_7 = VAR_4;
 lr_write_t *VAR_8 = VAR_5;
 char *VAR_9 = (char *)(VAR_8 + 1);
 znode_t *VAR_10;
 int VAR_11, VAR_12;
 uint64_t VAR_13, VAR_14, VAR_15;

 if (VAR_6)
  FUNC_3(VAR_8, sizeof (*VAR_8));

 if ((VAR_11 = FUNC_5(VAR_7, VAR_8->lr_foid, &VAR_10)) != 0) {





  if (VAR_11 == VAR_1)
   VAR_11 = 0;
  return (VAR_11);
 }

 VAR_14 = VAR_8->lr_offset;
 VAR_15 = VAR_8->lr_length;
 VAR_13 = VAR_14 + VAR_15;
 VAR_7->z_replay_eof = 0;


 if (VAR_8->lr_common.lrc_reclen == sizeof (lr_write_t)) {
  uint64_t VAR_16 = FUNC_0(&VAR_8->lr_blkptr);
  if (VAR_15 < VAR_16) {
   VAR_14 -= VAR_14 % VAR_16;
   VAR_15 = VAR_16;
  }
  if (VAR_10->z_size < VAR_13)
   VAR_7->z_replay_eof = VAR_13;
 }

 VAR_12 = FUNC_6(FUNC_2(VAR_10), VAR_9, VAR_15, &VAR_14,
     VAR_2, 0, VAR_3);
 if (VAR_12 < 0)
  VAR_11 = -VAR_12;
 else if (VAR_12 < VAR_15)
  VAR_11 = FUNC_1(VAR_0);

 FUNC_4(FUNC_2(VAR_10));
 VAR_7->z_replay_eof = 0;

 return (VAR_11);
}
