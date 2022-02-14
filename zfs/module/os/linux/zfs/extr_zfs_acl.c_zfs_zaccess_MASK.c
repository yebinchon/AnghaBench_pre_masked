
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int z_pflags; int z_xattr_parent; } ;
typedef TYPE_1__ znode_t ;
typedef int uint32_t ;
typedef scalar_t__ uid_t ;
typedef int mode_t ;
typedef int cred_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_12__ {int i_uid; int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int) ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_15 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_6__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (int *,TYPE_6__*,scalar_t__,int,int) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,scalar_t__) ;
 scalar_t__ FUNC_12 (int ,int ,int *,int ) ;
 int FUNC_13 (TYPE_1__*,int*,scalar_t__*,int *) ;
 int FUNC_14 (TYPE_1__*,int,int*,scalar_t__*,scalar_t__,int *) ;
 int FUNC_15 (int ,int ,TYPE_1__**) ;

int
FUNC_16(znode_t *VAR_22, int VAR_23, int VAR_24, boolean_t VAR_25, cred_t *VAR_26)
{
 uint32_t VAR_27;
 int VAR_28;
 int VAR_29;
 boolean_t VAR_30;
 znode_t *VAR_31;
 znode_t *VAR_32 = VAR_22;
 mode_t VAR_33;
 uid_t VAR_34;

 VAR_29 = ((VAR_22->z_pflags & VAR_21) && FUNC_3(FUNC_4(VAR_22)->i_mode));




 if (VAR_29) {
  if ((VAR_28 = FUNC_15(FUNC_5(VAR_22),
      VAR_22->z_xattr_parent, &VAR_31)) != 0) {
   return (VAR_28);
  }

  VAR_32 = VAR_31;





  if (VAR_23 & (VAR_11|VAR_0)) {
   VAR_23 &= ~(VAR_11|VAR_0);
   VAR_23 |= VAR_12;
  }

  if (VAR_23 & (VAR_6|VAR_3)) {
   VAR_23 &= ~(VAR_6|VAR_3);
   VAR_23 |= VAR_7;
  }
 }

 VAR_34 = FUNC_12(FUNC_5(VAR_22), FUNC_1(FUNC_4(VAR_22)->i_uid),
     VAR_26, VAR_20);







 VAR_33 = 0;

 VAR_27 = VAR_23;
 if ((VAR_27 & (VAR_4|VAR_5)) &&
     VAR_34 == FUNC_6(VAR_26))
  VAR_27 &= ~(VAR_4|VAR_5);

 if (VAR_27 & (VAR_6|VAR_7|
     VAR_4|VAR_5|VAR_8))
  VAR_33 |= VAR_15;
 if (VAR_27 & (VAR_11|VAR_12|
     VAR_0|VAR_10|VAR_8))
  VAR_33 |= VAR_16;
 if (VAR_27 & VAR_3)
  VAR_33 |= VAR_17;

 if ((VAR_28 = FUNC_14(VAR_32, VAR_23, &VAR_27,
     &VAR_30, VAR_25, VAR_26)) == 0) {
  if (VAR_29)
   FUNC_7(FUNC_4(VAR_31));
  return (FUNC_8(VAR_26, FUNC_4(VAR_22), VAR_34,
      VAR_33, VAR_33));
 }

 if (VAR_28 && !VAR_30) {
  if (VAR_29)
   FUNC_7(FUNC_4(VAR_31));
  return (VAR_28);
 }

 if (VAR_28 && (VAR_24 & VAR_18)) {
  VAR_28 = FUNC_13(VAR_22, &VAR_27, &VAR_30, VAR_26);
 }

 if (VAR_28 && VAR_30) {
  mode_t VAR_35 = 0;






  VAR_28 = 0;
  FUNC_0(VAR_27 != 0);

  if ((VAR_27 & (VAR_4|VAR_5) &&
      VAR_34 == FUNC_6(VAR_26)))
   VAR_27 &= ~(VAR_4|VAR_5);

  if (VAR_27 & (VAR_6|VAR_7|
      VAR_4|VAR_5|VAR_8))
   VAR_35 |= VAR_15;
  if (VAR_27 & (VAR_11|VAR_12|
      VAR_0|VAR_10|VAR_8))
   VAR_35 |= VAR_16;
  if (VAR_27 & VAR_3)
   VAR_35 |= VAR_17;

  VAR_28 = FUNC_8(VAR_26, FUNC_4(VAR_32), VAR_34,
      VAR_33 & ~VAR_35, VAR_33);

  if (VAR_28 == 0 && (VAR_27 & VAR_13))
   VAR_28 = FUNC_9(VAR_26, VAR_34);
  if (VAR_28 == 0 && (VAR_27 & VAR_9))
   VAR_28 = FUNC_11(VAR_26, VAR_34);

  if (VAR_28 == 0 && (VAR_27 &
      (VAR_1|VAR_2)))
   VAR_28 = FUNC_10(VAR_26);

  if (VAR_28 == 0 && (VAR_27 & VAR_8)) {
   VAR_28 = FUNC_9(VAR_26, VAR_34);
  }
  if (VAR_28 == 0) {




   if (VAR_27 & ~(VAR_19)) {
    VAR_28 = FUNC_2(VAR_14);
   }
  }
 } else if (VAR_28 == 0) {
  VAR_28 = FUNC_8(VAR_26, FUNC_4(VAR_22), VAR_34,
      VAR_33, VAR_33);
 }

 if (VAR_29)
  FUNC_7(FUNC_4(VAR_31));

 return (VAR_28);
}
