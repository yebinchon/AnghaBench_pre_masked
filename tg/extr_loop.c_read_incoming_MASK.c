
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_ev {int in_buf_pos; char* in_buf; int error; struct bufferevent* bev; } ;
struct bufferevent {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bufferevent*,char*,int) ;
 int FUNC_2 (char*,struct in_ev*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5 (struct bufferevent *VAR_1, void *VAR_2) {
  FUNC_4 (VAR_0, "Read from incoming connection\n");
  struct in_ev *VAR_3 = VAR_2;
  FUNC_0 (VAR_3->bev == VAR_1);
  VAR_3->in_buf_pos += FUNC_1 (VAR_1, VAR_3->in_buf + VAR_3->in_buf_pos, 4096 - VAR_3->in_buf_pos);

  while (1) {
    int VAR_4 = 0;
    int VAR_5 = 0;
    while (VAR_4 < VAR_3->in_buf_pos) {
      if (VAR_3->in_buf[VAR_4] == '\n') {
        if (!VAR_3->error) {
          VAR_3->in_buf[VAR_4] = 0;
          FUNC_2 (VAR_3->in_buf, VAR_3);
        } else {
          VAR_3->error = 0;
        }
        VAR_5 = 1;
        VAR_3->in_buf_pos -= (VAR_4 + 1);
        FUNC_3 (VAR_3->in_buf, VAR_3->in_buf + VAR_4 + 1, VAR_3->in_buf_pos);
        VAR_4 = 0;
      } else {
        VAR_4 ++;
      }
    }
    if (VAR_5) {
      VAR_3->in_buf_pos += FUNC_1 (VAR_1, VAR_3->in_buf + VAR_3->in_buf_pos, 4096 - VAR_3->in_buf_pos);
    } else {
      if (VAR_3->in_buf_pos == 4096) {
        VAR_3->error = 1;
      }
      break;
    }
  }
}
