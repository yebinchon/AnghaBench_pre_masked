
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ ddr_type; scalar_t__ ddr_last; scalar_t__ ddr_first; } ;
struct diffarg {int da_err; TYPE_1__ da_ddr; } ;
struct TYPE_5__ {scalar_t__ dn_type; } ;
typedef TYPE_2__ dnode_phys_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct diffarg*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct diffarg*) ;

__attribute__((used)) static int
FUNC_3(struct diffarg *VAR_2, uint64_t VAR_3, dnode_phys_t *VAR_4)
{
 FUNC_0(VAR_4 != ((void*)0));
 if (VAR_4->dn_type == VAR_1)
  return (FUNC_1(VAR_2, VAR_3, VAR_3));

 if (VAR_2->da_ddr.ddr_type != VAR_0 ||
     VAR_3 != VAR_2->da_ddr.ddr_last + 1) {
  if (FUNC_2(VAR_2) != 0)
   return (VAR_2->da_err);
  VAR_2->da_ddr.ddr_type = VAR_0;
  VAR_2->da_ddr.ddr_first = VAR_2->da_ddr.ddr_last = VAR_3;
  return (0);
 }
 VAR_2->da_ddr.ddr_last = VAR_3;
 return (0);
}
