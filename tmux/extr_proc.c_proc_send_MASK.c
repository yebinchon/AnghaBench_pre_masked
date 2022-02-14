
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imsgbuf {int dummy; } ;
struct tmuxpeer {int flags; struct imsgbuf ibuf; } ;
typedef enum msgtype { ____Placeholder_msgtype } msgtype ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct imsgbuf*,int,int ,int,int,void*,size_t) ;
 int FUNC_1 (char*,int,struct tmuxpeer*,size_t) ;
 int FUNC_2 (struct tmuxpeer*) ;

int
FUNC_3(struct tmuxpeer *VAR_2, enum msgtype VAR_3, int VAR_4, const void *VAR_5,
    size_t VAR_6)
{
 struct imsgbuf *VAR_7 = &VAR_2->ibuf;
 void *VAR_8 = (void *)VAR_5;
 int VAR_9;

 if (VAR_2->flags & VAR_0)
  return (-1);
 FUNC_1("sending message %d to peer %p (%zu bytes)", VAR_3, VAR_2, VAR_6);

 VAR_9 = FUNC_0(VAR_7, VAR_3, VAR_1, -1, VAR_4, VAR_8, VAR_6);
 if (VAR_9 != 1)
  return (-1);
 FUNC_2(VAR_2);
 return (0);
}
