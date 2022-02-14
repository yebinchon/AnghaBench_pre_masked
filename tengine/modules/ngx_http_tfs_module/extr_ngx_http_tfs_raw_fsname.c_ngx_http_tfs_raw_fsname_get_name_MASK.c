
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char u_char ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_4__ {scalar_t__ suffix; } ;
struct TYPE_5__ {char* file_name; scalar_t__ cluster_id; TYPE_1__ file; } ;
typedef TYPE_2__ ngx_http_tfs_raw_fsname_t ;


 size_t VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 int FUNC_0 (char*,char*) ;

u_char*
FUNC_1(ngx_http_tfs_raw_fsname_t* VAR_3,
    unsigned VAR_4, ngx_int_t VAR_5)
{
    if (VAR_3 != ((void*)0)) {
        if (VAR_5) {

            VAR_3->file.suffix = 0;
        }

        FUNC_0((u_char*) &(VAR_3->file),
                                       VAR_3->file_name + 2);

        if (VAR_4) {
            VAR_3->file_name[0] = VAR_1;

        } else {
            VAR_3->file_name[0] = VAR_2;
        }
        VAR_3->file_name[1] = (u_char) ('0' + VAR_3->cluster_id);
        VAR_3->file_name[VAR_0] = '\0';

        return VAR_3->file_name;
    }

    return ((void*)0);
}
