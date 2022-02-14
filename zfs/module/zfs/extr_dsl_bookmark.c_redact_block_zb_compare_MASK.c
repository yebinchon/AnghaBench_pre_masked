
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ zb_object; int zb_blkid; } ;
typedef TYPE_1__ zbookmark_phys_t ;
struct TYPE_7__ {scalar_t__ rbp_object; int rbp_blkid; } ;
typedef TYPE_2__ redact_block_phys_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_1(redact_block_phys_t *VAR_0,
    zbookmark_phys_t *VAR_1)
{





 if (VAR_0->rbp_object < VAR_1->zb_object ||
     (VAR_0->rbp_object == VAR_1->zb_object &&
     VAR_0->rbp_blkid + (FUNC_0(VAR_0) - 1) <
     VAR_1->zb_blkid)) {
  return (-1);
 }






 if (VAR_0->rbp_object > VAR_1->zb_object ||
     (VAR_0->rbp_object == VAR_1->zb_object &&
     VAR_0->rbp_blkid > VAR_1->zb_blkid)) {
  return (1);
 }

 return (0);
}
