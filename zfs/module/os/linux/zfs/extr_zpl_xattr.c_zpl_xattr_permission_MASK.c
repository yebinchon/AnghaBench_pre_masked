
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct dentry* dentry; } ;
typedef TYPE_1__ xattr_filldir_t ;
struct xattr_handler {int (* list ) (struct xattr_handler const*,struct dentry*,int *,int ,char const*,int) ;} ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*,int *,int ,char const*,int,int ) ;
 int FUNC_2 (struct xattr_handler const*,struct dentry*,int *,int ,char const*,int) ;
 struct xattr_handler* FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(xattr_filldir_t *VAR_0, const char *VAR_1, int VAR_2)
{
 static const struct xattr_handler *VAR_3;
 struct dentry *VAR_4 = VAR_0->dentry;

 VAR_3 = FUNC_3(VAR_1);
 if (!VAR_3)
  return (0);

 if (VAR_3->list) {
 }

 return (1);
}
