
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int v_fd; } ;
typedef TYPE_1__ vnode_t ;
struct TYPE_6__ {int va_size; } ;
typedef TYPE_2__ vattr_t ;
struct stat64 {int st_size; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct stat64*) ;

int
FUNC_2(vnode_t *VAR_1, vattr_t *VAR_2)
{
 struct stat64 VAR_3;
 int VAR_4;

 if (FUNC_1(VAR_1->v_fd, &VAR_3) == -1) {
  VAR_4 = VAR_0;
  FUNC_0(VAR_1->v_fd);
  return (VAR_4);
 }

 VAR_2->va_size = VAR_3.st_size;
 return (0);
}
