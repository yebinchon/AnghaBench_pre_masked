
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* (* get_error_string ) (scalar_t__) ;} ;
struct TYPE_5__ {TYPE_1__ vt; int ** funcs; } ;
typedef TYPE_2__ vdp_t ;
typedef scalar_t__ VdpStatus ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 char const* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

const char *FUNC_2(const vdp_t *VAR_2, VdpStatus VAR_3)
{
    if (FUNC_1(VAR_2->funcs[VAR_0] == ((void*)0)))
        return (VAR_3 != VAR_1) ? "Unknown error" : "No error";
    return VAR_2->vt.get_error_string(VAR_3);
}
