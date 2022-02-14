
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tgl_peer_t ;
struct tgl_message {int from_id; } ;
typedef enum command_argument { ____Placeholder_command_argument } command_argument ;
struct TYPE_7__ {int id; } ;
struct TYPE_6__ {unsigned int peer_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_5 ;
 TYPE_2__* VAR_6 ;



 int VAR_7 ;




 int VAR_8 ;

 int VAR_9 ;
 int VAR_10 ;


 int VAR_11 ;
 int VAR_12 ;

 int FUNC_1 (TYPE_2__*,int,char*,int,char**) ;
 int FUNC_2 (int,char*,int,char**) ;
 int FUNC_3 (struct tgl_message*,int,char*,int,char**) ;
 int FUNC_4 (int ,int,char const*,int,char**) ;
 int FUNC_5 (TYPE_2__*,int,char*,int,char**) ;
 int FUNC_6 (int ,int,char*,int,char**) ;
 char* VAR_13 ;
 int VAR_14 ;
 int FUNC_7 () ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 char* FUNC_8 (char*,int) ;
 char* VAR_18 ;
 size_t VAR_19 ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int ,int,char*,int,char**) ;
 int FUNC_11 (int ,int,char*,int,char**) ;
 int FUNC_12 (int ,int,char*,int,char**) ;
 int FUNC_13 (int ,int,char*,int,char**) ;
 int FUNC_14 (int ,int,char*,int,char**) ;
 int FUNC_15 (int ) ;
 struct tgl_message* FUNC_16 (int ,TYPE_1__*) ;
 int * FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,char const*,int,int,char**,char*,size_t) ;

char *FUNC_19 (const char *VAR_20, int VAR_21) {

  static int VAR_22;

  static int VAR_23;
  static enum command_argument VAR_24;
  static char *VAR_25;
  static int VAR_26;

  if (VAR_16) {
    char *VAR_27 = 0;
    VAR_23 = FUNC_4 (VAR_15, VAR_23, VAR_20, VAR_19, &VAR_27);
    return VAR_27;
  }

  char VAR_28 = 0;
  VAR_28 = VAR_18[VAR_19];
  VAR_18[VAR_19] = 0;
  if (!VAR_21) {

    VAR_22 = FUNC_9 (VAR_20);

    VAR_23 = -1;

    VAR_24 = FUNC_7 ();
    VAR_25 = VAR_13;
    VAR_26 = VAR_14;
  } else {
    if (VAR_24 != 134 && VAR_24 != 133 && VAR_23 == -1) { return 0; }
  }

  if (VAR_24 == VAR_9 || VAR_24 == VAR_11 || VAR_24 == VAR_12 || VAR_24 == VAR_10 || VAR_24 == VAR_7 || VAR_24 == VAR_8) {
    if (VAR_28) { VAR_18[VAR_19] = VAR_28; }
    return 0;
  }
  FUNC_0 (VAR_26 >= 0);

  char *VAR_29 = 0;
  switch (VAR_24 & 255) {
  case 136:
    VAR_23 = FUNC_2 (VAR_23, VAR_25, VAR_26, &VAR_29);
    if (VAR_28) { VAR_18[VAR_19] = VAR_28; }
    return VAR_29;
  case 128:
    if (VAR_26 && VAR_25[0] == '@') {
      VAR_23 = FUNC_6 (VAR_3, VAR_23, VAR_25, VAR_26, &VAR_29);
    } else {
      VAR_23 = FUNC_14 (VAR_4, VAR_23, VAR_25, VAR_26, &VAR_29);
    }
    if (VAR_28) { VAR_18[VAR_19] = VAR_28; }
    return VAR_29;
  case 130:
    if (VAR_26 && VAR_25[0] == '@') {
      VAR_23 = FUNC_6 (0, VAR_23, VAR_25, VAR_26, &VAR_29);
    } else {
      VAR_23 = FUNC_13 (VAR_4, VAR_23, VAR_25, VAR_26, &VAR_29);
    }
    if (VAR_28) { VAR_18[VAR_19] = VAR_28; }
    return VAR_29;
  case 134:
  case 133:
    if (VAR_28) { VAR_18[VAR_19] = VAR_28; }
    VAR_29 = FUNC_8 (VAR_25, VAR_21);
    return VAR_29;
  case 137:
    VAR_23 = FUNC_11 (VAR_4, VAR_23, VAR_25, VAR_26, &VAR_29);
    if (VAR_28) { VAR_18[VAR_19] = VAR_28; }
    return VAR_29;
  case 129:
    VAR_23 = FUNC_12 (VAR_4, VAR_23, VAR_25, VAR_26, &VAR_29);
    if (VAR_28) { VAR_18[VAR_19] = VAR_28; }
    return VAR_29;
  case 138:
    if (VAR_26 && VAR_25[0] == '@') {
      VAR_23 = FUNC_6 (VAR_1, VAR_23, VAR_25, VAR_26, &VAR_29);
    } else {
      VAR_23 = FUNC_10 (VAR_4, VAR_23, VAR_25, VAR_26, &VAR_29);
    }
    if (VAR_28) { VAR_18[VAR_19] = VAR_28; }
    return VAR_29;
  case 132:
    VAR_23 = FUNC_4 (VAR_17, VAR_23, VAR_25, VAR_26, &VAR_29);
    if (VAR_28) { VAR_18[VAR_19] = VAR_28; }
    return VAR_29;
  case 131:
    if (VAR_6) {
      if (FUNC_15 (VAR_6->id) == VAR_3) {
        VAR_23 = FUNC_5 (VAR_6, VAR_23, VAR_25, VAR_26, &VAR_29);
      }
      if (FUNC_15 (VAR_6->id) == VAR_2) {
        VAR_23 = FUNC_1 (VAR_6, VAR_23, VAR_25, VAR_26, &VAR_29);
      }
    }
    if (VAR_5.peer_type != (unsigned)VAR_0) {
      struct tgl_message *VAR_30 = FUNC_16 (VAR_4, &VAR_5);
      if (VAR_30) {
        if (VAR_26 > 0 && *VAR_25 == '/') {
          tgl_peer_t *VAR_31 = FUNC_17 (VAR_4, VAR_30->from_id);
          if (VAR_31) {
            VAR_23 = FUNC_5 (VAR_6, VAR_23, VAR_25, VAR_26, &VAR_29);
          }
        } else {
          VAR_23 = FUNC_3 (VAR_30, VAR_23, VAR_25, VAR_26, &VAR_29);
        }
      }
    }
    if (VAR_28) { VAR_18[VAR_19] = VAR_28; }
    return VAR_29;

  case 135:
    VAR_23 = FUNC_18 (VAR_4, VAR_20, VAR_22, VAR_23, &VAR_29, VAR_18, VAR_19);
    if (VAR_28) { VAR_18[VAR_19] = VAR_28; }
    return VAR_29;

  default:
    if (VAR_28) { VAR_18[VAR_19] = VAR_28; }
    return 0;
  }
}
