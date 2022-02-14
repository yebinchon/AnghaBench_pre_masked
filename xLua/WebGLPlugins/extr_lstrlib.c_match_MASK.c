
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {char const* p_end; char const* src_end; char const* src_init; int matchdepth; int L; } ;
typedef TYPE_1__ MatchState ;


 int VAR_0 ;
 int VAR_1 ;

 char* FUNC_0 (TYPE_1__*,char const*) ;
 char* FUNC_1 (TYPE_1__*,char const*,char const*) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (TYPE_1__*,char const*,int ) ;
 char* FUNC_4 (TYPE_1__*,char const*,char const*) ;
 int FUNC_5 (int ,char const*,char const*) ;
 char* FUNC_6 (TYPE_1__*,char const*,char const*,char const*) ;
 char* FUNC_7 (TYPE_1__*,char const*,char const*,char const*) ;
 int FUNC_8 (TYPE_1__*,char const*,char const*,char const*) ;
 char* FUNC_9 (TYPE_1__*,char const*,char const*,int ) ;
 int FUNC_10 (char const) ;

__attribute__((used)) static const char *FUNC_11 (MatchState *VAR_2, const char *VAR_3, const char *VAR_4) {
  if (VAR_2->matchdepth-- == 0)
    FUNC_2(VAR_2->L, "pattern too complex");
  init:
  if (VAR_4 != VAR_2->p_end) {
    switch (*VAR_4) {
      case '(': {
        if (*(VAR_4 + 1) == ')')
          VAR_3 = FUNC_9(VAR_2, VAR_3, VAR_4 + 2, VAR_0);
        else
          VAR_3 = FUNC_9(VAR_2, VAR_3, VAR_4 + 1, VAR_1);
        break;
      }
      case ')': {
        VAR_3 = FUNC_1(VAR_2, VAR_3, VAR_4 + 1);
        break;
      }
      case '$': {
        if ((VAR_4 + 1) != VAR_2->p_end)
          goto dflt;
        VAR_3 = (VAR_3 == VAR_2->src_end) ? VAR_3 : ((void*)0);
        break;
      }
      case 128: {
        switch (*(VAR_4 + 1)) {
          case 'b': {
            VAR_3 = FUNC_4(VAR_2, VAR_3, VAR_4 + 2);
            if (VAR_3 != ((void*)0)) {
              VAR_4 += 4; goto init;
            }
            break;
          }
          case 'f': {
            const char *VAR_5; char VAR_6;
            VAR_4 += 2;
            if (*VAR_4 != '[')
              FUNC_2(VAR_2->L, "missing '[' after '%%f' in pattern");
            VAR_5 = FUNC_0(VAR_2, VAR_4);
            VAR_6 = (VAR_3 == VAR_2->src_init) ? '\0' : *(VAR_3 - 1);
            if (!FUNC_5(FUNC_10(VAR_6), VAR_4, VAR_5 - 1) &&
               FUNC_5(FUNC_10(*VAR_3), VAR_4, VAR_5 - 1)) {
              VAR_4 = VAR_5; goto init;
            }
            VAR_3 = ((void*)0);
            break;
          }
          case '0': case '1': case '2': case '3':
          case '4': case '5': case '6': case '7':
          case '8': case '9': {
            VAR_3 = FUNC_3(VAR_2, VAR_3, FUNC_10(*(VAR_4 + 1)));
            if (VAR_3 != ((void*)0)) {
              VAR_4 += 2; goto init;
            }
            break;
          }
          default: goto dflt;
        }
        break;
      }
      default: dflt: {
        const char *VAR_7 = FUNC_0(VAR_2, VAR_4);

        if (!FUNC_8(VAR_2, VAR_3, VAR_4, VAR_7)) {
          if (*VAR_7 == '*' || *VAR_7 == '?' || *VAR_7 == '-') {
            VAR_4 = VAR_7 + 1; goto init;
          }
          else
            VAR_3 = ((void*)0);
        }
        else {
          switch (*VAR_7) {
            case '?': {
              const char *VAR_8;
              if ((VAR_8 = FUNC_11(VAR_2, VAR_3 + 1, VAR_7 + 1)) != ((void*)0))
                VAR_3 = VAR_8;
              else {
                VAR_4 = VAR_7 + 1; goto init;
              }
              break;
            }
            case '+':
              VAR_3++;

            case '*':
              VAR_3 = FUNC_6(VAR_2, VAR_3, VAR_4, VAR_7);
              break;
            case '-':
              VAR_3 = FUNC_7(VAR_2, VAR_3, VAR_4, VAR_7);
              break;
            default:
              VAR_3++; VAR_4 = VAR_7; goto init;
          }
        }
        break;
      }
    }
  }
  VAR_2->matchdepth++;
  return VAR_3;
}
