
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct window_pane {int event; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int *,int ,struct window_pane*) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_4(struct window_pane *VAR_5)
{
 FUNC_3(VAR_5->fd, 0);

 VAR_5->event = FUNC_1(VAR_5->fd, VAR_4,
     ((void*)0), VAR_3, VAR_5);

 FUNC_2(VAR_5->event, VAR_0, 0, VAR_2);
 FUNC_0(VAR_5->event, VAR_0|VAR_1);
}
