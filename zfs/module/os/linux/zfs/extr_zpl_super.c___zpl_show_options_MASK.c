
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int z_flags; int z_acl_type; } ;
typedef TYPE_1__ zfsvfs_t ;
struct seq_file {int dummy; } ;



 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,char*) ;
 int FUNC_1 (struct seq_file*,char*) ;

__attribute__((used)) static int
FUNC_2(struct seq_file *VAR_1, zfsvfs_t *VAR_2)
{
 FUNC_0(VAR_1, ",%s",
     VAR_2->z_flags & VAR_0 ? "xattr" : "noxattr");
 return (0);
}
