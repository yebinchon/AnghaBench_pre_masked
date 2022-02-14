
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_mp4_atom_header_t ;
struct TYPE_5__ {int pos; } ;
struct TYPE_4__ {int size; TYPE_2__ minf_atom_buf; scalar_t__ dinf_size; scalar_t__ smhd_size; scalar_t__ vmhd_size; } ;
typedef TYPE_1__ ngx_http_mp4_trak_t ;
typedef int ngx_http_mp4_file_t ;
typedef TYPE_2__ ngx_buf_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(ngx_http_mp4_file_t *VAR_0,
    ngx_http_mp4_trak_t *VAR_1)
{
    ngx_buf_t *VAR_2;

    VAR_1->size += sizeof(ngx_mp4_atom_header_t)
               + VAR_1->vmhd_size
               + VAR_1->smhd_size
               + VAR_1->dinf_size;
    VAR_2 = &VAR_1->minf_atom_buf;
    FUNC_0(VAR_2->pos, VAR_1->size);
}
