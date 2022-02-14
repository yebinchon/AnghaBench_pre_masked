
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int entries; int size; } ;
typedef TYPE_3__ ngx_mp4_ctts_atom_t ;
struct TYPE_14__ {size_t composition_offset_entries; size_t size; TYPE_2__* out; } ;
typedef TYPE_4__ ngx_http_mp4_trak_t ;
struct TYPE_11__ {int log; } ;
struct TYPE_15__ {TYPE_1__ file; } ;
typedef TYPE_5__ ngx_http_mp4_file_t ;
struct TYPE_16__ {int last; int pos; } ;
typedef TYPE_6__ ngx_buf_t ;
struct TYPE_12__ {TYPE_6__* buf; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*,TYPE_4__*,int) ;
 int FUNC_1 (int ,int ,int ,char*) ;
 int FUNC_2 (int ,int ,int ,char*,size_t) ;
 int FUNC_3 (int ,size_t) ;

__attribute__((used)) static void
FUNC_4(ngx_http_mp4_file_t *VAR_3,
    ngx_http_mp4_trak_t *VAR_4)
{
    size_t VAR_5;
    ngx_buf_t *VAR_6, *VAR_7;
    ngx_mp4_ctts_atom_t *VAR_8;







    FUNC_1(VAR_2, VAR_3->file.log, 0,
                   "mp4 ctts atom update");

    VAR_7 = VAR_4->out[VAR_1].buf;

    if (VAR_7 == ((void*)0)) {
        return;
    }

    FUNC_0(VAR_3, VAR_4, 1);
    FUNC_0(VAR_3, VAR_4, 0);

    FUNC_2(VAR_2, VAR_3->file.log, 0,
                   "composition offset entries:%uD",
                   VAR_4->composition_offset_entries);

    if (VAR_4->composition_offset_entries == 0) {
        VAR_4->out[VAR_0].buf = ((void*)0);
        VAR_4->out[VAR_1].buf = ((void*)0);
        return;
    }

    VAR_5 = sizeof(ngx_mp4_ctts_atom_t) + (VAR_7->last - VAR_7->pos);
    VAR_4->size += VAR_5;

    VAR_6 = VAR_4->out[VAR_0].buf;
    VAR_8 = (ngx_mp4_ctts_atom_t *) VAR_6->pos;

    FUNC_3(VAR_8->size, VAR_5);
    FUNC_3(VAR_8->entries, VAR_4->composition_offset_entries);

    return;
}
