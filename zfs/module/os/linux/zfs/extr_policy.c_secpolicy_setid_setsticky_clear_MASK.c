
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int va_mode; int va_gid; int va_uid; } ;
typedef TYPE_1__ vattr_t ;
struct inode {int i_mode; } ;
typedef int cred_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;

int
FUNC_4(struct inode *VAR_3, vattr_t *VAR_4,
    const vattr_t *VAR_5, cred_t *VAR_6)
{
 int VAR_7;

 if ((VAR_4->va_mode & VAR_1) != 0 &&
     (VAR_7 = FUNC_1(VAR_6,
     VAR_5->va_uid)) != 0) {
  return (VAR_7);
 }





 if (!FUNC_0(VAR_3->i_mode) && (VAR_4->va_mode & VAR_2) != 0 &&
     FUNC_3(VAR_6) != 0) {
  VAR_4->va_mode &= ~VAR_2;
 }





 if ((VAR_4->va_mode & VAR_0) != 0 &&
     FUNC_2(VAR_6, VAR_5->va_gid) != 0) {
  VAR_4->va_mode &= ~VAR_0;
 }

 return (0);
}
