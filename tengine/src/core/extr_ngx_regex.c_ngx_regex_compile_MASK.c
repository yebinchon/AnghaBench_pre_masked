
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int pcre ;
typedef int ngx_regex_t ;
struct TYPE_10__ {scalar_t__ name; TYPE_6__* regex; } ;
typedef TYPE_3__ ngx_regex_elt_t ;
struct TYPE_8__ {void* data; void* len; } ;
struct TYPE_9__ {size_t len; scalar_t__ data; } ;
struct TYPE_11__ {scalar_t__ captures; scalar_t__ named_captures; scalar_t__ name_size; scalar_t__ names; TYPE_1__ err; TYPE_2__ pattern; TYPE_6__* regex; int pool; scalar_t__ options; } ;
typedef TYPE_4__ ngx_regex_compile_t ;
typedef int ngx_int_t ;
struct TYPE_12__ {int * code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_0 (int *) ;
 TYPE_6__* FUNC_1 (int ,int) ;
 int * VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (void*,void*,char*,...) ;
 int * FUNC_5 (char const*,int,char const**,int*,int *) ;
 int FUNC_6 (int *,int *,int ,scalar_t__*) ;

ngx_int_t
FUNC_7(ngx_regex_compile_t *VAR_7)
{
    int VAR_8, VAR_9;
    char *VAR_10;
    pcre *VAR_11;
    const char *VAR_12;
    ngx_regex_elt_t *VAR_13;

    FUNC_3(VAR_7->pool);

    VAR_11 = FUNC_5((const char *) VAR_7->pattern.data, (int) VAR_7->options,
                      &VAR_12, &VAR_9, ((void*)0));


    FUNC_2();

    if (VAR_11 == ((void*)0)) {
        if ((size_t) VAR_9 == VAR_7->pattern.len) {
           VAR_7->err.len = FUNC_4(VAR_7->err.data, VAR_7->err.len,
                              "pcre_compile() failed: %s in \"%V\"",
                               VAR_12, &VAR_7->pattern)
                      - VAR_7->err.data;

        } else {
           VAR_7->err.len = FUNC_4(VAR_7->err.data, VAR_7->err.len,
                              "pcre_compile() failed: %s in \"%V\" at \"%s\"",
                               VAR_12, &VAR_7->pattern, VAR_7->pattern.data + VAR_9)
                      - VAR_7->err.data;
        }

        return VAR_0;
    }

    VAR_7->regex = FUNC_1(VAR_7->pool, sizeof(ngx_regex_t));
    if (VAR_7->regex == ((void*)0)) {
        goto nomem;
    }

    VAR_7->regex->code = VAR_11;



    if (VAR_6 != ((void*)0)) {
        VAR_13 = FUNC_0(VAR_6);
        if (VAR_13 == ((void*)0)) {
            goto nomem;
        }

        VAR_13->regex = VAR_7->regex;
        VAR_13->name = VAR_7->pattern.data;
    }

    VAR_8 = FUNC_6(VAR_11, ((void*)0), VAR_2, &VAR_7->captures);
    if (VAR_8 < 0) {
        VAR_10 = "pcre_fullinfo(\"%V\", PCRE_INFO_CAPTURECOUNT) failed: %d";
        goto failed;
    }

    if (VAR_7->captures == 0) {
        return VAR_1;
    }

    VAR_8 = FUNC_6(VAR_11, ((void*)0), VAR_3, &VAR_7->named_captures);
    if (VAR_8 < 0) {
        VAR_10 = "pcre_fullinfo(\"%V\", PCRE_INFO_NAMECOUNT) failed: %d";
        goto failed;
    }

    if (VAR_7->named_captures == 0) {
        return VAR_1;
    }

    VAR_8 = FUNC_6(VAR_11, ((void*)0), VAR_4, &VAR_7->name_size);
    if (VAR_8 < 0) {
        VAR_10 = "pcre_fullinfo(\"%V\", PCRE_INFO_NAMEENTRYSIZE) failed: %d";
        goto failed;
    }

    VAR_8 = FUNC_6(VAR_11, ((void*)0), VAR_5, &VAR_7->names);
    if (VAR_8 < 0) {
        VAR_10 = "pcre_fullinfo(\"%V\", PCRE_INFO_NAMETABLE) failed: %d";
        goto failed;
    }

    return VAR_1;

failed:

    VAR_7->err.len = FUNC_4(VAR_7->err.data, VAR_7->err.len, VAR_10, &VAR_7->pattern, VAR_8)
                  - VAR_7->err.data;
    return VAR_0;

nomem:

    VAR_7->err.len = FUNC_4(VAR_7->err.data, VAR_7->err.len,
                               "regex \"%V\" compilation failed: no memory",
                               &VAR_7->pattern)
                  - VAR_7->err.data;
    return VAR_0;
}
