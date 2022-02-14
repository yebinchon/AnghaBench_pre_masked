
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct command {int* args; scalar_t__ name; } ;
typedef enum command_argument { ____Placeholder_command_argument } command_argument ;
struct TYPE_3__ {void* peer_type; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_2 ;
 int * VAR_3 ;




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

 struct command* VAR_14 ;
 char* VAR_15 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 void* FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_16 ;
 void* FUNC_5 () ;
 int VAR_17 ;
 TYPE_1__ FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ VAR_18 ;
 int FUNC_8 () ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_9 (char*,int,scalar_t__) ;
 char* VAR_20 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 char* VAR_21 ;
 void* FUNC_12 (int ) ;
 int * FUNC_13 (int ,int ) ;

enum command_argument FUNC_14 (void) {
  VAR_19 = 0;
  VAR_20 = VAR_21;
  VAR_3 = ((void*)0);
  VAR_2.peer_type = VAR_0;

  while (1) {
    FUNC_10 ();
    if (VAR_18) { return VAR_9; }
    if (VAR_17 <= 0) { return 134; }
    if (*VAR_15 == '[') {
      if (VAR_16) {
        return VAR_7;
      }
      if (VAR_15[VAR_17 - 1] != ']') {
        return VAR_9;
      }
      continue;
    }
    break;
  }
  if (VAR_18) { return VAR_9; }
  if (VAR_16) { return 134; }
  if (*VAR_15 == '(') { return VAR_4; }

  struct command *VAR_22 = VAR_14;
  int VAR_23 = 0;
  struct tgl_command;
  while (VAR_22->name) {
    if (FUNC_9 (VAR_15, VAR_17, VAR_22->name)) {
      break;
    }
    VAR_23 ++;
    VAR_22 ++;
  }

  if (!VAR_22->name) {
    return VAR_9;
  }

  enum command_argument *VAR_24 = VAR_22->args;
  while (1) {
    int VAR_25 = 0;
    if (*VAR_24 == VAR_11) {
      VAR_24 --;
      VAR_25 = 1;
    }
    enum command_argument VAR_26 = (*VAR_24) & 255;
    int VAR_27 = (*VAR_24) & VAR_10;

    if (VAR_26 == VAR_9) { return VAR_9; }
    if (VAR_26 == VAR_13 || VAR_26 == VAR_6 || VAR_26 == VAR_8) {
      FUNC_11 ();

      if (VAR_17 < 0 || !VAR_16) {
        return VAR_9;
      } else {
        return VAR_26;
      }
    }

    char *VAR_28 = VAR_20;
    FUNC_10 ();
    if (VAR_26 == 128 || VAR_26 == 135 || VAR_26 == 129 || VAR_26 == 130 || VAR_26 == 131 || VAR_26 == 133 || VAR_26 == 132 || VAR_26 == 134 || VAR_26 == 136) {
      if (VAR_18) {
        if (VAR_27) {
          VAR_20 = VAR_28;
          VAR_24 ++;
          continue;
        } else if (VAR_25) {
          VAR_20 = VAR_28;
          VAR_24 += 2;
          continue;
        } else {
          return VAR_9;
        }
      } else {
        if (VAR_16) { return VAR_26; }

        int VAR_29 = 1;
        switch (VAR_26) {
        case 128:
          VAR_29 = (FUNC_12 (FUNC_8 ()) != VAR_0);
          break;
        case 135:
          VAR_29 = (FUNC_12 (FUNC_2 ()) != VAR_0);
          break;
        case 129:
          VAR_29 = (FUNC_12 (FUNC_4 ()) != VAR_0);
          break;
        case 136:
          VAR_29 = (FUNC_12 (FUNC_1 ()) != VAR_0);
          break;
        case 130:
          VAR_29 = (FUNC_12 (FUNC_7 ()) != VAR_0);
          if (VAR_29) {
            VAR_3 = FUNC_13 (VAR_1, FUNC_7 ());
            VAR_2.peer_type = VAR_0;
          }
          break;
        case 131:
          VAR_29 = (FUNC_5 () != VAR_0);
          break;
        case 132:
          VAR_29 = (FUNC_6 ().peer_type != 0);
          if (VAR_29) {
            VAR_3 = ((void*)0);
            VAR_2 = FUNC_6 ();
          }
          break;
        case 133:
          VAR_29 = (FUNC_3 () != VAR_0);
          break;
        case 134:
          VAR_29 = VAR_17 > 0;
          break;
        default:
          FUNC_0 (0);
        }

        if (VAR_27 && !VAR_29) {
          VAR_20 = VAR_28;
          VAR_24 ++;
          continue;
        }
        if (VAR_25 && !VAR_29) {
          VAR_20 = VAR_28;
          VAR_24 += 2;
          continue;
        }
        if (!VAR_29) {
          return VAR_9;
        }

        VAR_24 ++;
        continue;
      }
    }
    if (VAR_26 == VAR_12 || VAR_26 == VAR_5) {
      if (VAR_16) {
        return VAR_26;
      } else {
        VAR_24 ++;
        continue;
      }
    }
    FUNC_0 (0);
  }
}
