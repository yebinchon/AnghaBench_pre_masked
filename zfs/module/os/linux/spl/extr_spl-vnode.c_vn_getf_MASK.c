
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int v_lock; struct file* v_file; int v_type; } ;
typedef TYPE_1__ vnode_t ;
struct kstat {int mode; } ;
struct TYPE_12__ {int mnt; } ;
struct file {int f_dentry; TYPE_6__ f_path; } ;
struct TYPE_11__ {int f_fd; int f_lock; int f_list; struct file* f_file; TYPE_1__* f_vnode; int f_ref; scalar_t__ f_offset; int f_task; } ;
typedef TYPE_2__ file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 struct file* FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (int,int ) ;
 int FUNC_3 (struct file*) ;
 TYPE_2__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_6__*,struct kstat*,...) ;
 TYPE_1__* FUNC_12 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ) ;

file_t *
FUNC_15(int VAR_7)
{
 struct kstat VAR_8;
 struct file *VAR_9;
 file_t *VAR_10;
 vnode_t *VAR_11;
 int VAR_12 = 0;

 if (VAR_7 < 0)
  return (((void*)0));


 FUNC_9(&VAR_6);

 VAR_10 = FUNC_2(VAR_7, VAR_3);
 if (VAR_10) {
  VAR_9 = FUNC_1(VAR_7);
  FUNC_3(VAR_10->f_file);







  if (VAR_9 != VAR_10->f_file) {
   VAR_10->f_file = VAR_9;
   VAR_10->f_vnode->v_file = VAR_9;
  }
  FUNC_0(&VAR_10->f_ref);
  FUNC_10(&VAR_6);
  return (VAR_10);
 }

 FUNC_10(&VAR_6);


 VAR_10 = FUNC_4(VAR_4, VAR_1);
 if (VAR_10 == ((void*)0))
  goto out;

 FUNC_7(&VAR_10->f_lock);

 VAR_10->f_fd = VAR_7;
 VAR_10->f_task = VAR_3;
 VAR_10->f_offset = 0;
 FUNC_0(&VAR_10->f_ref);

 VAR_9 = FUNC_1(VAR_7);
 if (VAR_9 == ((void*)0))
  goto out_mutex;

 VAR_11 = FUNC_12(VAR_1);
 if (VAR_11 == ((void*)0))
  goto out_fget;







 VAR_12 = FUNC_11(VAR_9->f_path.mnt, VAR_9->f_dentry, &VAR_8);

 if (VAR_12)
  goto out_vnode;

 FUNC_7(&VAR_11->v_lock);
 VAR_11->v_type = FUNC_14(VAR_8.mode);
 VAR_11->v_file = VAR_9;
 FUNC_8(&VAR_11->v_lock);

 VAR_10->f_vnode = VAR_11;
 VAR_10->f_file = VAR_9;


 FUNC_9(&VAR_6);
 FUNC_6(&VAR_10->f_list, &VAR_5);
 FUNC_10(&VAR_6);

 FUNC_8(&VAR_10->f_lock);
 return (VAR_10);

out_vnode:
 FUNC_13(VAR_11);
out_fget:
 FUNC_3(VAR_9);
out_mutex:
 FUNC_8(&VAR_10->f_lock);
 FUNC_5(VAR_4, VAR_10);
out:
 return (((void*)0));
}
