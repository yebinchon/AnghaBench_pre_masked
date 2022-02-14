
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_10__ {char* data; scalar_t__ len; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_11__ {scalar_t__ file_type; char cluster_id; int file; } ;
typedef TYPE_2__ ngx_http_tfs_raw_fsname_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (char*,char*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int) ;

ngx_int_t
FUNC_5(ngx_str_t *VAR_4, ngx_str_t *VAR_5,
    ngx_http_tfs_raw_fsname_t* VAR_6)
{
    ngx_uint_t VAR_7;

    if (VAR_6 != ((void*)0) && VAR_4->data != ((void*)0) && VAR_4->data[0] != '\0') {
        FUNC_4(VAR_6, sizeof(ngx_http_tfs_raw_fsname_t));
        VAR_6->file_type = FUNC_0(VAR_4);
        if (VAR_6->file_type == VAR_2) {
            return VAR_0;
        } else {

            if (VAR_5 != ((void*)0)
                && VAR_5->data != ((void*)0)
                && VAR_4->len > VAR_1)
            {
                VAR_7 = VAR_4->len - VAR_1;
                if (VAR_5->len != VAR_7) {
                    return VAR_0;
                }
                VAR_7 = VAR_5->len > VAR_7 ? VAR_7 :VAR_5->len;
                if (FUNC_3(VAR_5->data,
                               VAR_4->data + VAR_1,
                               VAR_7))
                {
                    return VAR_0;
                }
            }

            FUNC_1(VAR_4->data + 2,
                                           (u_char*) &(VAR_6->file));
            if (VAR_5 != ((void*)0) && VAR_5->data == ((void*)0)) {
                VAR_5->data = VAR_4->data + VAR_1;
                VAR_5->len = VAR_4->len - VAR_1;
            }

            FUNC_2(VAR_6, VAR_5);
            if (VAR_6->cluster_id == 0) {
                VAR_6->cluster_id = VAR_4->data[1] - '0';
            }
        }
    }

    return VAR_3;
}
