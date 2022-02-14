
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_1; int member_0; } ;
struct io {scalar_t__ pipe; } ;
typedef int fd_set ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int *,int *,int *,struct timeval*) ;

bool
FUNC_3(struct io *VAR_0, bool VAR_1)
{
 struct timeval VAR_2 = { 0, 500 };
 fd_set VAR_3;

 FUNC_1(&VAR_3);
 FUNC_0(VAR_0->pipe, &VAR_3);

 return FUNC_2(VAR_0->pipe + 1, &VAR_3, ((void*)0), ((void*)0), VAR_1 ? ((void*)0) : &VAR_2) > 0;
}
