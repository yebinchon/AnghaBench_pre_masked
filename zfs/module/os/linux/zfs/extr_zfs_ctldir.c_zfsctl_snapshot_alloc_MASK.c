
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int se_refcount; int se_taskqid; struct dentry* se_root_dentry; int se_objsetid; int * se_spa; void* se_path; void* se_name; } ;
typedef TYPE_1__ zfs_snapentry_t ;
typedef int uint64_t ;
struct dentry {int dummy; } ;
typedef int spa_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static zfs_snapentry_t *
FUNC_3(char *VAR_2, char *VAR_3, spa_t *VAR_4,
    uint64_t VAR_5, struct dentry *VAR_6)
{
 zfs_snapentry_t *VAR_7;

 VAR_7 = FUNC_1(sizeof (zfs_snapentry_t), VAR_0);

 VAR_7->se_name = FUNC_0(VAR_2);
 VAR_7->se_path = FUNC_0(VAR_3);
 VAR_7->se_spa = VAR_4;
 VAR_7->se_objsetid = VAR_5;
 VAR_7->se_root_dentry = VAR_6;
 VAR_7->se_taskqid = VAR_1;

 FUNC_2(&VAR_7->se_refcount);

 return (VAR_7);
}
