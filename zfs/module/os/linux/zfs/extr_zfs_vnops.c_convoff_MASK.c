
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int va_size; } ;
typedef TYPE_1__ vattr_t ;
struct inode {int dummy; } ;
typedef int offset_t ;
struct TYPE_6__ {int l_whence; scalar_t__ l_start; } ;
typedef TYPE_2__ flock64_t ;


 int FUNC_0 () ;
 int VAR_0 ;



 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,TYPE_1__*,int ,int ) ;

int
FUNC_3(struct inode *VAR_1, flock64_t *VAR_2, int VAR_3, offset_t VAR_4)
{
 vattr_t VAR_5;
 int VAR_6;

 if ((VAR_2->l_whence == 129) || (VAR_3 == 129)) {
  if ((VAR_6 = FUNC_2(VAR_1, &VAR_5, 0, FUNC_0())))
   return (VAR_6);
 }

 switch (VAR_2->l_whence) {
 case 130:
  VAR_2->l_start += VAR_4;
  break;
 case 129:
  VAR_2->l_start += VAR_5.va_size;

 case 128:
  break;
 default:
  return (FUNC_1(VAR_0));
 }

 if (VAR_2->l_start < 0)
  return (FUNC_1(VAR_0));

 switch (VAR_3) {
 case 130:
  VAR_2->l_start -= VAR_4;
  break;
 case 129:
  VAR_2->l_start -= VAR_5.va_size;

 case 128:
  break;
 default:
  return (FUNC_1(VAR_0));
 }

 VAR_2->l_whence = (short)VAR_3;
 return (0);
}
