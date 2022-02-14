
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef scalar_t__ uint64_t ;
typedef size_t ngx_uint_t ;
typedef int ngx_int_t ;
typedef int ngx_http_mp4_trak_t ;
struct TYPE_16__ {int data; } ;
struct TYPE_19__ {int log; TYPE_2__ name; } ;
struct TYPE_22__ {int temporary; scalar_t__ last; scalar_t__ pos; } ;
struct TYPE_18__ {TYPE_8__* buf; } ;
struct TYPE_17__ {int size; int nalloc; int pool; int * elts; } ;
struct TYPE_15__ {int * buf; } ;
struct TYPE_20__ {scalar_t__ start; scalar_t__ length; scalar_t__ buffer_size; int end; int offset; int * buffer_end; int * buffer_pos; int * buffer; int * buffer_start; TYPE_5__ file; TYPE_8__ moov_atom_buf; TYPE_4__ moov_atom; scalar_t__ moov_atom_header; TYPE_13__* request; TYPE_3__ trak; int traks; TYPE_1__ mdat_atom; } ;
typedef TYPE_6__ ngx_http_mp4_file_t ;
struct TYPE_21__ {scalar_t__ max_buffer_size; } ;
typedef TYPE_7__ ngx_http_mp4_conf_t ;
typedef TYPE_8__ ngx_buf_t ;
struct TYPE_14__ {int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_7__* FUNC_0 (TYPE_13__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_6__*,size_t) ;
 int FUNC_2 (TYPE_6__*,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int ,char*,int ,scalar_t__) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_mp4_file_t *VAR_8, uint64_t VAR_9)
{
    ngx_int_t VAR_10;
    ngx_uint_t VAR_11;
    ngx_buf_t *VAR_12;
    ngx_http_mp4_conf_t *VAR_13;

    FUNC_3(VAR_3, VAR_8->file.log, 0, "mp4 moov atom");

    VAR_11 = (VAR_8->mdat_atom.buf == ((void*)0));

    if (VAR_11 && VAR_8->start == 0 && VAR_8->length == 0) {




        return VAR_0;
    }

    VAR_13 = FUNC_0(VAR_8->request, VAR_6);

    if (VAR_9 > VAR_8->buffer_size) {

        if (VAR_9 > VAR_13->max_buffer_size) {
            FUNC_4(VAR_4, VAR_8->file.log, 0,
                          "\"%s\" mp4 moov atom is too large:%uL, "
                          "you may want to increase mp4_max_buffer_size",
                          VAR_8->file.name.data, VAR_9);
            return VAR_1;
        }

        FUNC_5(VAR_8->request->pool, VAR_8->buffer);
        VAR_8->buffer = ((void*)0);
        VAR_8->buffer_pos = ((void*)0);
        VAR_8->buffer_end = ((void*)0);

        VAR_8->buffer_size = (size_t) VAR_9
                         + VAR_2 * VAR_11;
    }

    if (FUNC_1(VAR_8, (size_t) VAR_9) != VAR_5) {
        return VAR_1;
    }

    VAR_8->trak.elts = &VAR_8->traks;
    VAR_8->trak.size = sizeof(ngx_http_mp4_trak_t);
    VAR_8->trak.nalloc = 2;
    VAR_8->trak.pool = VAR_8->request->pool;

    VAR_12 = &VAR_8->moov_atom_buf;
    VAR_12->temporary = 1;
    VAR_12->pos = VAR_8->moov_atom_header;
    VAR_12->last = VAR_8->moov_atom_header + 8;

    VAR_8->moov_atom.buf = &VAR_8->moov_atom_buf;

    VAR_10 = FUNC_2(VAR_8, VAR_7, VAR_9);

    FUNC_3(VAR_3, VAR_8->file.log, 0, "mp4 moov atom done");

    if (VAR_11) {
        VAR_8->buffer_start = VAR_8->buffer_pos;
        VAR_8->buffer_size = VAR_2;

        if (VAR_8->buffer_start + VAR_8->buffer_size > VAR_8->buffer_end) {
            VAR_8->buffer = ((void*)0);
            VAR_8->buffer_pos = ((void*)0);
            VAR_8->buffer_end = ((void*)0);
        }

    } else {

        VAR_8->offset = VAR_8->end;
    }

    return VAR_10;
}
