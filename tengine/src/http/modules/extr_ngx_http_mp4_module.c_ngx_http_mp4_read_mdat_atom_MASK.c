
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int ngx_int_t ;
struct TYPE_14__ {scalar_t__ nelts; } ;
struct TYPE_13__ {TYPE_7__* buf; } ;
struct TYPE_12__ {TYPE_4__* next; int * buf; } ;
struct TYPE_10__ {int log; } ;
struct TYPE_16__ {int in_file; int last_buf; int last_in_chain; scalar_t__ file_last; TYPE_1__* file; } ;
struct TYPE_15__ {scalar_t__ end; scalar_t__ offset; TYPE_5__ trak; TYPE_4__ mdat_data; TYPE_3__ mdat_atom; int mdat_atom_buf; TYPE_2__* request; TYPE_1__ file; TYPE_7__ mdat_data_buf; } ;
typedef TYPE_6__ ngx_http_mp4_file_t ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_11__ {struct TYPE_11__* main; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (TYPE_6__*,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_2(ngx_http_mp4_file_t *VAR_2, uint64_t VAR_3)
{
    ngx_buf_t *VAR_4;

    FUNC_0(VAR_0, VAR_2->file.log, 0, "mp4 mdat atom");

    VAR_4 = &VAR_2->mdat_data_buf;
    VAR_4->file = &VAR_2->file;
    VAR_4->in_file = 1;
    VAR_4->last_buf = (VAR_2->request == VAR_2->request->main) ? 1 : 0;
    VAR_4->last_in_chain = 1;
    VAR_4->file_last = VAR_2->offset + VAR_3;

    VAR_2->mdat_atom.buf = &VAR_2->mdat_atom_buf;
    VAR_2->mdat_atom.next = &VAR_2->mdat_data;
    VAR_2->mdat_data.buf = VAR_4;

    if (VAR_2->trak.nelts) {

        VAR_2->offset = VAR_2->end;

    } else {
        FUNC_1(VAR_2, VAR_3);
    }

    return VAR_1;
}
