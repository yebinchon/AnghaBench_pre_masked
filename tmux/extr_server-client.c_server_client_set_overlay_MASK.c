
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_2__ {int flags; } ;
struct client {TYPE_1__ tty; void* overlay_data; int overlay_free; int overlay_key; int * overlay_draw; int overlay_timer; } ;
typedef int overlay_key_cb ;
typedef int overlay_free_cb ;
typedef int * overlay_draw_cb ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,struct timeval*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,struct client*) ;
 int FUNC_4 (struct client*) ;
 int VAR_2 ;
 int FUNC_5 (struct client*) ;

void
FUNC_6(struct client *VAR_3, u_int VAR_4, overlay_draw_cb VAR_5,
    overlay_key_cb VAR_6, overlay_free_cb VAR_7, void *VAR_8)
{
 struct timeval VAR_9;

 if (VAR_3->overlay_draw != ((void*)0))
  FUNC_4(VAR_3);

 VAR_9.tv_sec = VAR_4 / 1000;
 VAR_9.tv_usec = (VAR_4 % 1000) * 1000L;

 if (FUNC_0(&VAR_3->overlay_timer))
  FUNC_2(&VAR_3->overlay_timer);
 FUNC_3(&VAR_3->overlay_timer, VAR_2, VAR_3);
 if (VAR_4 != 0)
  FUNC_1(&VAR_3->overlay_timer, &VAR_9);

 VAR_3->overlay_draw = VAR_5;
 VAR_3->overlay_key = VAR_6;
 VAR_3->overlay_free = VAR_7;
 VAR_3->overlay_data = VAR_8;

 VAR_3->tty.flags |= (VAR_0|VAR_1);
 FUNC_5(VAR_3);
}
