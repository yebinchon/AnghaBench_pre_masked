
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef char u_char ;
typedef int ngx_uint_t ;
struct TYPE_13__ {char* data; scalar_t__ len; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_14__ {int configured; scalar_t__ generation; int type; int pid; char* cmd; TYPE_4__* argv; int fd; struct TYPE_14__* open_fd; } ;
typedef TYPE_2__ ngx_open_pipe_t ;
typedef int ngx_open_file_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {int open_files; int pool; } ;
typedef TYPE_3__ ngx_cycle_t ;
struct TYPE_16__ {int nelts; char** elts; } ;
typedef TYPE_4__ ngx_array_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (int ,int,int) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (char*,char*,scalar_t__) ;
 int VAR_4 ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int) ;
 scalar_t__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 char* FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

ngx_open_pipe_t *
FUNC_7(ngx_cycle_t *VAR_7, ngx_str_t *VAR_8, const char *VAR_9)
{
    u_char *VAR_10, *VAR_11, *VAR_12, **VAR_13, **VAR_14, **VAR_15;
    ngx_int_t VAR_16, VAR_17, VAR_18;
    ngx_uint_t VAR_19, VAR_20, VAR_21 = 0;
    ngx_array_t *VAR_22;

    VAR_12 = FUNC_5(VAR_7->pool, VAR_8->len + 1);
    if (VAR_12 == ((void*)0)) {
        return ((void*)0);
    }

    (void) FUNC_2(VAR_12, VAR_8->data, VAR_8->len + 1);

    for (VAR_10 = VAR_8->data; *VAR_10 == ' ' || *VAR_10 == '\t'; VAR_10++);
    VAR_11 = VAR_10;

    if (FUNC_6(VAR_9, "r") == 0) {
        VAR_17 = VAR_2;
    } else if (FUNC_6(VAR_9, "w") == 0) {
        VAR_17 = VAR_3;
    } else {
        return ((void*)0);
    }

    VAR_21 = 1;
    while (*VAR_11 != '\0') {
        for ( ; *VAR_11 != '\0'; VAR_11++) {
            if (*VAR_11 == ' ' || *VAR_11 == '\t') {
                break;
            }
        }

        if (*VAR_11 != '\0') {
            VAR_11++;
        }

        VAR_21++;

        for ( ; *VAR_11 == ' ' || *VAR_11 == '\t'; VAR_11++);
    }

    VAR_22 = FUNC_0(VAR_7->pool, VAR_21, sizeof(u_char *));
    if (VAR_22 == ((void*)0)) {
        return ((void*)0);
    }

    for (VAR_19 = 0; VAR_19 < (VAR_21 - 1); VAR_19++) {
        for ( ; *VAR_10 == ' ' || *VAR_10 == '\t'; VAR_10++);

        for (VAR_11 = VAR_10; *VAR_10 != '\0'; VAR_10++) {
            if (*VAR_10 == ' ' || *VAR_10 == '\t') {
                break;
            }
        }

        *VAR_10 = '\0';
        VAR_13 = (u_char **) FUNC_1(VAR_22);
        *VAR_13 = VAR_11;
        VAR_10++;
    }

    VAR_13 = (u_char **) FUNC_1(VAR_22);
    if (VAR_13 == ((void*)0)) {
        return ((void*)0);
    }

    *VAR_13 = ((void*)0);

    for (VAR_19 = 0, VAR_18 = -1; VAR_19 < VAR_4; VAR_19++) {

        if (!VAR_6[VAR_19].configured) {
            if (VAR_18 == -1) {
                VAR_18 = VAR_19;
            }
            continue;
        }

        if (VAR_6[VAR_19].generation != VAR_5) {
            continue;
        }

        if (VAR_22->nelts != VAR_6[VAR_19].argv->nelts) {
            continue;
        }

        if (VAR_17 != VAR_6[VAR_19].type) {
            continue;
        }

        VAR_16 = 1;
        VAR_14 = VAR_22->elts;
        VAR_15 = VAR_6[VAR_19].argv->elts;
        for (VAR_20 = 0; VAR_20 < VAR_22->nelts - 1; VAR_20++) {
            if (FUNC_6(VAR_14[VAR_20], VAR_15[VAR_20]) != 0) {
                VAR_16 = 0;
                break;
            }
        }
        if (VAR_16) {
            return &VAR_6[VAR_19];
        }
    }

    if (VAR_18 == -1) {
        if (VAR_4 < VAR_1) {
            VAR_18 = VAR_4++;
        } else {
            return ((void*)0);
        }
    }

    FUNC_4(&VAR_6[VAR_18], sizeof(ngx_open_pipe_t));

    VAR_6[VAR_18].open_fd = FUNC_3(&VAR_7->open_files);
    if (VAR_6[VAR_18].open_fd == ((void*)0)) {
        return ((void*)0);
    }

    FUNC_4(VAR_6[VAR_18].open_fd, sizeof(ngx_open_file_t));
    VAR_6[VAR_18].open_fd->fd = VAR_0;

    VAR_6[VAR_18].pid = -1;
    VAR_6[VAR_18].cmd = VAR_12;
    VAR_6[VAR_18].argv = VAR_22;
    VAR_6[VAR_18].type = VAR_17;
    VAR_6[VAR_18].generation = VAR_5;
    VAR_6[VAR_18].configured = 1;

    return &VAR_6[VAR_18];
}
