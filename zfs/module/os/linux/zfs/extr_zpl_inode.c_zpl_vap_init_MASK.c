
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int va_mode; int va_gid; int va_uid; int va_mask; } ;
typedef TYPE_1__ vattr_t ;
typedef int umode_t ;
struct inode {int i_mode; int i_gid; } ;
typedef int cred_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(vattr_t *VAR_2, struct inode *VAR_3, umode_t VAR_4, cred_t *VAR_5)
{
 VAR_2->va_mask = VAR_0;
 VAR_2->va_mode = VAR_4;
 VAR_2->va_uid = FUNC_3(VAR_5);

 if (VAR_3 && VAR_3->i_mode & VAR_1) {
  VAR_2->va_gid = FUNC_0(VAR_3->i_gid);
  if (FUNC_1(VAR_4))
   VAR_2->va_mode |= VAR_1;
 } else {
  VAR_2->va_gid = FUNC_2(VAR_5);
 }
}
