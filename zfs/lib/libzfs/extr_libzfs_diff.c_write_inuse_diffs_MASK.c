
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ ddr_first; scalar_t__ ddr_last; } ;
typedef TYPE_1__ dmu_diff_record_t ;
typedef int differ_info_t ;
typedef int FILE ;


 int FUNC_0 (int *,int *,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(FILE *VAR_0, differ_info_t *VAR_1, dmu_diff_record_t *VAR_2)
{
 uint64_t VAR_3;
 int VAR_4;

 for (VAR_3 = VAR_2->ddr_first; VAR_3 <= VAR_2->ddr_last; VAR_3++) {
  if ((VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3)) != 0)
   return (VAR_4);
 }
 return (0);
}
