
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ rs_start; scalar_t__ rs_end; } ;
typedef TYPE_1__ range_seg32_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const range_seg32_t *VAR_2 = VAR_0;
 const range_seg32_t *VAR_3 = VAR_1;

 uint64_t VAR_4 = VAR_2->rs_end - VAR_2->rs_start;
 uint64_t VAR_5 = VAR_3->rs_end - VAR_3->rs_start;

 int VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (FUNC_1(VAR_6))
  return (VAR_6);

 return (FUNC_0(VAR_2->rs_start, VAR_3->rs_start));
}
