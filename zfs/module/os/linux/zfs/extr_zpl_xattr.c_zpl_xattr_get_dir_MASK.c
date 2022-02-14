
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int loff_t ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,char*,struct inode**,int ,int *,int *,int *) ;
 int FUNC_3 (struct inode*,void*,size_t,int *,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_3, const char *VAR_4, void *VAR_5,
    size_t VAR_6, cred_t *VAR_7)
{
 struct inode *VAR_8 = ((void*)0);
 struct inode *VAR_9 = ((void*)0);
 loff_t VAR_10 = 0;
 int VAR_11;


 VAR_11 = -FUNC_2(VAR_3, ((void*)0), &VAR_8, VAR_1, VAR_7, ((void*)0), ((void*)0));
 if (VAR_11)
  goto out;


 VAR_11 = -FUNC_2(VAR_8, (char *)VAR_4, &VAR_9, 0, VAR_7, ((void*)0), ((void*)0));
 if (VAR_11)
  goto out;

 if (!VAR_6) {
  VAR_11 = FUNC_0(VAR_9);
  goto out;
 }

 if (VAR_6 < FUNC_0(VAR_9)) {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_11 = FUNC_3(VAR_9, VAR_5, VAR_6, &VAR_10, VAR_2, 0, VAR_7);
out:
 if (VAR_9)
  FUNC_1(VAR_9);

 if (VAR_8)
  FUNC_1(VAR_8);

 return (VAR_11);
}
