
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ z_blksz; int z_sa_hdl; int z_projid; } ;
typedef TYPE_1__ znode_t ;
struct TYPE_7__ {scalar_t__ z_projectquota_obj; int z_max_blksz; scalar_t__ z_projectobjquota_obj; int z_os; } ;
typedef TYPE_2__ zfsvfs_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_longlong_t ;
struct kstatfs {int f_blocks; int f_bfree; int f_bavail; int f_files; int f_ffree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int *,int ,char*,int ) ;
 int FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,scalar_t__,char*,int,int,int*) ;

__attribute__((used)) static int
FUNC_5(zfsvfs_t *VAR_5, znode_t *VAR_6, struct kstatfs *VAR_7,
    uint32_t VAR_8)
{
 char VAR_9[20 + VAR_2];
 uint64_t VAR_10 = VAR_2;
 uint64_t VAR_11;
 uint64_t VAR_12;
 int VAR_13;

 FUNC_2(VAR_9, VAR_1, VAR_2 + 1);
 VAR_13 = FUNC_0(VAR_5, ((void*)0), VAR_6->z_projid, VAR_9 + VAR_10, VAR_0);
 if (VAR_13)
  return (VAR_13);

 if (VAR_5->z_projectquota_obj == 0)
  goto objs;

 VAR_13 = FUNC_4(VAR_5->z_os, VAR_5->z_projectquota_obj,
     VAR_9 + VAR_10, 8, 1, &VAR_11);
 if (VAR_13 == VAR_4)
  goto objs;
 else if (VAR_13)
  return (VAR_13);

 VAR_13 = FUNC_4(VAR_5->z_os, VAR_3,
     VAR_9 + VAR_10, 8, 1, &VAR_12);
 if (FUNC_3(VAR_13 == VAR_4)) {
  uint32_t VAR_14;
  u_longlong_t VAR_15;





  FUNC_1(VAR_6->z_sa_hdl, &VAR_14, &VAR_15);
  if (FUNC_3(VAR_6->z_blksz == 0))
   VAR_14 = VAR_5->z_max_blksz;

  VAR_12 = VAR_14 * VAR_15;
 } else if (VAR_13) {
  return (VAR_13);
 }

 VAR_7->f_blocks = VAR_11 >> VAR_8;
 VAR_7->f_bfree = (VAR_11 > VAR_12) ? ((VAR_11 - VAR_12) >> VAR_8) : 0;
 VAR_7->f_bavail = VAR_7->f_bfree;

objs:
 if (VAR_5->z_projectobjquota_obj == 0)
  return (0);

 VAR_13 = FUNC_4(VAR_5->z_os, VAR_5->z_projectobjquota_obj,
     VAR_9 + VAR_10, 8, 1, &VAR_11);
 if (VAR_13 == VAR_4)
  return (0);
 else if (VAR_13)
  return (VAR_13);

 VAR_13 = FUNC_4(VAR_5->z_os, VAR_3,
     VAR_9, 8, 1, &VAR_12);
 if (FUNC_3(VAR_13 == VAR_4)) {




  VAR_12 = 1;
 } else if (VAR_13) {
  return (VAR_13);
 }

 VAR_7->f_files = VAR_11;
 VAR_7->f_ffree = (VAR_11 > VAR_12) ? (VAR_11 - VAR_12) : 0;

 return (0);
}
