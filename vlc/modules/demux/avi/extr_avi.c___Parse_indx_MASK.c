
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_16__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_17__ {int b_indexloaded; } ;
typedef TYPE_5__ demux_sys_t ;
typedef int avi_index_t ;
struct TYPE_18__ {int i_length; int i_lengthtotal; scalar_t__ i_pos; void* i_flags; int i_id; } ;
typedef TYPE_6__ avi_entry_t ;
struct TYPE_15__ {TYPE_2__* field; TYPE_1__* std; } ;
struct TYPE_19__ {unsigned int i_entriesinuse; scalar_t__ i_indexsubtype; TYPE_3__ idx; scalar_t__ i_baseoffset; int i_id; int i_indextype; } ;
typedef TYPE_7__ avi_chunk_indx_t ;
struct TYPE_14__ {int i_size; scalar_t__ i_offset; } ;
struct TYPE_13__ {int i_size; scalar_t__ i_offset; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,TYPE_6__*) ;
 int FUNC_1 (TYPE_4__*,char*,int ,unsigned int) ;
 int FUNC_2 (TYPE_4__*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3( demux_t *VAR_2, avi_index_t *VAR_3, uint64_t *VAR_4,
                          avi_chunk_indx_t *VAR_5 )
{
    demux_sys_t *VAR_6 = VAR_2->p_sys;
    avi_entry_t VAR_7;

    VAR_6->b_indexloaded = 1;

    FUNC_1( VAR_2, "loading subindex(0x%x) %d entries", VAR_5->i_indextype, VAR_5->i_entriesinuse );
    if( VAR_5->i_indexsubtype == 0 )
    {
        for( unsigned VAR_8 = 0; VAR_8 < VAR_5->i_entriesinuse; VAR_8++ )
        {
            VAR_7.i_id = VAR_5->i_id;
            VAR_7.i_flags = VAR_5->idx.std[VAR_8].i_size & 0x80000000 ? 0 : VAR_0;
            VAR_7.i_pos = VAR_5->i_baseoffset + VAR_5->idx.std[VAR_8].i_offset - 8;
            VAR_7.i_length = VAR_5->idx.std[VAR_8].i_size&0x7fffffff;
            VAR_7.i_lengthtotal = VAR_7.i_length;

            FUNC_0( VAR_3, VAR_4, &VAR_7 );
        }
    }
    else if( VAR_5->i_indexsubtype == VAR_1 )
    {
        for( unsigned VAR_9 = 0; VAR_9 < VAR_5->i_entriesinuse; VAR_9++ )
        {
            VAR_7.i_id = VAR_5->i_id;
            VAR_7.i_flags = VAR_5->idx.field[VAR_9].i_size & 0x80000000 ? 0 : VAR_0;
            VAR_7.i_pos = VAR_5->i_baseoffset + VAR_5->idx.field[VAR_9].i_offset - 8;
            VAR_7.i_length = VAR_5->idx.field[VAR_9].i_size;
            VAR_7.i_lengthtotal = VAR_7.i_length;

            FUNC_0( VAR_3, VAR_4, &VAR_7 );
        }
    }
    else
    {
        FUNC_2( VAR_2, "unknown subtype index(0x%x)", VAR_5->i_indexsubtype );
    }
}
