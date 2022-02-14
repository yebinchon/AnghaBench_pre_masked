
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int rs_end; int rs_start; int rs_fill; } ;
typedef TYPE_1__ range_seg_gap_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(const void *VAR_1, const void *VAR_2)
{
 const range_seg_gap_t *VAR_3 = VAR_1, *VAR_4 = VAR_2;

 uint64_t VAR_5 = VAR_3->rs_end - VAR_3->rs_start;
 uint64_t VAR_6 = VAR_4->rs_end - VAR_4->rs_start;
 uint64_t VAR_7, VAR_8;

 VAR_7 = VAR_3->rs_fill + ((((VAR_3->rs_fill << 7) / VAR_5) *
     VAR_0 * VAR_3->rs_fill) >> 7);
 VAR_8 = VAR_4->rs_fill + ((((VAR_4->rs_fill << 7) / VAR_6) *
     VAR_0 * VAR_4->rs_fill) >> 7);

 if (VAR_7 > VAR_8)
  return (-1);
 if (VAR_7 == VAR_8) {
  if (VAR_3->rs_start < VAR_4->rs_start)
   return (-1);
  if (VAR_3->rs_start == VAR_4->rs_start)
   return (0);
  return (1);
 }
 return (1);
}
