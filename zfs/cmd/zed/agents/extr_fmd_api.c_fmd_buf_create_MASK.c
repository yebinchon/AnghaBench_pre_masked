
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fmd_hdl_t ;
struct TYPE_3__ {size_t ci_bufsiz; int * ci_bufptr; } ;
typedef TYPE_1__ fmd_case_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *,size_t,int ) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

void
FUNC_3(fmd_hdl_t *VAR_1, fmd_case_t *VAR_2, const char *VAR_3, size_t VAR_4)
{
 FUNC_0(FUNC_2(VAR_3, "data") == 0);
 FUNC_0(VAR_2->ci_bufptr == ((void*)0));
 FUNC_0(VAR_4 < (1024 * 1024));

 VAR_2->ci_bufptr = FUNC_1(VAR_1, VAR_4, VAR_0);
 VAR_2->ci_bufsiz = VAR_4;
}
