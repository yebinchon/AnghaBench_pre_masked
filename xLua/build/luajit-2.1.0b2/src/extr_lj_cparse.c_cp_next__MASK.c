
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int c; int sb; } ;
typedef char CPToken ;
typedef TYPE_1__ CPState ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 char VAR_9 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 char FUNC_2 (TYPE_1__*) ;
 char FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 char FUNC_5 (TYPE_1__*) ;
 char FUNC_6 (TYPE_1__*) ;
 char FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static CPToken FUNC_11(CPState *VAR_10)
{
  FUNC_8(&VAR_10->sb);
  for (;;) {
    if (FUNC_10(VAR_10->c))
      return FUNC_9(VAR_10->c) ? FUNC_5(VAR_10) : FUNC_3(VAR_10);
    switch (VAR_10->c) {
    case '\n': case '\r': FUNC_4(VAR_10);
    case ' ': case '\t': case '\v': case '\f': FUNC_2(VAR_10); break;
    case '"': case '\'': return FUNC_7(VAR_10);
    case '/':
      if (FUNC_2(VAR_10) == '*') FUNC_0(VAR_10);
      else if (VAR_10->c == '/') FUNC_1(VAR_10);
      else return '/';
      break;
    case '|':
      if (FUNC_2(VAR_10) != '|') return '|'; FUNC_2(VAR_10); return VAR_7;
    case '&':
      if (FUNC_2(VAR_10) != '&') return '&'; FUNC_2(VAR_10); return VAR_0;
    case '=':
      if (FUNC_2(VAR_10) != '=') return '='; FUNC_2(VAR_10); return VAR_3;
    case '!':
      if (FUNC_2(VAR_10) != '=') return '!'; FUNC_2(VAR_10); return VAR_6;
    case '<':
      if (FUNC_2(VAR_10) == '=') { FUNC_2(VAR_10); return VAR_5; }
      else if (VAR_10->c == '<') { FUNC_2(VAR_10); return VAR_8; }
      return '<';
    case '>':
      if (FUNC_2(VAR_10) == '=') { FUNC_2(VAR_10); return VAR_4; }
      else if (VAR_10->c == '>') { FUNC_2(VAR_10); return VAR_9; }
      return '>';
    case '-':
      if (FUNC_2(VAR_10) != '>') return '-'; FUNC_2(VAR_10); return VAR_1;
    case '$':
      return FUNC_6(VAR_10);
    case '\0': return VAR_2;
    default: { CPToken VAR_11 = VAR_10->c; FUNC_2(VAR_10); return VAR_11; }
    }
  }
}
