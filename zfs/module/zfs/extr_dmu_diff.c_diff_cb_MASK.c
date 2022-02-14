
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zilog_t ;
struct TYPE_12__ {scalar_t__ zb_level; scalar_t__ zb_object; int zb_blkid; } ;
typedef TYPE_1__ zbookmark_phys_t ;
typedef int uint64_t ;
struct diffarg {int dummy; } ;
typedef int spa_t ;
struct TYPE_13__ {scalar_t__ dn_extra_slots; } ;
typedef TYPE_2__ dnode_phys_t ;
typedef int blkptr_t ;
typedef int arc_flags_t ;
struct TYPE_14__ {TYPE_2__* b_data; } ;
typedef TYPE_3__ arc_buf_t ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_2__ const*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (TYPE_3__*,TYPE_3__**) ;
 int VAR_13 ;
 scalar_t__ FUNC_6 (int *,int *,int const*,int ,TYPE_3__**,int ,int,int *,TYPE_1__ const*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct diffarg*,int,TYPE_2__*) ;
 int FUNC_9 (struct diffarg*,int,int) ;

__attribute__((used)) static int
FUNC_10(spa_t *VAR_14, zilog_t *VAR_15, const blkptr_t *VAR_16,
    const zbookmark_phys_t *VAR_17, const dnode_phys_t *VAR_18, void *VAR_19)
{
 struct diffarg *VAR_20 = VAR_19;
 int VAR_21 = 0;

 if (FUNC_7(VAR_7) && FUNC_7(VAR_6))
  return (FUNC_4(VAR_4));

 if (VAR_17->zb_level == VAR_9 ||
     VAR_17->zb_object != VAR_1)
  return (0);

 if (FUNC_1(VAR_16)) {
  uint64_t VAR_22 = FUNC_3(VAR_18, VAR_17->zb_level);
  uint64_t VAR_23 = (VAR_17->zb_blkid * VAR_22) >> VAR_3;

  VAR_21 = FUNC_9(VAR_20, VAR_23,
      VAR_23 + (VAR_22 >> VAR_3) - 1);
  if (VAR_21)
   return (VAR_21);
 } else if (VAR_17->zb_level == 0) {
  dnode_phys_t *VAR_24;
  arc_buf_t *VAR_25;
  arc_flags_t VAR_26 = VAR_0;
  int VAR_27 = FUNC_0(VAR_16) >> VAR_3;
  int VAR_28 = VAR_10;
  int VAR_29;

  if (FUNC_2(VAR_16))
   VAR_28 |= VAR_11;

  if (FUNC_6(((void*)0), VAR_14, VAR_16, VAR_13, &VAR_25,
      VAR_12, VAR_28, &VAR_26, VAR_17) != 0)
   return (FUNC_4(VAR_5));

  VAR_24 = VAR_25->b_data;
  for (VAR_29 = 0; VAR_29 < VAR_27; VAR_29 += VAR_24[VAR_29].dn_extra_slots + 1) {
   uint64_t VAR_30 = (VAR_17->zb_blkid <<
       (VAR_2 - VAR_3)) + VAR_29;
   VAR_21 = FUNC_8(VAR_20, VAR_30, VAR_24+VAR_29);
   if (VAR_21)
    break;
  }
  FUNC_5(VAR_25, &VAR_25);
  if (VAR_21)
   return (VAR_21);

  return (VAR_8);
 }
 return (0);
}
