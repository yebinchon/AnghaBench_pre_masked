
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fmd_hdl_t ;
struct TYPE_3__ {size_t ci_bufsiz; int * ci_bufptr; } ;
typedef TYPE_1__ fmd_case_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,void*,size_t) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

void
FUNC_3(fmd_hdl_t *VAR_0, fmd_case_t *VAR_1,
    const char *VAR_2, void *VAR_3, size_t VAR_4)
{
 FUNC_0(FUNC_2(VAR_2, "data") == 0);
 FUNC_0(VAR_1->ci_bufptr != ((void*)0));
 FUNC_0(VAR_4 <= VAR_1->ci_bufsiz);

 FUNC_1(VAR_1->ci_bufptr, VAR_3, VAR_4);
}
