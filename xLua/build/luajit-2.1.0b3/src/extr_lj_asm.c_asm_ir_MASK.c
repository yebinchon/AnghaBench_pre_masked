
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_137__ TYPE_5__ ;
typedef struct TYPE_136__ TYPE_2__ ;
typedef struct TYPE_135__ TYPE_1__ ;


struct TYPE_137__ {int errinfo; } ;
struct TYPE_136__ {TYPE_5__* J; int gcsteps; int curins; } ;
struct TYPE_135__ {int o; int op1; int t; } ;
typedef int IROp ;
typedef TYPE_1__ IRIns ;
typedef TYPE_2__ ASMState ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_11 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_12 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_13 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_14 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_15 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_16 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_17 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_18 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_19 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_20 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_21 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_22 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_23 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_24 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_25 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_26 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_27 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_28 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_29 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_30 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_31 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_32 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_33 (TYPE_2__*,TYPE_1__*,int ) ;
 int FUNC_34 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_35 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_36 (TYPE_2__*) ;
 int FUNC_37 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_38 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_39 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_40 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_41 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_42 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_43 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_44 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_45 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_46 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_47 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_48 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_49 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_50 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_51 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_52 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_53 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_54 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_55 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_56 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_57 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_58 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_59 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_60 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_61 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_62 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_63 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_64 (int ) ;
 int FUNC_65 (TYPE_5__*,int ) ;
 int FUNC_66 (int) ;
 int FUNC_67 (TYPE_2__*,int ,int ) ;
 int FUNC_68 (TYPE_1__*) ;
 int FUNC_69 (int *,int) ;

__attribute__((used)) static void FUNC_70(ASMState *VAR_3, IRIns *VAR_4)
{
  switch ((IROp)VAR_4->o) {

  case 169: FUNC_36(VAR_3); break;
  case 158: case 131: FUNC_66(!FUNC_68(VAR_4)); break;
  case 134:
    FUNC_67(VAR_3, VAR_4->op1, FUNC_64(VAR_4->t) ? VAR_1 : VAR_2); break;
  case 156: FUNC_46(VAR_3, VAR_4); break;
  case 176: FUNC_32(VAR_3, VAR_4); break;
  case 179: FUNC_31(VAR_3, VAR_4); break;
  case 154: FUNC_48(VAR_3, VAR_4); break;


  case 167: case 178: case 170: case 177:
  case 137: case 141: case 139: case 140:
  case 215:
    FUNC_23(VAR_3, VAR_4);
    break;
  case 184: case 161:
    if ((VAR_4-1)->o == 174 && VAR_4->op1 == VAR_3->curins-1) {
      VAR_3->curins--;
      FUNC_33(VAR_3, VAR_4-1, (IROp)VAR_4->o);
    } else {
      FUNC_26(VAR_3, VAR_4);
    }
    break;

  case 153: FUNC_49(VAR_3, VAR_4); break;


  case 206: FUNC_8(VAR_3, VAR_4); break;
  case 199: FUNC_15(VAR_3, VAR_4); break;
  case 207: FUNC_7(VAR_3, VAR_4); break;
  case 205: FUNC_9(VAR_3, VAR_4); break;
  case 195: FUNC_19(VAR_3, VAR_4); break;
  case 201: FUNC_13(VAR_3, VAR_4); break;
  case 200: FUNC_14(VAR_3, VAR_4); break;
  case 202: FUNC_12(VAR_3, VAR_4); break;
  case 204: FUNC_10(VAR_3, VAR_4); break;
  case 203: FUNC_11(VAR_3, VAR_4); break;


  case 213: FUNC_1(VAR_3, VAR_4); break;
  case 148: FUNC_54(VAR_3, VAR_4); break;
  case 163: FUNC_41(VAR_3, VAR_4); break;
  case 164: FUNC_40(VAR_3, VAR_4); break;
  case 160: FUNC_43(VAR_3, VAR_4); break;






  case 185: FUNC_25(VAR_3, VAR_4); break;
  case 155: FUNC_47(VAR_3, VAR_4); break;
  case 214: FUNC_0(VAR_3, VAR_4); break;
  case 208: FUNC_6(VAR_3, VAR_4); break;
  case 171: FUNC_35(VAR_3, VAR_4); break;
  case 182: FUNC_28(VAR_3, VAR_4); break;
  case 143: FUNC_59(VAR_3, VAR_4); break;

  case 165: FUNC_39(VAR_3, VAR_4); break;
  case 166: FUNC_38(VAR_3, VAR_4); break;


  case 212: FUNC_2(VAR_3, VAR_4); break;
  case 147: FUNC_55(VAR_3, VAR_4); break;
  case 162: FUNC_42(VAR_3, VAR_4); break;


  case 210: FUNC_5(VAR_3, VAR_4); break;
  case 174: FUNC_33(VAR_3, VAR_4, 0); break;
  case 173: FUNC_34(VAR_3, VAR_4); break;
  case 159: FUNC_44(VAR_3, VAR_4); break;
  case 135: case 136: FUNC_61(VAR_3, VAR_4); break;
  case 181: FUNC_29(VAR_3, VAR_4); break;
  case 150: FUNC_52(VAR_3, VAR_4); break;
  case 168: FUNC_37(VAR_3, VAR_4); break;


  case 211: case 175: case 138: case 132:
    FUNC_4(VAR_3, VAR_4);
    break;
  case 183: FUNC_27(VAR_3, VAR_4); break;
  case 130: FUNC_62(VAR_3, VAR_4); break;
  case 152: FUNC_50(VAR_3, VAR_4); break;

  case 209: case 172: case 133: FUNC_3(VAR_3, VAR_4); break;
  case 180: FUNC_30(VAR_3, VAR_4); break;
  case 128: FUNC_63(VAR_3, VAR_4); break;


  case 151: case 129: FUNC_51(VAR_3, VAR_4); break;
  case 144: FUNC_58(VAR_3, VAR_4); break;
  case 145: FUNC_57(VAR_3, VAR_4); break;
  case 188: case 187: FUNC_22(VAR_3, VAR_4); break;


  case 198: FUNC_16(VAR_3, VAR_4); break;
  case 197: FUNC_17(VAR_3, VAR_4); break;
  case 196: FUNC_18(VAR_3, VAR_4); break;


  case 146: FUNC_56(VAR_3, VAR_4); break;
  case 157: FUNC_45(VAR_3, VAR_4); break;


  case 186: FUNC_24(VAR_3, VAR_4); break;
  case 142: FUNC_60(VAR_3, VAR_4); break;
  case 149: FUNC_53(VAR_3, VAR_4); break;


  case 194:
    VAR_3->gcsteps++;

  case 192: case 193: case 191: FUNC_20(VAR_3, VAR_4); break;
  case 190: FUNC_21(VAR_3, VAR_4); break;
  case 189: break;

  default:
    FUNC_69(&VAR_3->J->errinfo, VAR_4->o);
    FUNC_65(VAR_3->J, VAR_0);
    break;
  }
}
