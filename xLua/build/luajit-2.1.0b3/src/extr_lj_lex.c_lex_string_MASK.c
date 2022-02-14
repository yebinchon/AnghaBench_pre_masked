
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int c; int sb; int L; } ;
typedef int TValue ;
typedef TYPE_1__ LexState ;
typedef int LexChar ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,int ,int ) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_13(LexState *VAR_4, TValue *VAR_5)
{
  LexChar VAR_6 = VAR_4->c;
  FUNC_4(VAR_4);
  while (VAR_4->c != VAR_6) {
    switch (VAR_4->c) {
    case 128:
      FUNC_8(VAR_4, VAR_2, VAR_1);
      continue;
    case '\n':
    case '\r':
      FUNC_8(VAR_4, VAR_3, VAR_1);
      continue;
    case '\\': {
      LexChar VAR_7 = FUNC_2(VAR_4);
      switch (VAR_7) {
      case 'a': VAR_7 = '\a'; break;
      case 'b': VAR_7 = '\b'; break;
      case 'f': VAR_7 = '\f'; break;
      case 'n': VAR_7 = '\n'; break;
      case 'r': VAR_7 = '\r'; break;
      case 't': VAR_7 = '\t'; break;
      case 'v': VAR_7 = '\v'; break;
      case 'x':
 VAR_7 = (FUNC_2(VAR_4) & 15u) << 4;
 if (!FUNC_5(VAR_4->c)) {
   if (!FUNC_7(VAR_4->c)) goto err_xesc;
   VAR_7 += 9 << 4;
 }
 VAR_7 += (FUNC_2(VAR_4) & 15u);
 if (!FUNC_5(VAR_4->c)) {
   if (!FUNC_7(VAR_4->c)) goto err_xesc;
   VAR_7 += 9;
 }
 break;
      case 'u':
 if (FUNC_2(VAR_4) != '{') goto err_xesc;
 FUNC_2(VAR_4);
 VAR_7 = 0;
 do {
   VAR_7 = (VAR_7 << 4) | (VAR_4->c & 15u);
   if (!FUNC_5(VAR_4->c)) {
     if (!FUNC_7(VAR_4->c)) goto err_xesc;
     VAR_7 += 9;
   }
   if (VAR_7 >= 0x110000) goto err_xesc;
 } while (FUNC_2(VAR_4) != '}');
 if (VAR_7 < 0x800) {
   if (VAR_7 < 0x80) break;
   FUNC_3(VAR_4, 0xc0 | (VAR_7 >> 6));
 } else {
   if (VAR_7 >= 0x10000) {
     FUNC_3(VAR_4, 0xf0 | (VAR_7 >> 18));
     FUNC_3(VAR_4, 0x80 | ((VAR_7 >> 12) & 0x3f));
   } else {
     if (VAR_7 >= 0xd800 && VAR_7 < 0xe000) goto err_xesc;
     FUNC_3(VAR_4, 0xe0 | (VAR_7 >> 12));
   }
   FUNC_3(VAR_4, 0x80 | ((VAR_7 >> 6) & 0x3f));
 }
 VAR_7 = 0x80 | (VAR_7 & 0x3f);
 break;
      case 'z':
 FUNC_2(VAR_4);
 while (FUNC_6(VAR_4->c))
   if (FUNC_0(VAR_4)) FUNC_1(VAR_4); else FUNC_2(VAR_4);
 continue;
      case '\n': case '\r': FUNC_3(VAR_4, '\n'); FUNC_1(VAR_4); continue;
      case '\\': case '\"': case '\'': break;
      case 128: continue;
      default:
 if (!FUNC_5(VAR_7))
   goto err_xesc;
 VAR_7 -= '0';
 if (FUNC_5(FUNC_2(VAR_4))) {
   VAR_7 = VAR_7*10 + (VAR_4->c - '0');
   if (FUNC_5(FUNC_2(VAR_4))) {
     VAR_7 = VAR_7*10 + (VAR_4->c - '0');
     if (VAR_7 > 255) {
     err_xesc:
       FUNC_8(VAR_4, VAR_3, VAR_0);
     }
     FUNC_2(VAR_4);
   }
 }
 FUNC_3(VAR_4, VAR_7);
 continue;
      }
      FUNC_3(VAR_4, VAR_7);
      FUNC_2(VAR_4);
      continue;
      }
    default:
      FUNC_4(VAR_4);
      break;
    }
  }
  FUNC_4(VAR_4);
  FUNC_12(VAR_4->L, VAR_5,
   FUNC_9(VAR_4, FUNC_10(&VAR_4->sb)+1, FUNC_11(&VAR_4->sb)-2));
}
