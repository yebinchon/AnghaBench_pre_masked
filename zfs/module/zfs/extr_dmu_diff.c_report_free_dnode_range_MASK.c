
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ ddr_type; scalar_t__ ddr_last; scalar_t__ ddr_first; } ;
struct diffarg {int da_err; TYPE_1__ da_ddr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct diffarg*) ;

__attribute__((used)) static int
FUNC_2(struct diffarg *VAR_1, uint64_t VAR_2, uint64_t VAR_3)
{
 FUNC_0(VAR_2 <= VAR_3);
 if (VAR_1->da_ddr.ddr_type != VAR_0 ||
     VAR_2 != VAR_1->da_ddr.ddr_last + 1) {
  if (FUNC_1(VAR_1) != 0)
   return (VAR_1->da_err);
  VAR_1->da_ddr.ddr_type = VAR_0;
  VAR_1->da_ddr.ddr_first = VAR_2;
  VAR_1->da_ddr.ddr_last = VAR_3;
  return (0);
 }
 VAR_1->da_ddr.ddr_last = VAR_3;
 return (0);
}
