
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_int_t ;


 int VAR_0 ;

char *
FUNC_0(ngx_int_t VAR_1)
{
    static char *VAR_2[] = {
        "Format error",
        "Server failure",
        "Host not found",
        "Unimplemented",
        "Operation refused"
    };

    if (VAR_1 > 0 && VAR_1 < 6) {
        return VAR_2[VAR_1 - 1];
    }

    if (VAR_1 == VAR_0) {
        return "Operation timed out";
    }

    return "Unknown error";
}
