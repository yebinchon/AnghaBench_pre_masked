
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int z_pflags; } ;
typedef TYPE_1__ znode_t ;
typedef int uint32_t ;
struct TYPE_7__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_4__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(znode_t *VAR_14, uint32_t VAR_15)
{
 if ((VAR_15 & VAR_7) && (FUNC_5(FUNC_3(VAR_14))) &&
     (!FUNC_4(FUNC_2(VAR_14)->i_mode) ||
     (FUNC_4(FUNC_2(VAR_14)->i_mode) && (VAR_15 & VAR_8)))) {
  return (FUNC_0(VAR_6));
 }




 if ((VAR_15 & VAR_9) &&
     ((!FUNC_1(FUNC_2(VAR_14)->i_mode) &&
     (VAR_14->z_pflags & (VAR_13 | VAR_11))) ||
     (FUNC_1(FUNC_2(VAR_14)->i_mode) &&
     (VAR_14->z_pflags & VAR_11)))) {
  return (FUNC_0(VAR_5));
 }

 if ((VAR_15 & (VAR_0 | VAR_1)) &&
     (VAR_14->z_pflags & VAR_12)) {
  return (FUNC_0(VAR_5));
 }

 if (((VAR_15 & (VAR_3|VAR_2)) &&
     (VAR_14->z_pflags & VAR_10))) {
  return (FUNC_0(VAR_4));
 }

 return (0);
}
