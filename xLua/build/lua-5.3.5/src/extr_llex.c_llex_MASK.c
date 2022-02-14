
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_24__ {int current; int buff; } ;
struct TYPE_23__ {TYPE_1__* ts; } ;
struct TYPE_22__ {int extra; } ;
typedef TYPE_1__ TString ;
typedef TYPE_2__ SemInfo ;
typedef TYPE_3__ LexState ;



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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_3__*,char) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_3__*,char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 TYPE_1__* FUNC_8 (TYPE_3__*,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*,TYPE_2__*,int) ;
 int FUNC_14 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_15 (TYPE_3__*,int,TYPE_2__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_18 (LexState *VAR_14, SemInfo *VAR_15) {
  FUNC_11(VAR_14->buff);
  for (;;) {
    switch (VAR_14->current) {
      case '\n': case '\r': {
        FUNC_2(VAR_14);
        break;
      }
      case ' ': case '\f': case '\t': case '\v': {
        FUNC_12(VAR_14);
        break;
      }
      case '-': {
        FUNC_12(VAR_14);
        if (VAR_14->current != '-') return '-';

        FUNC_12(VAR_14);
        if (VAR_14->current == '[') {
          int VAR_16 = FUNC_17(VAR_14);
          FUNC_11(VAR_14->buff);
          if (VAR_16 >= 0) {
            FUNC_13(VAR_14, ((void*)0), VAR_16);
            FUNC_11(VAR_14->buff);
            break;
          }
        }

        while (!FUNC_1(VAR_14) && VAR_14->current != 128)
          FUNC_12(VAR_14);
        break;
      }
      case '[': {
        int VAR_17 = FUNC_17(VAR_14);
        if (VAR_17 >= 0) {
          FUNC_13(VAR_14, VAR_15, VAR_17);
          return VAR_13;
        }
        else if (VAR_17 != -1)
          FUNC_4(VAR_14, "invalid long string delimiter", VAR_13);
        return '[';
      }
      case '=': {
        FUNC_12(VAR_14);
        if (FUNC_0(VAR_14, '=')) return VAR_5;
        else return '=';
      }
      case '<': {
        FUNC_12(VAR_14);
        if (FUNC_0(VAR_14, '=')) return VAR_8;
        else if (FUNC_0(VAR_14, '<')) return VAR_11;
        else return '<';
      }
      case '>': {
        FUNC_12(VAR_14);
        if (FUNC_0(VAR_14, '=')) return VAR_6;
        else if (FUNC_0(VAR_14, '>')) return VAR_12;
        else return '>';
      }
      case '/': {
        FUNC_12(VAR_14);
        if (FUNC_0(VAR_14, '/')) return VAR_7;
        else return '/';
      }
      case '~': {
        FUNC_12(VAR_14);
        if (FUNC_0(VAR_14, '=')) return VAR_10;
        else return '~';
      }
      case ':': {
        FUNC_12(VAR_14);
        if (FUNC_0(VAR_14, ':')) return VAR_2;
        else return ':';
      }
      case '"': case '\'': {
        FUNC_15(VAR_14, VAR_14->current, VAR_15);
        return VAR_13;
      }
      case '.': {
        FUNC_16(VAR_14);
        if (FUNC_0(VAR_14, '.')) {
          if (FUNC_0(VAR_14, '.'))
            return VAR_3;
          else return VAR_1;
        }
        else if (!FUNC_5(VAR_14->current)) return '.';
        else return FUNC_14(VAR_14, VAR_15);
      }
      case '0': case '1': case '2': case '3': case '4':
      case '5': case '6': case '7': case '8': case '9': {
        return FUNC_14(VAR_14, VAR_15);
      }
      case 128: {
        return VAR_4;
      }
      default: {
        if (FUNC_7(VAR_14->current)) {
          TString *VAR_18;
          do {
            FUNC_16(VAR_14);
          } while (FUNC_6(VAR_14->current));
          VAR_18 = FUNC_8(VAR_14, FUNC_9(VAR_14->buff),
                                  FUNC_10(VAR_14->buff));
          VAR_15->ts = VAR_18;
          if (FUNC_3(VAR_18))
            return VAR_18->extra - 1 + VAR_0;
          else {
            return VAR_9;
          }
        }
        else {
          int VAR_19 = VAR_14->current;
          FUNC_12(VAR_14);
          return VAR_19;
        }
      }
    }
  }
}
