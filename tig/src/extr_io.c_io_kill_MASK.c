
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io {scalar_t__ pid; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;

bool
FUNC_1(struct io *VAR_1)
{
 return VAR_1->pid == 0 || FUNC_0(VAR_1->pid, VAR_0) != -1;
}
