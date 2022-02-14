
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sizecode; int * p; scalar_t__* code; } ;
typedef TYPE_1__ Proto ;
typedef size_t OpCode ;
typedef scalar_t__ Instruction ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 size_t FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (TYPE_1__ const*,int) ;
 char* FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (size_t) ;
 int FUNC_14 (size_t) ;
 int FUNC_15 (size_t) ;
 int FUNC_16 (TYPE_1__ const*,int) ;




 char** VAR_3 ;
 int FUNC_17 (char*,...) ;

__attribute__((used)) static void FUNC_18(const Proto* VAR_4)
{
 const Instruction* VAR_5=VAR_4->code;
 int VAR_6,VAR_7=VAR_4->sizecode;
 for (VAR_6=0; VAR_6<VAR_7; VAR_6++)
 {
  Instruction VAR_8=VAR_5[VAR_6];
  OpCode VAR_9=FUNC_6(VAR_8);
  int VAR_10=FUNC_0(VAR_8);
  int VAR_11=FUNC_2(VAR_8);
  int VAR_12=FUNC_4(VAR_8);
  int VAR_13=FUNC_1(VAR_8);
  int VAR_14=FUNC_3(VAR_8);
  int VAR_15=FUNC_5(VAR_8);
  int VAR_16=FUNC_16(VAR_4,VAR_6);
  FUNC_17("\t%d\t",VAR_6+1);
  if (VAR_16>0) FUNC_17("[%d]\t",VAR_16); else FUNC_17("[-]\t");
  FUNC_17("%-9s\t",VAR_3[VAR_9]);
  switch (FUNC_15(VAR_9))
  {
   case 131:
    FUNC_17("%d",VAR_10);
    if (FUNC_13(VAR_9)!=VAR_1) FUNC_17(" %d",FUNC_8(VAR_11) ? (FUNC_9(FUNC_7(VAR_11))) : VAR_11);
    if (FUNC_14(VAR_9)!=VAR_1) FUNC_17(" %d",FUNC_8(VAR_12) ? (FUNC_9(FUNC_7(VAR_12))) : VAR_12);
    break;
   case 130:
    FUNC_17("%d",VAR_10);
    if (FUNC_13(VAR_9)==VAR_0) FUNC_17(" %d",FUNC_9(VAR_14));
    if (FUNC_13(VAR_9)==VAR_2) FUNC_17(" %d",VAR_14);
    break;
   case 129:
    FUNC_17("%d %d",VAR_10,VAR_15);
    break;
   case 128:
    FUNC_17("%d",FUNC_9(VAR_13));
    break;
  }
  switch (VAR_9)
  {
   case 145:
    FUNC_17("\t; "); FUNC_10(VAR_4,VAR_14);
    break;
   case 149:
   case 136:
    FUNC_17("\t; %s",FUNC_11(VAR_11));
    break;
   case 150:
    FUNC_17("\t; %s",FUNC_11(VAR_11));
    if (FUNC_8(VAR_12)) { FUNC_17(" "); FUNC_10(VAR_4,FUNC_7(VAR_12)); }
    break;
   case 137:
    FUNC_17("\t; %s",FUNC_11(VAR_10));
    if (FUNC_8(VAR_11)) { FUNC_17(" "); FUNC_10(VAR_4,FUNC_7(VAR_11)); }
    if (FUNC_8(VAR_12)) { FUNC_17(" "); FUNC_10(VAR_4,FUNC_7(VAR_12)); }
    break;
   case 151:
   case 140:
    if (FUNC_8(VAR_12)) { FUNC_17("\t; "); FUNC_10(VAR_4,FUNC_7(VAR_12)); }
    break;
   case 138:
   case 161:
   case 133:
   case 142:
   case 143:
   case 141:
   case 156:
   case 148:
   case 160:
   case 159:
   case 158:
   case 135:
   case 134:
   case 155:
   case 144:
   case 146:
    if (FUNC_8(VAR_11) || FUNC_8(VAR_12))
    {
     FUNC_17("\t; ");
     if (FUNC_8(VAR_11)) FUNC_10(VAR_4,FUNC_7(VAR_11)); else FUNC_17("-");
     FUNC_17(" ");
     if (FUNC_8(VAR_12)) FUNC_10(VAR_4,FUNC_7(VAR_12)); else FUNC_17("-");
    }
    break;
   case 147:
   case 153:
   case 152:
   case 132:
    FUNC_17("\t; to %d",VAR_15+VAR_6+2);
    break;
   case 157:
    FUNC_17("\t; %p",FUNC_12(VAR_4->p[VAR_14]));
    break;
   case 139:
    if (VAR_12==0) FUNC_17("\t; %d",(int)VAR_5[++VAR_6]); else FUNC_17("\t; %d",VAR_12);
    break;
   case 154:
    FUNC_17("\t; "); FUNC_10(VAR_4,VAR_13);
    break;
   default:
    break;
  }
  FUNC_17("\n");
 }
}
