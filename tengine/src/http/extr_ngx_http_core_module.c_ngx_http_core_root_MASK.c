
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_19__ {char* data; int len; } ;
typedef TYPE_4__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_20__ {int variables; int complete_lengths; int complete_values; int * values; int * lengths; TYPE_4__* source; TYPE_7__* cf; } ;
typedef TYPE_5__ ngx_http_script_compile_t ;
struct TYPE_17__ {int len; } ;
struct TYPE_21__ {int alias; int root_values; int root_lengths; TYPE_4__ root; scalar_t__ regex; TYPE_2__ name; scalar_t__ named; } ;
typedef TYPE_6__ ngx_http_core_loc_conf_t ;
struct TYPE_22__ {int cycle; TYPE_1__* args; } ;
typedef TYPE_7__ ngx_conf_t ;
struct TYPE_18__ {int len; } ;
struct TYPE_23__ {TYPE_3__ name; } ;
typedef TYPE_8__ ngx_command_t ;
struct TYPE_16__ {TYPE_4__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,TYPE_4__*,int ) ;
 int FUNC_1 (int ,TYPE_7__*,int ,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_5__*,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static char *
FUNC_6(ngx_conf_t *VAR_5, ngx_command_t *VAR_6, void *VAR_7)
{
    ngx_http_core_loc_conf_t *VAR_8 = VAR_7;

    ngx_str_t *VAR_9;
    ngx_int_t VAR_10;
    ngx_uint_t VAR_11;
    ngx_http_script_compile_t VAR_12;

    VAR_10 = (VAR_6->name.len == sizeof("alias") - 1) ? 1 : 0;

    if (VAR_8->root.data) {

        if ((VAR_8->alias != 0) == VAR_10) {
            return "is duplicate";
        }

        FUNC_1(VAR_2, VAR_5, 0,
                           "\"%V\" directive is duplicate, "
                           "\"%s\" directive was specified earlier",
                           &VAR_6->name, VAR_8->alias ? "alias" : "root");

        return VAR_0;
    }

    if (VAR_8->named && VAR_10) {
        FUNC_1(VAR_2, VAR_5, 0,
                           "the \"alias\" directive cannot be used "
                           "inside the named location");

        return VAR_0;
    }

    VAR_9 = VAR_5->args->elts;

    if (FUNC_5(VAR_9[1].data, "$document_root")
        || FUNC_5(VAR_9[1].data, "${document_root}"))
    {
        FUNC_1(VAR_2, VAR_5, 0,
                           "the $document_root variable cannot be used "
                           "in the \"%V\" directive",
                           &VAR_6->name);

        return VAR_0;
    }

    if (FUNC_5(VAR_9[1].data, "$realpath_root")
        || FUNC_5(VAR_9[1].data, "${realpath_root}"))
    {
        FUNC_1(VAR_2, VAR_5, 0,
                           "the $realpath_root variable cannot be used "
                           "in the \"%V\" directive",
                           &VAR_6->name);

        return VAR_0;
    }

    VAR_8->alias = VAR_10 ? VAR_8->name.len : 0;
    VAR_8->root = VAR_9[1];

    if (!VAR_10 && VAR_8->root.len > 0
        && VAR_8->root.data[VAR_8->root.len - 1] == '/')
    {
        VAR_8->root.len--;
    }

    if (VAR_8->root.data[0] != '$') {
        if (FUNC_0(VAR_5->cycle, &VAR_8->root, 0) != VAR_4) {
            return VAR_0;
        }
    }

    VAR_11 = FUNC_3(&VAR_8->root);

    FUNC_4(&VAR_12, sizeof(ngx_http_script_compile_t));
    VAR_12.variables = VAR_11;
    if (VAR_11) {
        VAR_12.cf = VAR_5;
        VAR_12.source = &VAR_8->root;
        VAR_12.lengths = &VAR_8->root_lengths;
        VAR_12.values = &VAR_8->root_values;
        VAR_12.complete_lengths = 1;
        VAR_12.complete_values = 1;

        if (FUNC_2(&VAR_12) != VAR_4) {
            return VAR_0;
        }
    }

    return VAR_1;
}
