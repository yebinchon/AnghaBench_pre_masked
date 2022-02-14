
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ depth; char const* src_init; char const* src_end; int L; } ;
typedef TYPE_1__ MatchState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

 char* FUNC_0 (TYPE_1__*,char const*) ;
 char* FUNC_1 (TYPE_1__*,char const*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 char* FUNC_4 (TYPE_1__*,char const*,int ) ;
 char* FUNC_5 (TYPE_1__*,char const*,char const*) ;
 int FUNC_6 (int ,char const*,char const*) ;
 char* FUNC_7 (TYPE_1__*,char const*,char const*,char const*) ;
 char* FUNC_8 (TYPE_1__*,char const*,char const*,char const*) ;
 int FUNC_9 (int ,char const*,char const*) ;
 char* FUNC_10 (TYPE_1__*,char const*,char const*,int ) ;
 int FUNC_11 (char const) ;

__attribute__((used)) static const char *FUNC_12(MatchState *VAR_5, const char *VAR_6, const char *VAR_7)
{
  if (++VAR_5->depth > VAR_4)
    FUNC_3(VAR_5->L, VAR_3);
  init:
  switch (*VAR_7) {
  case '(':
    if (*(VAR_7+1) == ')')
      VAR_6 = FUNC_10(VAR_5, VAR_6, VAR_7+2, VAR_0);
    else
      VAR_6 = FUNC_10(VAR_5, VAR_6, VAR_7+1, VAR_1);
    break;
  case ')':
    VAR_6 = FUNC_1(VAR_5, VAR_6, VAR_7+1);
    break;
  case 128:
    switch (*(VAR_7+1)) {
    case 'b':
      VAR_6 = FUNC_5(VAR_5, VAR_6, VAR_7+2);
      if (VAR_6 == ((void*)0)) break;
      VAR_7+=4;
      goto init;
    case 'f': {
      const char *VAR_8; char VAR_9;
      VAR_7 += 2;
      if (*VAR_7 != '[')
 FUNC_3(VAR_5->L, VAR_2);
      VAR_8 = FUNC_0(VAR_5, VAR_7);
      VAR_9 = (VAR_6 == VAR_5->src_init) ? '\0' : *(VAR_6-1);
      if (FUNC_6(FUNC_11(VAR_9), VAR_7, VAR_8-1) ||
  !FUNC_6(FUNC_11(*VAR_6), VAR_7, VAR_8-1)) { VAR_6 = ((void*)0); break; }
      VAR_7=VAR_8;
      goto init;
      }
    default:
      if (FUNC_2(FUNC_11(*(VAR_7+1)))) {
 VAR_6 = FUNC_4(VAR_5, VAR_6, FUNC_11(*(VAR_7+1)));
 if (VAR_6 == ((void*)0)) break;
 VAR_7+=2;
 goto init;
      }
      goto dflt;
    }
    break;
  case '\0':
    break;
  case '$':

    if (*(VAR_7+1) != '\0') goto dflt;
    if (VAR_6 != VAR_5->src_end) VAR_6 = ((void*)0);
    break;
  default: dflt: {
    const char *VAR_10 = FUNC_0(VAR_5, VAR_7);
    int VAR_11 = VAR_6<VAR_5->src_end && FUNC_9(FUNC_11(*VAR_6), VAR_7, VAR_10);
    switch (*VAR_10) {
    case '?': {
      const char *VAR_12;
      if (VAR_11 && ((VAR_12=FUNC_12(VAR_5, VAR_6+1, VAR_10+1)) != ((void*)0))) {
 VAR_6 = VAR_12;
 break;
      }
      VAR_7=VAR_10+1;
      goto init;
      }
    case '*':
      VAR_6 = FUNC_7(VAR_5, VAR_6, VAR_7, VAR_10);
      break;
    case '+':
      VAR_6 = (VAR_11 ? FUNC_7(VAR_5, VAR_6+1, VAR_7, VAR_10) : ((void*)0));
      break;
    case '-':
      VAR_6 = FUNC_8(VAR_5, VAR_6, VAR_7, VAR_10);
      break;
    default:
      if (VAR_11) { VAR_6++; VAR_7=VAR_10; goto init; }
      VAR_6 = ((void*)0);
      break;
    }
    break;
    }
  }
  VAR_5->depth--;
  return VAR_6;
}
