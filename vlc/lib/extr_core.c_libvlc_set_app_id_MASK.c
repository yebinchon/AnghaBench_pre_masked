
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int libvlc_int_t ;
struct TYPE_3__ {int * p_libvlc_int; } ;
typedef TYPE_1__ libvlc_instance_t ;


 int FUNC_0 (int *,char*,char const*) ;

void FUNC_1(libvlc_instance_t *VAR_0, const char *VAR_1,
                       const char *VAR_2, const char *VAR_3)
{
    libvlc_int_t *VAR_4 = VAR_0->p_libvlc_int;

    FUNC_0(VAR_4, "app-id", VAR_1 ? VAR_1 : "");
    FUNC_0(VAR_4, "app-version", VAR_2 ? VAR_2 : "");
    FUNC_0(VAR_4, "app-icon-name", VAR_3 ? VAR_3 : "");
}
