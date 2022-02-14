
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
typedef TYPE_2__ tgl_peer_t ;
typedef int tgl_peer_id_t ;
struct username_peer_pair {TYPE_1__* peer; } ;
struct TYPE_5__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const*,char const*,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 TYPE_2__* FUNC_6 (int ,int ) ;
 TYPE_2__* FUNC_7 (int ,char*) ;
 int FUNC_8 (int,int) ;
 struct username_peer_pair* FUNC_9 (int ,void*) ;
 char* FUNC_10 (char const*,int) ;
 int VAR_6 ;

tgl_peer_id_t FUNC_11 (const char *VAR_7, int VAR_8, int VAR_9) {
  if (!VAR_7 || VAR_8 <= 0) { return VAR_3; }

  if (*VAR_7 == '$') {
    VAR_7 ++;
    VAR_8 --;
    if (VAR_8 != 2 * sizeof (tgl_peer_id_t)) {
      return VAR_3;
    }

    tgl_peer_id_t VAR_10;
    unsigned char *VAR_11 = (void *)&VAR_10;
    int VAR_12;
    for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
      if ((VAR_7[VAR_12] < '0' || VAR_7[VAR_12] > '9') &&
          (VAR_7[VAR_12] < 'a' || VAR_7[VAR_12] > 'f')) {
        return VAR_3;
      }
    }
    for (VAR_12 = 0; VAR_12 < (int)sizeof (tgl_peer_id_t); VAR_12++) {
      VAR_11[VAR_12] = FUNC_1 (VAR_7[2 * VAR_12]) * 16 + FUNC_1 (VAR_7[2 * VAR_12 + 1]);
    }

    if (VAR_9 && FUNC_5 (VAR_10) != VAR_9) {
      return VAR_3;
    }

    return VAR_10;
  }

  if (*VAR_7 == '@') {
    VAR_7 ++;
    VAR_8 --;
    char *VAR_13 = FUNC_10 (VAR_7, VAR_8);
    struct username_peer_pair *VAR_14 = FUNC_9 (VAR_6, (void *)&VAR_13);
    FUNC_4 (VAR_13);
    if (VAR_14 && (!VAR_9 || FUNC_5 (VAR_14->peer->id) == VAR_9)) {
      return VAR_14->peer->id;
    } else {
      return VAR_3;
    }
  }

  const char *VAR_15[] = {"user#id", "user#", "chat#id", "chat#", "secret_chat#id", "secret_chat#", "channel#id", "channel#"};
  int VAR_16[] = {VAR_4, VAR_4, VAR_1, VAR_1, VAR_2, VAR_2, VAR_0, VAR_0};

  char *VAR_17 = FUNC_10 (VAR_7, VAR_8);

  int VAR_18;
  for (VAR_18 = 0; VAR_18 < 8; VAR_18++) if (!VAR_9 || VAR_9 == VAR_16[VAR_18]) {
    int VAR_19 = FUNC_3 (VAR_15[VAR_18]);
    if (VAR_8 > VAR_19 && !FUNC_2 (VAR_7, VAR_15[VAR_18], VAR_19)) {
      int VAR_20 = FUNC_0 (VAR_17 + VAR_19);
      FUNC_4 (VAR_17);
      if (VAR_20 < 0) { return VAR_3; }
      tgl_peer_t *VAR_21 = FUNC_6 (VAR_5, FUNC_8 (VAR_16[VAR_18], VAR_20));
      if (!VAR_21) { return VAR_3; }
      return VAR_21->id;
    }
  }

  tgl_peer_t *VAR_22 = FUNC_7 (VAR_5, VAR_17);
  FUNC_4 (VAR_17);

  if (VAR_22 && (!VAR_9 || FUNC_5 (VAR_22->id) == VAR_9)) {
    return VAR_22->id;
  } else {
    return VAR_3;
  }
}
