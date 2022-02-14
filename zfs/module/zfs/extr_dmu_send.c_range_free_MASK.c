
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct send_range* dnp; } ;
struct TYPE_4__ {TYPE_1__ object; } ;
struct send_range {scalar_t__ type; int dn_extra_slots; TYPE_2__ sru; } ;
typedef int dnode_phys_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct send_range*,int) ;

__attribute__((used)) static void
FUNC_1(struct send_range *VAR_1)
{
 if (VAR_1->type == VAR_0) {
  size_t VAR_2 = sizeof (dnode_phys_t) *
      (VAR_1->sru.object.dnp->dn_extra_slots + 1);
  FUNC_0(VAR_1->sru.object.dnp, VAR_2);
 }
 FUNC_0(VAR_1, sizeof (*VAR_1));
}
