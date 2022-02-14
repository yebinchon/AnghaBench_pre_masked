
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_15__ {int s; TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_16__ {unsigned int i_track; int b_seekable; scalar_t__ b_odml; int ck_root; } ;
typedef TYPE_4__ demux_sys_t ;
typedef int avi_index_t ;
struct TYPE_14__ {TYPE_1__* super; } ;
struct TYPE_18__ {scalar_t__ i_indextype; unsigned int i_entriesinuse; TYPE_2__ idx; } ;
struct TYPE_17__ {TYPE_6__ indx; } ;
typedef TYPE_5__ avi_chunk_t ;
typedef int avi_chunk_list_t ;
typedef TYPE_6__ avi_chunk_indx_t ;
struct TYPE_13__ {int i_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_5__*) ;
 void* FUNC_1 (int *,int ,unsigned int,int) ;
 scalar_t__ FUNC_2 (int ,TYPE_5__*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (TYPE_3__*,int *,int *,TYPE_6__*) ;
 int FUNC_4 (TYPE_3__*,char*,...) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6( demux_t *VAR_6,
                                avi_index_t VAR_7[], uint64_t *VAR_8 )
{
    demux_sys_t *VAR_9 = VAR_6->p_sys;

    avi_chunk_list_t *VAR_10;
    avi_chunk_list_t *VAR_11;

    VAR_10 = FUNC_1( &VAR_9->ck_root, VAR_0, 0, 1);
    VAR_11 = FUNC_1( VAR_10, VAR_1, 0, 1 );

    for( unsigned VAR_12 = 0; VAR_12 < VAR_9->i_track; VAR_12++ )
    {
        avi_chunk_list_t *VAR_13;
        avi_chunk_indx_t *VAR_14;


        VAR_13 = FUNC_1( VAR_11, VAR_3, VAR_12, 1 );
        VAR_14 = FUNC_1( VAR_13, VAR_2, 0, 0 );

        if( !VAR_14 )
        {
            if( VAR_9->b_odml )
                FUNC_4( VAR_6, "cannot find indx (misdetect/broken OpenDML "
                                   "file?)" );
            continue;
        }

        if( VAR_14->i_indextype == VAR_4 )
        {
            FUNC_3( VAR_6, &VAR_7[VAR_12], VAR_8, VAR_14 );
        }
        else if( VAR_14->i_indextype == VAR_5 )
        {
            if ( !VAR_9->b_seekable )
                return;
            avi_chunk_t VAR_15;
            for( unsigned VAR_16 = 0; VAR_16 < VAR_14->i_entriesinuse; VAR_16++ )
            {
                if( FUNC_5( VAR_6->s,
                                     VAR_14->idx.super[VAR_16].i_offset ) ||
                    FUNC_2( VAR_6->s, &VAR_15, ((void*)0) ) )
                {
                    break;
                }
                if( VAR_15.indx.i_indextype == VAR_4 )
                    FUNC_3( VAR_6, &VAR_7[VAR_12], VAR_8, &VAR_15.indx );
                FUNC_0( VAR_6->s, &VAR_15 );
            }
        }
        else
        {
            FUNC_4( VAR_6, "unknown type index(0x%x)", VAR_14->i_indextype );
        }

    }
}
