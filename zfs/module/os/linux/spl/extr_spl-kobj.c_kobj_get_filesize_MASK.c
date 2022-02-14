
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int va_size; } ;
typedef TYPE_1__ vattr_t ;
typedef int uint64_t ;
struct _buf {int vp; } ;


 int FUNC_0 (int ,TYPE_1__*,int ,int ,int *) ;

int
FUNC_1(struct _buf *VAR_0, uint64_t *VAR_1)
{
 vattr_t VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->vp, &VAR_2, 0, 0, ((void*)0));
 if (VAR_3)
  return (VAR_3);

 *VAR_1 = VAR_2.va_size;

 return (VAR_3);
}
