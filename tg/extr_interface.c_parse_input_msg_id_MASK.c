
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long long id; scalar_t__ peer_type; } ;
typedef TYPE_1__ tgl_message_id_t ;
typedef int id ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 long long FUNC_2 (char*,char**,int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,int) ;

tgl_message_id_t FUNC_5 (const char *VAR_1, int VAR_2) {
  if (!VAR_1 || VAR_2 <= 0) {
    tgl_message_id_t VAR_3;
    FUNC_1 (&VAR_3, 0, sizeof (VAR_3));
    VAR_3.peer_type = 0;
    return VAR_3;
  } else {
    tgl_message_id_t VAR_4;
    FUNC_1 (&VAR_4, 0, sizeof (VAR_4));

    if (VAR_2 == 2 * sizeof (tgl_message_id_t)) {
      int VAR_5;
      for (VAR_5 = 0; VAR_5 < (int)sizeof (tgl_message_id_t); VAR_5++) {
        if (
          (VAR_1[VAR_5] < '0' || VAR_1[VAR_5] > '9') &&
          (VAR_1[VAR_5] < 'a' || VAR_1[VAR_5] > 'f')
        ) {
          VAR_4.peer_type = 0;
          return VAR_4;
        }
      }
      unsigned char *VAR_6 = (void *)&VAR_4;
      for (VAR_5 = 0; VAR_5 < (int)sizeof (tgl_message_id_t); VAR_5++) {
        VAR_6[VAR_5] = FUNC_0 (VAR_1[2 * VAR_5]) * 16 + FUNC_0 (VAR_1[2 * VAR_5 + 1]);
      }
      return VAR_4;
    } else {
      char *VAR_7 = FUNC_4 (VAR_1, VAR_2);
      char *VAR_8 = 0;
      long long VAR_9 = FUNC_2 (VAR_7, &VAR_8, 0);
      FUNC_3 (VAR_7);
      if (VAR_8 != VAR_7 + VAR_2) {
        VAR_4.peer_type = 0;
      } else {
        VAR_4.peer_type = VAR_0;
        VAR_4.id = VAR_9;
      }
      return VAR_4;
    }
  }
}
