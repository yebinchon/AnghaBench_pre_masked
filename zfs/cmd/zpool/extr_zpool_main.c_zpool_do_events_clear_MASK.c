
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ev_opts_t ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static int
FUNC_3(ev_opts_t *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = FUNC_2(VAR_0, &VAR_2);
 if (!VAR_3)
  (void) FUNC_1(FUNC_0("cleared %d events\n"), VAR_2);

 return (VAR_3);
}
