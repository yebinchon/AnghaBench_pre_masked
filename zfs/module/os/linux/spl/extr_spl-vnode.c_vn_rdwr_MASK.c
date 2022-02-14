
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct file* v_file; } ;
typedef TYPE_1__ vnode_t ;
typedef scalar_t__ uio_seg_t ;
typedef int uio_rw_t ;
struct file {int f_pos; } ;
typedef int ssize_t ;
typedef int rlim64_t ;
typedef int offset_t ;
typedef int loff_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct file*,void*,int,int *) ;
 int FUNC_2 (struct file*,void*,int,int *) ;

int
FUNC_3(uio_rw_t VAR_5, vnode_t *VAR_6, void *VAR_7, ssize_t VAR_8, offset_t VAR_9,
    uio_seg_t VAR_10, int VAR_11, rlim64_t VAR_12, void *VAR_13, ssize_t *VAR_14)
{
 struct file *VAR_15 = VAR_6->v_file;
 loff_t VAR_16 = VAR_9;
 int VAR_17;

 FUNC_0(VAR_5 == VAR_4 || VAR_5 == VAR_2);
 FUNC_0(VAR_10 == VAR_3);
 FUNC_0((VAR_11 & ~VAR_1) == 0);

 if (VAR_11 & VAR_1)
  VAR_16 = VAR_15->f_pos;

 if (VAR_5 & VAR_4)
  VAR_17 = FUNC_2(VAR_15, VAR_7, VAR_8, &VAR_16);
 else
  VAR_17 = FUNC_1(VAR_15, VAR_7, VAR_8, &VAR_16);

 VAR_15->f_pos = VAR_16;

 if (VAR_17 < 0)
  return (-VAR_17);

 if (VAR_14) {
  *VAR_14 = VAR_8 - VAR_17;
 } else {
  if (VAR_17 != VAR_8)
   return (VAR_0);
 }

 return (0);
}
