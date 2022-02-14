
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int va_mode; int va_mask; scalar_t__ va_uid; } ;
typedef TYPE_1__ vattr_t ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int) ;

void
FUNC_1(vattr_t *VAR_4, cred_t *VAR_5)
{
 if ((VAR_4->va_mode & (VAR_3 | VAR_2)) != 0 &&
     FUNC_0(VAR_5,
     (VAR_4->va_mode & VAR_3) != 0 &&
     (VAR_4->va_mask & VAR_1) != 0 && VAR_4->va_uid == 0) != 0) {
  VAR_4->va_mask |= VAR_0;
  VAR_4->va_mode &= ~(VAR_3|VAR_2);
 }
}
