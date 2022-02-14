
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tgl_peer_id_t ;
struct tgl_message {int flags; int to_id; int from_id; } ;
struct in_ev {int dummy; } ;
typedef int json_t ;
struct TYPE_3__ {int our_id; } ;


 int VAR_0 ;
 int VAR_1 ;



 TYPE_1__* VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int ) ;
 int * FUNC_4 (struct tgl_message*) ;
 int FUNC_5 (struct in_ev*) ;
 int FUNC_6 (struct in_ev*) ;
 int FUNC_7 (struct in_ev*) ;
 int FUNC_8 (struct in_ev*,char*,...) ;
 int FUNC_9 (struct in_ev*,int ) ;
 struct in_ev* VAR_4 ;
 int FUNC_10 (struct in_ev*,int ,int ) ;
 int FUNC_11 (struct in_ev*,int ,int ) ;
 int FUNC_12 (struct in_ev*,int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (TYPE_1__*,int ) ;

void FUNC_16 (int VAR_5, struct tgl_message *VAR_6[]) {
  struct in_ev *VAR_7 = VAR_4;
  int VAR_8;
  FUNC_7 (VAR_7);
  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) if (VAR_6[VAR_8]) {
    if (VAR_3) {







    }
    tgl_peer_id_t VAR_9;
    if (!FUNC_13 (VAR_6[VAR_8]->to_id, VAR_2->our_id)) {
      VAR_9 = VAR_6[VAR_8]->from_id;
    } else {
      VAR_9 = VAR_6[VAR_8]->to_id;
    }
    int VAR_10;
    int VAR_11 = 0;
    int VAR_12 = 0;
    for (VAR_10 = VAR_8; VAR_10 < VAR_5; VAR_10++) if (VAR_6[VAR_10]) {
      tgl_peer_id_t VAR_13;
      if (!FUNC_13 (VAR_6[VAR_10]->to_id, VAR_2->our_id)) {
        VAR_13 = VAR_6[VAR_10]->from_id;
      } else {
        VAR_13 = VAR_6[VAR_10]->to_id;
      }
      if (!FUNC_13 (VAR_9, VAR_13)) {
        if (VAR_6[VAR_10]->flags & VAR_1) {
          VAR_11 ++;
        } else {
          VAR_12 ++;
        }
        VAR_6[VAR_10] = 0;
      }
    }

    FUNC_0 (VAR_11 + VAR_12 > 0);
    if (!VAR_3) {
      FUNC_9 (VAR_7, VAR_0);
      switch (FUNC_14 (VAR_9)) {
      case 128:
        FUNC_8 (VAR_7, "User ");
        FUNC_12 (VAR_7, VAR_9, FUNC_15 (VAR_2, VAR_9));
        break;
      case 130:
        FUNC_8 (VAR_7, "Chat ");
        FUNC_10 (VAR_7, VAR_9, FUNC_15 (VAR_2, VAR_9));
        break;
      case 129:
        FUNC_8 (VAR_7, "Secret chat ");
        FUNC_11 (VAR_7, VAR_9, FUNC_15 (VAR_2, VAR_9));
        break;
      default:
        FUNC_0 (0);
      }
      FUNC_8 (VAR_7, " marked read %d outbox and %d inbox messages\n", VAR_11, VAR_12);
      FUNC_5 (VAR_7);
    }
  }
  FUNC_6 (VAR_7);
}
