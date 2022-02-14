
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfsmount {int dummy; } ;
struct path {int dummy; } ;


 struct vfsmount* FUNC_0 (int) ;
 int FUNC_1 (struct path*,int ) ;

__attribute__((used)) static struct vfsmount *
FUNC_2(struct path *VAR_0)
{
 int VAR_1;

 VAR_1 = -FUNC_1(VAR_0, 0);
 if (VAR_1)
  return (FUNC_0(VAR_1));
 return (((void*)0));
}
