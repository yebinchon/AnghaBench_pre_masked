
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t size; } ;
struct TYPE_7__ {TYPE_1__ u; int value; scalar_t__ lengths; } ;
typedef TYPE_2__ ngx_stream_complex_value_t ;
typedef int ngx_conf_t ;
struct TYPE_8__ {int offset; } ;
typedef TYPE_3__ ngx_command_t ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_0 (int *) ;
 char* FUNC_1 (int *,TYPE_3__*,void*) ;

char *
FUNC_2(ngx_conf_t *VAR_2, ngx_command_t *VAR_3,
    void *VAR_4)
{
    char *VAR_5 = VAR_4;

    char *VAR_6;
    ngx_stream_complex_value_t *VAR_7;

    VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);

    if (VAR_6 != VAR_0) {
        return VAR_6;
    }

    VAR_7 = *(ngx_stream_complex_value_t **) (VAR_5 + VAR_3->offset);

    if (VAR_7->lengths) {
        return VAR_0;
    }

    VAR_7->u.size = FUNC_0(&VAR_7->value);
    if (VAR_7->u.size == (size_t) VAR_1) {
        return "invalid value";
    }

    return VAR_0;
}
