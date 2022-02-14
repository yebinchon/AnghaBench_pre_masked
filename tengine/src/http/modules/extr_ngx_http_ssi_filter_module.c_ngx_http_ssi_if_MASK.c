
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_18__ {char* data; int len; } ;
typedef TYPE_3__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {int len; } ;
struct TYPE_19__ {int output_chosen; int output; void* conditional; TYPE_1__ command; } ;
typedef TYPE_4__ ngx_http_ssi_ctx_t ;
struct TYPE_20__ {TYPE_2__* connection; } ;
typedef TYPE_5__ ngx_http_request_t ;
struct TYPE_17__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_5__*,TYPE_4__*,TYPE_3__*,int) ;
 int FUNC_1 (TYPE_5__*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_3__*) ;
 int FUNC_3 (int ,int ,int ,char*,...) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_http_request_t *VAR_8, ngx_http_ssi_ctx_t *VAR_9,
    ngx_str_t **VAR_10)
{
    u_char *VAR_11, *VAR_12;
    ngx_str_t *VAR_13, VAR_14, VAR_15;
    ngx_int_t VAR_16;
    ngx_uint_t VAR_17, VAR_18, VAR_19;

    if (VAR_9->command.len == 2) {
        if (VAR_9->conditional) {
            FUNC_3(VAR_6, VAR_8->connection->log, 0,
                          "the \"if\" command inside the \"if\" command");
            return VAR_3;
        }
    }

    if (VAR_9->output_chosen) {
        VAR_9->output = 0;
        return VAR_7;
    }

    VAR_13 = VAR_10[VAR_4];

    FUNC_2(VAR_5, VAR_8->connection->log, 0,
                   "ssi if expr=\"%V\"", VAR_13);

    VAR_14.data = VAR_13->data;
    VAR_12 = VAR_13->data + VAR_13->len;

    for (VAR_11 = VAR_14.data; VAR_11 < VAR_12; VAR_11++) {
        if (*VAR_11 >= 'A' && *VAR_11 <= 'Z') {
            *VAR_11 |= 0x20;
            continue;
        }

        if ((*VAR_11 >= 'a' && *VAR_11 <= 'z')
             || (*VAR_11 >= '0' && *VAR_11 <= '9')
             || *VAR_11 == '$' || *VAR_11 == '{' || *VAR_11 == '}' || *VAR_11 == '_'
             || *VAR_11 == '"' || *VAR_11 == '\'')
        {
            continue;
        }

        break;
    }

    VAR_14.len = VAR_11 - VAR_14.data;

    while (VAR_11 < VAR_12 && *VAR_11 == ' ') {
        VAR_11++;
    }

    VAR_19 = 0;

    FUNC_2(VAR_5, VAR_8->connection->log, 0,
                   "left: \"%V\"", &VAR_14);

    VAR_16 = FUNC_0(VAR_8, VAR_9, &VAR_14, VAR_19);

    if (VAR_16 != VAR_7) {
        return VAR_16;
    }

    FUNC_2(VAR_5, VAR_8->connection->log, 0,
                   "evaluated left: \"%V\"", &VAR_14);

    if (VAR_11 == VAR_12) {
        if (VAR_14.len) {
            VAR_9->output = 1;
            VAR_9->output_chosen = 1;

        } else {
            VAR_9->output = 0;
        }

        VAR_9->conditional = VAR_2;

        return VAR_7;
    }

    if (VAR_11 < VAR_12 && *VAR_11 == '=') {
        VAR_17 = 0;
        VAR_11++;

    } else if (VAR_11 + 1 < VAR_12 && *VAR_11 == '!' && *(VAR_11 + 1) == '=') {
        VAR_17 = 1;
        VAR_11 += 2;

    } else {
        goto invalid_expression;
    }

    while (VAR_11 < VAR_12 && *VAR_11 == ' ') {
        VAR_11++;
    }

    if (VAR_11 < VAR_12 - 1 && *VAR_11 == '/') {
        if (*(VAR_12 - 1) != '/') {
            goto invalid_expression;
        }

        VAR_18 = 0;
        VAR_19 = VAR_1;
        VAR_12--;
        VAR_11++;

    } else {
        VAR_18 = 1;
        VAR_19 = 0;

        if (VAR_11 < VAR_12 - 1 && VAR_11[0] == '\\' && VAR_11[1] == '/') {
            VAR_11++;
        }
    }

    VAR_15.len = VAR_12 - VAR_11;
    VAR_15.data = VAR_11;

    FUNC_2(VAR_5, VAR_8->connection->log, 0,
                   "right: \"%V\"", &VAR_15);

    VAR_16 = FUNC_0(VAR_8, VAR_9, &VAR_15, VAR_19);

    if (VAR_16 != VAR_7) {
        return VAR_16;
    }

    FUNC_2(VAR_5, VAR_8->connection->log, 0,
                   "evaluated right: \"%V\"", &VAR_15);

    if (VAR_18) {
        if (VAR_14.len != VAR_15.len) {
            VAR_16 = -1;

        } else {
            VAR_16 = FUNC_4(VAR_14.data, VAR_15.data, VAR_15.len);
        }

    } else {
        VAR_15.data[VAR_15.len] = '\0';

        VAR_16 = FUNC_1(VAR_8, &VAR_15, &VAR_14);

        if (VAR_16 == VAR_7) {
            VAR_16 = 0;
        } else if (VAR_16 == VAR_0) {
            VAR_16 = -1;
        } else {
            return VAR_16;
        }
    }

    if ((VAR_16 == 0 && !VAR_17) || (VAR_16 != 0 && VAR_17)) {
        VAR_9->output = 1;
        VAR_9->output_chosen = 1;

    } else {
        VAR_9->output = 0;
    }

    VAR_9->conditional = VAR_2;

    return VAR_7;

invalid_expression:

    FUNC_3(VAR_6, VAR_8->connection->log, 0,
                  "invalid expression in \"%V\"", VAR_13);

    return VAR_3;
}
