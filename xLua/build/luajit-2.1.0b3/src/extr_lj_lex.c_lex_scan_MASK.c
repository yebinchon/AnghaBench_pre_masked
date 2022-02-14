
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ reserved; } ;
struct TYPE_16__ {int c; int sb; int L; } ;
typedef int TValue ;
typedef char LexToken ;
typedef TYPE_1__ LexState ;
typedef char LexChar ;
typedef TYPE_2__ GCstr ;



 int VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 char VAR_10 ;
 char VAR_11 ;
 char VAR_12 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 char FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (TYPE_1__*,char,int ) ;
 TYPE_2__* FUNC_12 (TYPE_1__*,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ,int *,TYPE_2__*) ;

__attribute__((used)) static LexToken FUNC_16(LexState *VAR_13, TValue *VAR_14)
{
  FUNC_8(&VAR_13->sb);
  for (;;) {
    if (FUNC_10(VAR_13->c)) {
      GCstr *VAR_15;
      if (FUNC_9(VAR_13->c)) {
 FUNC_4(VAR_13, VAR_14);
 return VAR_11;
      }

      do {
 FUNC_5(VAR_13);
      } while (FUNC_10(VAR_13->c));
      VAR_15 = FUNC_12(VAR_13, FUNC_13(&VAR_13->sb), FUNC_14(&VAR_13->sb));
      FUNC_15(VAR_13->L, VAR_14, VAR_15);
      if (VAR_15->reserved > 0)
 return VAR_1 + VAR_15->reserved;
      return VAR_9;
    }
    switch (VAR_13->c) {
    case '\n':
    case '\r':
      FUNC_2(VAR_13);
      continue;
    case ' ':
    case '\t':
    case '\v':
    case '\f':
      FUNC_3(VAR_13);
      continue;
    case '-':
      FUNC_3(VAR_13);
      if (VAR_13->c != '-') return '-';
      FUNC_3(VAR_13);
      if (VAR_13->c == '[') {
 int VAR_16 = FUNC_6(VAR_13);
 FUNC_8(&VAR_13->sb);
 if (VAR_16 >= 0) {
   FUNC_1(VAR_13, ((void*)0), VAR_16);
   FUNC_8(&VAR_13->sb);
   continue;
 }
      }

      while (!FUNC_0(VAR_13) && VAR_13->c != 128)
 FUNC_3(VAR_13);
      continue;
    case '[': {
      int VAR_17 = FUNC_6(VAR_13);
      if (VAR_17 >= 0) {
 FUNC_1(VAR_13, VAR_14, VAR_17);
 return VAR_12;
      } else if (VAR_17 == -1) {
 return '[';
      } else {
 FUNC_11(VAR_13, VAR_12, VAR_0);
 continue;
      }
      }
    case '=':
      FUNC_3(VAR_13);
      if (VAR_13->c != '=') return '='; else { FUNC_3(VAR_13); return VAR_5; }
    case '<':
      FUNC_3(VAR_13);
      if (VAR_13->c != '=') return '<'; else { FUNC_3(VAR_13); return VAR_8; }
    case '>':
      FUNC_3(VAR_13);
      if (VAR_13->c != '=') return '>'; else { FUNC_3(VAR_13); return VAR_6; }
    case '~':
      FUNC_3(VAR_13);
      if (VAR_13->c != '=') return '~'; else { FUNC_3(VAR_13); return VAR_10; }
    case ':':
      FUNC_3(VAR_13);
      if (VAR_13->c != ':') return ':'; else { FUNC_3(VAR_13); return VAR_7; }
    case '"':
    case '\'':
      FUNC_7(VAR_13, VAR_14);
      return VAR_12;
    case '.':
      if (FUNC_5(VAR_13) == '.') {
 FUNC_3(VAR_13);
 if (VAR_13->c == '.') {
   FUNC_3(VAR_13);
   return VAR_3;
 }
 return VAR_2;
      } else if (!FUNC_9(VAR_13->c)) {
 return '.';
      } else {
 FUNC_4(VAR_13, VAR_14);
 return VAR_11;
      }
    case 128:
      return VAR_4;
    default: {
      LexChar VAR_18 = VAR_13->c;
      FUNC_3(VAR_13);
      return VAR_18;
    }
    }
  }
}
