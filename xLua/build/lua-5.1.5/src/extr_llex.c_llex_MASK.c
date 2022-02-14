
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_25__ {int current; int buff; } ;
struct TYPE_24__ {TYPE_2__* ts; } ;
struct TYPE_22__ {int reserved; } ;
struct TYPE_23__ {TYPE_1__ tsv; } ;
typedef TYPE_2__ TString ;
typedef TYPE_3__ SemInfo ;
typedef TYPE_4__ LexState ;



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
 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (char) ;
 int FUNC_4 (char) ;
 int FUNC_5 (char) ;
 int FUNC_6 (char) ;
 int FUNC_7 (TYPE_4__*,char*,int) ;
 TYPE_2__* FUNC_8 (TYPE_4__*,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_15 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_16 (TYPE_4__*,char,TYPE_3__*) ;
 int FUNC_17 (TYPE_4__*) ;
 int FUNC_18 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_19 (LexState *VAR_11, SemInfo *VAR_12) {
  FUNC_11(VAR_11->buff);
  for (;;) {
    switch (VAR_11->current) {
      case '\n':
      case '\r': {
        FUNC_2(VAR_11);
        continue;
      }
      case '-': {
        FUNC_13(VAR_11);
        if (VAR_11->current != '-') return '-';

        FUNC_13(VAR_11);
        if (VAR_11->current == '[') {
          int VAR_13 = FUNC_18(VAR_11);
          FUNC_11(VAR_11->buff);
          if (VAR_13 >= 0) {
            FUNC_14(VAR_11, ((void*)0), VAR_13);
            FUNC_11(VAR_11->buff);
            continue;
          }
        }

        while (!FUNC_1(VAR_11) && VAR_11->current != 128)
          FUNC_13(VAR_11);
        continue;
      }
      case '[': {
        int VAR_14 = FUNC_18(VAR_11);
        if (VAR_14 >= 0) {
          FUNC_14(VAR_11, VAR_12, VAR_14);
          return VAR_10;
        }
        else if (VAR_14 == -1) return '[';
        else FUNC_7(VAR_11, "invalid long string delimiter", VAR_10);
      }
      case '=': {
        FUNC_13(VAR_11);
        if (VAR_11->current != '=') return '=';
        else { FUNC_13(VAR_11); return VAR_4; }
      }
      case '<': {
        FUNC_13(VAR_11);
        if (VAR_11->current != '=') return '<';
        else { FUNC_13(VAR_11); return VAR_6; }
      }
      case '>': {
        FUNC_13(VAR_11);
        if (VAR_11->current != '=') return '>';
        else { FUNC_13(VAR_11); return VAR_5; }
      }
      case '~': {
        FUNC_13(VAR_11);
        if (VAR_11->current != '=') return '~';
        else { FUNC_13(VAR_11); return VAR_8; }
      }
      case '"':
      case '\'': {
        FUNC_16(VAR_11, VAR_11->current, VAR_12);
        return VAR_10;
      }
      case '.': {
        FUNC_17(VAR_11);
        if (FUNC_0(VAR_11, ".")) {
          if (FUNC_0(VAR_11, "."))
            return VAR_2;
          else return VAR_1;
        }
        else if (!FUNC_5(VAR_11->current)) return '.';
        else {
          FUNC_15(VAR_11, VAR_12);
          return VAR_9;
        }
      }
      case 128: {
        return VAR_3;
      }
      default: {
        if (FUNC_6(VAR_11->current)) {
          FUNC_12(!FUNC_1(VAR_11));
          FUNC_13(VAR_11);
          continue;
        }
        else if (FUNC_5(VAR_11->current)) {
          FUNC_15(VAR_11, VAR_12);
          return VAR_9;
        }
        else if (FUNC_4(VAR_11->current) || VAR_11->current == '_') {

          TString *VAR_15;
          do {
            FUNC_17(VAR_11);
          } while (FUNC_3(VAR_11->current) || VAR_11->current == '_');
          VAR_15 = FUNC_8(VAR_11, FUNC_9(VAR_11->buff),
                                  FUNC_10(VAR_11->buff));
          if (VAR_15->tsv.reserved > 0)
            return VAR_15->tsv.reserved - 1 + VAR_0;
          else {
            VAR_12->ts = VAR_15;
            return VAR_7;
          }
        }
        else {
          int VAR_16 = VAR_11->current;
          FUNC_13(VAR_11);
          return VAR_16;
        }
      }
    }
  }
}
