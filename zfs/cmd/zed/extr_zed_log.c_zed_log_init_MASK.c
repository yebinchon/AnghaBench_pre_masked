
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* identity; int* pipe_fd; } ;


 TYPE_1__ VAR_0 ;
 char* FUNC_0 (char const*,char) ;

void
FUNC_1(const char *VAR_1)
{
 if (VAR_1) {
  const char *VAR_2 = FUNC_0(VAR_1, '/');
  VAR_0.identity = (VAR_2 != ((void*)0)) ? VAR_2 + 1 : VAR_1;
 } else {
  VAR_0.identity = ((void*)0);
 }
 VAR_0.pipe_fd[0] = -1;
 VAR_0.pipe_fd[1] = -1;
}
