
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int dispatchmode; int hookmask; } ;
typedef TYPE_1__ global_State ;
struct TYPE_10__ {int * dispatch; } ;
struct TYPE_9__ {int flags; scalar_t__ state; } ;
typedef int ASMFunction ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_6__* FUNC_0 (TYPE_1__*) ;
 TYPE_4__* FUNC_1 (TYPE_1__*) ;
 size_t VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int * VAR_29 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int) ;

void FUNC_5(global_State *VAR_35)
{
  uint8_t VAR_36 = VAR_35->dispatchmode;
  uint8_t VAR_37 = 0;
  VAR_37 |= (VAR_35->hookmask & (VAR_27|VAR_26)) ? VAR_15 : 0;
  VAR_37 |= (VAR_35->hookmask & VAR_25) ? VAR_14 : 0;
  VAR_37 |= (VAR_35->hookmask & VAR_28) ? VAR_19 : 0;
  if (VAR_36 != VAR_37) {
    ASMFunction *VAR_38 = FUNC_0(VAR_35)->dispatch;
    ASMFunction VAR_39, VAR_40, VAR_41, VAR_42, VAR_43;
    VAR_35->dispatchmode = VAR_37;


    if ((VAR_37 & (VAR_16|VAR_18)) == VAR_16) {
      VAR_39 = FUNC_3(VAR_29[VAR_0]);
      VAR_40 = FUNC_3(VAR_29[VAR_8]);
      VAR_41 = FUNC_3(VAR_29[VAR_9]);
      VAR_42 = FUNC_3(VAR_29[VAR_1]);
      VAR_43 = FUNC_3(VAR_29[VAR_2]);
    } else {
      VAR_39 = VAR_38[VAR_20+VAR_3];
      VAR_40 = VAR_38[VAR_20+VAR_6];
      VAR_41 = VAR_38[VAR_20+VAR_7];
      VAR_42 = FUNC_3(VAR_29[VAR_4]);
      VAR_43 = FUNC_3(VAR_29[VAR_5]);
    }

    VAR_38[VAR_20+VAR_0] = VAR_39;
    VAR_38[VAR_20+VAR_8] = VAR_40;
    VAR_38[VAR_20+VAR_9] = VAR_41;


    if ((VAR_36 ^ VAR_37) & (VAR_17|VAR_18|VAR_15)) {

      if (!(VAR_37 & VAR_15)) {

 FUNC_4(&VAR_38[0], &VAR_38[VAR_20], VAR_21*sizeof(ASMFunction));

 if ((VAR_37 & VAR_19)) {
   VAR_38[VAR_13] = VAR_34;
   VAR_38[VAR_10] = VAR_34;
   VAR_38[VAR_11] = VAR_34;
   VAR_38[VAR_12] = VAR_34;
 }
      } else {

 ASMFunction VAR_44 = (VAR_37 & VAR_17) ? VAR_32 :
   (VAR_37 & VAR_18) ? VAR_33 : VAR_31;
 uint32_t VAR_45;
 for (VAR_45 = 0; VAR_45 < VAR_21; VAR_45++)
   VAR_38[VAR_45] = VAR_44;
      }
    } else if (!(VAR_37 & VAR_15)) {

      VAR_38[VAR_0] = VAR_39;
      VAR_38[VAR_8] = VAR_40;
      VAR_38[VAR_9] = VAR_41;

      if ((VAR_37 & VAR_19)) {
 VAR_38[VAR_13] = VAR_34;
 VAR_38[VAR_10] = VAR_34;
 VAR_38[VAR_11] = VAR_34;
 VAR_38[VAR_12] = VAR_34;
      } else {
 VAR_38[VAR_13] = VAR_38[VAR_20+VAR_13];
 VAR_38[VAR_10] = VAR_38[VAR_20+VAR_10];
 VAR_38[VAR_11] = VAR_38[VAR_20+VAR_11];
 VAR_38[VAR_12] = VAR_38[VAR_20+VAR_12];
      }
    }


    if ((VAR_36 ^ VAR_37) & VAR_14) {
      uint32_t VAR_46;
      if ((VAR_37 & VAR_14) == 0) {
 for (VAR_46 = VAR_21; VAR_46 < VAR_20; VAR_46++)
   VAR_38[VAR_46] = FUNC_3(VAR_29[VAR_46]);
      } else {
 for (VAR_46 = VAR_21; VAR_46 < VAR_20; VAR_46++)
   VAR_38[VAR_46] = VAR_30;
      }
    }
    if (!(VAR_37 & VAR_14)) {
      VAR_38[VAR_1] = VAR_42;
      VAR_38[VAR_2] = VAR_43;
    }






  }
}
