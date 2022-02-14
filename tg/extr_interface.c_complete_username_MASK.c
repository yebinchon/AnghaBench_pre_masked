
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* username; } ;
struct TYPE_5__ {char* username; } ;
struct TYPE_7__ {TYPE_2__ channel; int id; TYPE_1__ user; } ;
typedef TYPE_3__ tgl_peer_t ;
struct TYPE_8__ {int peer_num; TYPE_3__** Peers; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 char* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int ) ;

int FUNC_5 (int VAR_3, int VAR_4, const char *VAR_5, int VAR_6, char **VAR_7) {
  *VAR_7 = ((void*)0);
  if (VAR_6 > 0 && *VAR_5 == '@') {
    VAR_5 ++;
    VAR_6 --;
  }
  VAR_4 ++;
  while (VAR_4 < VAR_2->peer_num) {
    tgl_peer_t *VAR_8 = VAR_2->Peers[VAR_4];
    if (VAR_3 && FUNC_4 (VAR_8->id) != VAR_3) {
      VAR_4 ++;
      continue;
    }
    char *VAR_9 = ((void*)0);
    if (FUNC_4 (VAR_8->id) == VAR_1) {
      VAR_9 = VAR_8->user.username;
    } else if (FUNC_4 (VAR_8->id) == VAR_0) {
      VAR_9 = VAR_8->channel.username;
    }
    if (!VAR_9) {
      VAR_4 ++;
      continue;
    }
    if ((int)FUNC_3 (VAR_9) < VAR_6 || FUNC_1 (VAR_9, VAR_5, VAR_6)) {
      VAR_4 ++;
      continue;
    }
    *VAR_7 = FUNC_0 (FUNC_3 (VAR_9) + 2);
    *VAR_7[0] = '@';
    FUNC_2 (*VAR_7 + 1, VAR_9, FUNC_3 (VAR_9) + 1);
    break;
  }
  if (VAR_4 == VAR_2->peer_num) {
    return -1;
  }
  return VAR_4;
}
