
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ windowSize; scalar_t__ frameContentSize; } ;
typedef TYPE_1__ ZSTD_frameParams ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,void const*,size_t) ;

unsigned long long FUNC_1(const void *VAR_2, size_t VAR_3)
{
 {
  ZSTD_frameParams VAR_4;
  if (FUNC_0(&VAR_4, VAR_2, VAR_3) != 0)
   return VAR_0;
  if (VAR_4.windowSize == 0) {

   return 0;
  } else if (VAR_4.frameContentSize != 0) {
   return VAR_4.frameContentSize;
  } else {
   return VAR_1;
  }
 }
}
