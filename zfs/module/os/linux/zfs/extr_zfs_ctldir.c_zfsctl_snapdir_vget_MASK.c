
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct super_block {int s_fs_info; } ;
struct path {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*) ;
 struct inode* FUNC_6 (struct super_block*,scalar_t__) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (char*,int,struct path*) ;
 char* FUNC_9 (int ,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (struct path*) ;
 int FUNC_12 (int ,scalar_t__,int ,char*) ;

int
FUNC_13(struct super_block *VAR_6, uint64_t VAR_7, int VAR_8,
    struct inode **VAR_9)
{
 int VAR_10;
 struct path VAR_11;
 char *VAR_12;
 struct dentry *VAR_13;

 VAR_12 = FUNC_9(VAR_4, VAR_1);

 VAR_10 = FUNC_12(VAR_6->s_fs_info, VAR_7,
     VAR_4, VAR_12);
 if (VAR_10)
  goto out;


 VAR_10 = -FUNC_8(VAR_12, VAR_3|VAR_2, &VAR_11);
 if (VAR_10)
  goto out;

 FUNC_11(&VAR_11);





 *VAR_9 = FUNC_6(VAR_6, VAR_5 - VAR_7);
 if (*VAR_9 == ((void*)0)) {
  VAR_10 = FUNC_1(VAR_0);
  goto out;
 }


 VAR_13 = FUNC_3(FUNC_5(*VAR_9));
 if (VAR_8 != (!FUNC_0(VAR_13) && FUNC_2(VAR_13))) {
  FUNC_7(*VAR_9);
  *VAR_9 = ((void*)0);
  VAR_10 = FUNC_1(VAR_0);
 }
 if (!FUNC_0(VAR_13))
  FUNC_4(VAR_13);
out:
 FUNC_10(VAR_12, VAR_4);
 return (VAR_10);
}
