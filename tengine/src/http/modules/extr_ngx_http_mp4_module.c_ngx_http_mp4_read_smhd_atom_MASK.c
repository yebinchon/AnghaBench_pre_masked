
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int u_char ;
typedef int ngx_mp4_atom_header_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {int temporary; int * last; int * pos; } ;
struct TYPE_13__ {size_t smhd_size; TYPE_2__* out; TYPE_5__ smhd_atom_buf; } ;
typedef TYPE_3__ ngx_http_mp4_trak_t ;
struct TYPE_11__ {int log; } ;
struct TYPE_14__ {TYPE_1__ file; } ;
typedef TYPE_4__ ngx_http_mp4_file_t ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_12__ {TYPE_5__* buf; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int * FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*,scalar_t__) ;
 TYPE_3__* FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *,char,char,char,char) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_mp4_file_t *VAR_3, uint64_t VAR_4)
{
    u_char *VAR_5;
    size_t VAR_6;
    ngx_buf_t *VAR_7;
    ngx_http_mp4_trak_t *VAR_8;

    FUNC_0(VAR_1, VAR_3->file.log, 0, "mp4 smhd atom");

    VAR_5 = FUNC_1(VAR_3);
    VAR_6 = sizeof(ngx_mp4_atom_header_t) + (size_t) VAR_4;
    FUNC_4(VAR_5, VAR_6);
    FUNC_5(VAR_5, 's', 'm', 'h', 'd');

    VAR_8 = FUNC_3(VAR_3);

    VAR_7 = &VAR_8->smhd_atom_buf;
    VAR_7->temporary = 1;
    VAR_7->pos = VAR_5;
    VAR_7->last = VAR_5 + VAR_6;

    VAR_8->smhd_size += VAR_6;
    VAR_8->out[VAR_0].buf = VAR_7;

    FUNC_2(VAR_3, VAR_4);

    return VAR_2;
}
