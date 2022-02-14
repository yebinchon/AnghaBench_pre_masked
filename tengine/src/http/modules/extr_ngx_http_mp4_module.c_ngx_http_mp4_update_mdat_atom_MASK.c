
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int u_char ;
typedef int off_t ;
typedef int ngx_mp4_atom_header_t ;
typedef int ngx_mp4_atom_header64_t ;
struct TYPE_11__ {int temporary; int * last; int * pos; } ;
struct TYPE_9__ {int log; } ;
struct TYPE_8__ {TYPE_1__* buf; } ;
struct TYPE_10__ {int content_length; TYPE_5__ mdat_atom_buf; int * mdat_atom_header; TYPE_3__ file; TYPE_2__ mdat_data; } ;
typedef TYPE_4__ ngx_http_mp4_file_t ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_7__ {int file_pos; int file_last; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*,int,int) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char,char,char,char) ;

__attribute__((used)) static size_t
FUNC_4(ngx_http_mp4_file_t *VAR_1, off_t VAR_2,
    off_t VAR_3)
{
    off_t VAR_4;
    u_char *VAR_5;
    uint32_t VAR_6;
    uint64_t VAR_7;
    ngx_buf_t *VAR_8;

    VAR_4 = VAR_3 - VAR_2;
    VAR_1->mdat_data.buf->file_pos = VAR_2;
    VAR_1->mdat_data.buf->file_last = VAR_3;

    FUNC_0(VAR_0, VAR_1->file.log, 0,
                   "mdat new offset @%O:%O", VAR_2, VAR_4);

    VAR_5 = VAR_1->mdat_atom_header;

    if ((uint64_t) VAR_4
        > (uint64_t) 0xffffffff - sizeof(ngx_mp4_atom_header_t))
    {
        VAR_7 = 1;
        VAR_6 = sizeof(ngx_mp4_atom_header64_t);
        FUNC_2(VAR_5 + sizeof(ngx_mp4_atom_header_t),
                            sizeof(ngx_mp4_atom_header64_t) + VAR_4);
    } else {
        VAR_7 = sizeof(ngx_mp4_atom_header_t) + VAR_4;
        VAR_6 = sizeof(ngx_mp4_atom_header_t);
    }

    VAR_1->content_length += VAR_6 + VAR_4;

    FUNC_1(VAR_5, VAR_7);
    FUNC_3(VAR_5, 'm', 'd', 'a', 't');

    VAR_8 = &VAR_1->mdat_atom_buf;
    VAR_8->temporary = 1;
    VAR_8->pos = VAR_5;
    VAR_8->last = VAR_5 + VAR_6;

    return VAR_6;
}
