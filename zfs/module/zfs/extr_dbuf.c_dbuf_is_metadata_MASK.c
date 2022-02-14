
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ db_level; scalar_t__ db_blkid; } ;
typedef TYPE_1__ dmu_buf_impl_t ;
typedef int boolean_t ;
struct TYPE_8__ {int dn_type; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;

boolean_t
FUNC_4(dmu_buf_impl_t *VAR_2)
{



 if (VAR_2->db_level > 0 || VAR_2->db_blkid == VAR_1) {
  return (VAR_0);
 } else {
  boolean_t VAR_3;

  FUNC_1(VAR_2);
  VAR_3 = FUNC_3(FUNC_0(VAR_2)->dn_type);
  FUNC_2(VAR_2);

  return (VAR_3);
 }
}
