
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int z_lock; int z_is_mapped; } ;
typedef TYPE_2__ znode_t ;
struct vm_area_struct {int vm_flags; scalar_t__ vm_start; scalar_t__ vm_end; int vm_pgoff; } ;
struct inode {int dummy; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int fstrans_cookie_t ;
typedef int caddr_t ;
struct TYPE_4__ {struct inode* host; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct file*,struct vm_area_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,int ,int *,size_t,int ) ;

__attribute__((used)) static int
FUNC_7(struct file *VAR_1, struct vm_area_struct *VAR_2)
{
 struct inode *VAR_3 = VAR_1->f_mapping->host;
 znode_t *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;
 fstrans_cookie_t VAR_6;

 VAR_6 = FUNC_4();
 VAR_5 = -FUNC_6(VAR_3, VAR_2->vm_pgoff, (caddr_t *)VAR_2->vm_start,
     (size_t)(VAR_2->vm_end - VAR_2->vm_start), VAR_2->vm_flags);
 FUNC_5(VAR_6);
 if (VAR_5)
  return (VAR_5);

 VAR_5 = FUNC_1(VAR_1, VAR_2);
 if (VAR_5)
  return (VAR_5);

 FUNC_2(&VAR_4->z_lock);
 VAR_4->z_is_mapped = VAR_0;
 FUNC_3(&VAR_4->z_lock);

 return (VAR_5);
}
