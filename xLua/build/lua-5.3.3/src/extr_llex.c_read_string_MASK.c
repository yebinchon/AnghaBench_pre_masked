
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int current; int buff; } ;
struct TYPE_16__ {int ts; } ;
typedef TYPE_1__ SemInfo ;
typedef TYPE_2__ LexState ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,int) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_16 (LexState *VAR_2, int VAR_3, SemInfo *VAR_4) {
  FUNC_14(VAR_2);
  while (VAR_2->current != VAR_3) {
    switch (VAR_2->current) {
      case 128:
        FUNC_3(VAR_2, "unfinished string", VAR_0);
        break;
      case '\n':
      case '\r':
        FUNC_3(VAR_2, "unfinished string", VAR_1);
        break;
      case '\\': {
        int VAR_5;
        FUNC_14(VAR_2);
        switch (VAR_2->current) {
          case 'a': VAR_5 = '\a'; goto read_save;
          case 'b': VAR_5 = '\b'; goto read_save;
          case 'f': VAR_5 = '\f'; goto read_save;
          case 'n': VAR_5 = '\n'; goto read_save;
          case 'r': VAR_5 = '\r'; goto read_save;
          case 't': VAR_5 = '\t'; goto read_save;
          case 'v': VAR_5 = '\v'; goto read_save;
          case 'x': VAR_5 = FUNC_12(VAR_2); goto read_save;
          case 'u': FUNC_15(VAR_2); goto no_save;
          case '\n': case '\r':
            FUNC_2(VAR_2); VAR_5 = '\n'; goto only_save;
          case '\\': case '\"': case '\'':
            VAR_5 = VAR_2->current; goto read_save;
          case 128: goto no_save;
          case 'z': {
            FUNC_9(VAR_2->buff, 1);
            FUNC_10(VAR_2);
            while (FUNC_5(VAR_2->current)) {
              if (FUNC_0(VAR_2)) FUNC_2(VAR_2);
              else FUNC_10(VAR_2);
            }
            goto no_save;
          }
          default: {
            FUNC_1(VAR_2, FUNC_4(VAR_2->current), "invalid escape sequence");
            VAR_5 = FUNC_11(VAR_2);
            goto only_save;
          }
        }
       read_save:
         FUNC_10(VAR_2);

       only_save:
         FUNC_9(VAR_2->buff, 1);
         FUNC_13(VAR_2, VAR_5);

       no_save: break;
      }
      default:
        FUNC_14(VAR_2);
    }
  }
  FUNC_14(VAR_2);
  VAR_4->ts = FUNC_6(VAR_2, FUNC_7(VAR_2->buff) + 1,
                                   FUNC_8(VAR_2->buff) - 2);
}
