
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_9__ {TYPE_3__* conf_file; int pool; } ;
typedef TYPE_4__ ngx_conf_t ;
struct TYPE_6__ {int len; char* data; } ;
struct TYPE_7__ {TYPE_1__ name; } ;
struct TYPE_8__ {int line; TYPE_2__ file; } ;


 int VAR_0 ;
 char* FUNC_0 (int ,size_t) ;
 char* FUNC_1 (char*,size_t,char*,size_t,char const*,int,char*,int ) ;

__attribute__((used)) static u_char *
FUNC_2(ngx_conf_t *VAR_1, const char *VAR_2, size_t VAR_3,
    size_t *VAR_4)
{
    u_char *VAR_5, *VAR_6;
    size_t VAR_7;

    VAR_7 = sizeof("=(:)") - 1 + VAR_3 + VAR_1->conf_file->file.name.len
          + VAR_0 + 1;

    VAR_6 = FUNC_0(VAR_1->pool, VAR_7);
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }

    if (VAR_1->conf_file->file.name.len) {
        VAR_5 = VAR_1->conf_file->file.name.data + VAR_1->conf_file->file.name.len;
        while (--VAR_5 >= VAR_1->conf_file->file.name.data) {
            if (*VAR_5 == '/' || *VAR_5 == '\\') {
                VAR_5++;
                goto found;
            }
        }

        VAR_5++;

    } else {
        VAR_5 = VAR_1->conf_file->file.name.data;
    }

found:

    VAR_5 = FUNC_1(VAR_6, VAR_7, "=%*s(%*s:%d)%Z",
                     VAR_3, VAR_2, VAR_1->conf_file->file.name.data
                     + VAR_1->conf_file->file.name.len - VAR_5,
                     VAR_5, VAR_1->conf_file->line);

    *VAR_4 = VAR_5 - VAR_6 - 1;

    return VAR_6;
}
