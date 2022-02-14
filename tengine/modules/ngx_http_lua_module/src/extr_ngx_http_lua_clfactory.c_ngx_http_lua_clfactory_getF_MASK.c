
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* str; char* ptr; } ;
struct TYPE_4__ {char* ptr; char* str; } ;
struct TYPE_6__ {int sent_begin; size_t begin_code_len; scalar_t__ file_type; char const* buff; int sent_end; size_t end_code_len; scalar_t__ rest_len; TYPE_2__ end_code; int f; TYPE_1__ begin_code; scalar_t__ extraline; } ;
typedef TYPE_3__ ngx_http_lua_clfactory_file_ctx_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int) ;
 size_t FUNC_1 (char const*,int,int,int ) ;

__attribute__((used)) static const char *
FUNC_2(lua_State *VAR_3, void *VAR_4, size_t *VAR_5)
{

    char *VAR_6;

    size_t VAR_7;

    ngx_http_lua_clfactory_file_ctx_t *VAR_8;

    VAR_8 = (ngx_http_lua_clfactory_file_ctx_t *) VAR_4;

    if (VAR_8->extraline) {
        VAR_8->extraline = 0;
        *VAR_5 = 1;
        return "\n";
    }


    if (VAR_8->sent_begin == 0) {
        VAR_8->sent_begin = 1;
        *VAR_5 = VAR_8->begin_code_len;

        if (VAR_8->file_type == VAR_2) {
            VAR_6 = VAR_8->begin_code.ptr;

        } else {
            VAR_6 = VAR_8->begin_code.str;
        }

        return VAR_6;
    }


    VAR_7 = FUNC_1(VAR_8->buff, 1, sizeof(VAR_8->buff), VAR_8->f);

    FUNC_0("fread returned %d", (int) VAR_7);

    if (VAR_7 == 0) {

        if (VAR_8->sent_end == 0) {
            VAR_8->sent_end = 1;
            *VAR_5 = VAR_8->end_code_len;

            if (VAR_8->file_type == VAR_1) {
                VAR_6 = VAR_8->end_code.str;

            } else {
                VAR_6 = VAR_8->end_code.ptr;
            }

            return VAR_6;
        }


        *VAR_5 = 0;
        return ((void*)0);
    }


    if (VAR_8->file_type == VAR_0) {


        VAR_8->rest_len -= VAR_7;

        if (VAR_8->rest_len == 0) {
            if (--VAR_7 == 0 && VAR_8->sent_end == 0) {
                VAR_8->sent_end = 1;
                VAR_6 = VAR_8->end_code.ptr;
                *VAR_5 = VAR_8->end_code_len;

                return VAR_6;
            }
        }
    }


    *VAR_5 = VAR_7;
    return VAR_8->buff;
}
