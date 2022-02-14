
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imsgbuf {int fds; } ;
struct imsg_fd {int fd; } ;


 struct imsg_fd* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct imsg_fd*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct imsg_fd*) ;

__attribute__((used)) static int
FUNC_3(struct imsgbuf *VAR_1)
{
 int VAR_2;
 struct imsg_fd *VAR_3;

 if ((VAR_3 = FUNC_0(&VAR_1->fds)) == ((void*)0))
  return (-1);

 VAR_2 = VAR_3->fd;
 FUNC_1(&VAR_1->fds, VAR_3, VAR_0);
 FUNC_2(VAR_3);

 return (VAR_2);
}
