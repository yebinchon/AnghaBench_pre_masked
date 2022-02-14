
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_8__ {int id; scalar_t__ i32; } ;
struct TYPE_9__ {char c; TYPE_1__ val; int sb; int L; int str; } ;
typedef int CPToken ;
typedef TYPE_2__ CPState ;
typedef char CPChar ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,char) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 char FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char) ;
 scalar_t__* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static CPToken FUNC_9(CPState *VAR_5)
{
  CPChar VAR_6 = VAR_5->c;
  FUNC_2(VAR_5);
  while (VAR_5->c != VAR_6) {
    CPChar VAR_7 = VAR_5->c;
    if (VAR_7 == '\0') FUNC_1(VAR_5, VAR_1, VAR_4);
    if (VAR_7 == '\\') {
      VAR_7 = FUNC_2(VAR_5);
      switch (VAR_7) {
      case '\0': FUNC_1(VAR_5, VAR_1, VAR_4); break;
      case 'a': VAR_7 = '\a'; break;
      case 'b': VAR_7 = '\b'; break;
      case 'f': VAR_7 = '\f'; break;
      case 'n': VAR_7 = '\n'; break;
      case 'r': VAR_7 = '\r'; break;
      case 't': VAR_7 = '\t'; break;
      case 'v': VAR_7 = '\v'; break;
      case 'e': VAR_7 = 27; break;
      case 'x':
 VAR_7 = 0;
 while (FUNC_6(FUNC_2(VAR_5)))
   VAR_7 = (VAR_7<<4) + (FUNC_5(VAR_5->c) ? VAR_5->c-'0' : (VAR_5->c&15)+9);
 FUNC_3(VAR_5, (VAR_7 & 0xff));
 continue;
      default:
 if (FUNC_5(VAR_7)) {
   VAR_7 -= '0';
   if (FUNC_5(FUNC_2(VAR_5))) {
     VAR_7 = VAR_7*8 + (VAR_5->c - '0');
     if (FUNC_5(FUNC_2(VAR_5))) {
       VAR_7 = VAR_7*8 + (VAR_5->c - '0');
       FUNC_2(VAR_5);
     }
   }
   FUNC_3(VAR_5, (VAR_7 & 0xff));
   continue;
 }
 break;
      }
    }
    FUNC_3(VAR_5, VAR_7);
    FUNC_2(VAR_5);
  }
  FUNC_2(VAR_5);
  if (VAR_6 == '"') {
    VAR_5->str = FUNC_4(VAR_5->L, &VAR_5->sb);
    return VAR_3;
  } else {
    if (FUNC_8(&VAR_5->sb) != 1) FUNC_0(VAR_5, '\'');
    VAR_5->val.i32 = (int32_t)(char)*FUNC_7(&VAR_5->sb);
    VAR_5->val.id = VAR_0;
    return VAR_2;
  }
}
