
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_11__ ;


struct TYPE_17__ {int needsp; int cts; } ;
struct TYPE_16__ {int info; int size; } ;
struct TYPE_15__ {int size; } ;
typedef int CTypeID ;
typedef TYPE_1__ CType ;
typedef int CTSize ;
typedef TYPE_2__ CTRepr ;
typedef int CTInfo ;


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
 int FUNC_0 (TYPE_2__*,char) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int) ;
 TYPE_11__* FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int) ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*,char) ;
 int FUNC_8 (TYPE_2__*,char*) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*,TYPE_1__*,int,char*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(CTRepr *VAR_12, CTypeID VAR_13)
{
  CType *VAR_14 = FUNC_5(VAR_12->cts, VAR_13);
  CTInfo VAR_15 = 0;
  int VAR_16 = 0;
  for (;;) {
    CTInfo VAR_17 = VAR_14->info;
    CTSize VAR_18 = VAR_14->size;
    switch (FUNC_12(VAR_17)) {
    case 131:
      if ((VAR_17 & VAR_1)) {
 FUNC_8(VAR_12, "bool");
      } else if ((VAR_17 & VAR_3)) {
 if (VAR_18 == sizeof(double)) FUNC_8(VAR_12, "double");
 else if (VAR_18 == sizeof(float)) FUNC_8(VAR_12, "float");
 else FUNC_8(VAR_12, "long double");
      } else if (VAR_18 == 1) {
 if (!((VAR_17 ^ VAR_5) & VAR_7)) FUNC_8(VAR_12, "char");
 else if (VAR_5) FUNC_8(VAR_12, "signed char");
 else FUNC_8(VAR_12, "unsigned char");
      } else if (VAR_18 < 8) {
 if (VAR_18 == 4) FUNC_8(VAR_12, "int");
 else FUNC_8(VAR_12, "short");
 if ((VAR_17 & VAR_7)) FUNC_8(VAR_12, "unsigned");
      } else {
 FUNC_8(VAR_12, "_t");
 FUNC_9(VAR_12, VAR_18*8);
 FUNC_8(VAR_12, "int");
 if ((VAR_17 & VAR_7)) FUNC_7(VAR_12, 'u');
      }
      FUNC_10(VAR_12, (VAR_15|VAR_17));
      return;
    case 128:
      FUNC_8(VAR_12, "void");
      FUNC_10(VAR_12, (VAR_15|VAR_17));
      return;
    case 129:
      FUNC_11(VAR_12, VAR_14, VAR_15, (VAR_17 & VAR_6) ? "union" : "struct");
      return;
    case 133:
      if (VAR_13 == VAR_9) {
 FUNC_8(VAR_12, "ctype");
 return;
      }
      FUNC_11(VAR_12, VAR_14, VAR_15, "enum");
      return;
    case 134:
      if (FUNC_2(VAR_17) == VAR_0) VAR_15 |= VAR_18;
      break;
    case 130:
      if ((VAR_17 & VAR_4)) {
 FUNC_7(VAR_12, '&');
      } else {
 FUNC_10(VAR_12, (VAR_15|VAR_17));
 if (VAR_11 && VAR_18 == 4) FUNC_8(VAR_12, "__ptr32");
 FUNC_7(VAR_12, '*');
      }
      VAR_15 = 0;
      VAR_16 = 1;
      VAR_12->needsp = 1;
      break;
    case 135:
      if (FUNC_6(VAR_17)) {
 VAR_12->needsp = 1;
 if (VAR_16) { VAR_16 = 0; FUNC_7(VAR_12, '('); FUNC_0(VAR_12, ')'); }
 FUNC_0(VAR_12, '[');
 if (VAR_18 != VAR_10) {
   CTSize VAR_19 = FUNC_3(VAR_12->cts, VAR_14)->size;
   FUNC_1(VAR_12, VAR_19 ? VAR_18/VAR_19 : 0);
 } else if ((VAR_17 & VAR_8)) {
   FUNC_0(VAR_12, '?');
 }
 FUNC_0(VAR_12, ']');
      } else if ((VAR_17 & VAR_2)) {
 if (VAR_18 == 2*sizeof(float)) FUNC_8(VAR_12, "float");
 FUNC_8(VAR_12, "complex");
 return;
      } else {
 FUNC_8(VAR_12, ")))");
 FUNC_9(VAR_12, VAR_18);
 FUNC_8(VAR_12, "__attribute__((vector_size(");
      }
      break;
    case 132:
      VAR_12->needsp = 1;
      if (VAR_16) { VAR_16 = 0; FUNC_7(VAR_12, '('); FUNC_0(VAR_12, ')'); }
      FUNC_0(VAR_12, '(');
      FUNC_0(VAR_12, ')');
      break;
    default:
      FUNC_13(0);
      break;
    }
    VAR_14 = FUNC_5(VAR_12->cts, FUNC_4(VAR_17));
  }
}
