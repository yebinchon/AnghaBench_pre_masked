
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;


struct TYPE_18__ {int p_next; TYPE_3__* p_sys; } ;
typedef TYPE_2__ sout_stream_t ;
struct TYPE_19__ {int lock; TYPE_4__* id_video; TYPE_4__* id_master_sync; } ;
typedef TYPE_3__ sout_stream_sys_t ;
struct TYPE_20__ {scalar_t__ downstream_id; TYPE_11__* p_decoder; scalar_t__ b_transcode; } ;
typedef TYPE_4__ sout_stream_id_sys_t ;
struct TYPE_17__ {int i_cat; } ;
struct TYPE_16__ {TYPE_1__ fmt_in; } ;



 int FUNC_0 (TYPE_4__*) ;

 int FUNC_1 (TYPE_2__*,TYPE_4__*,int *) ;
 int VAR_0 ;

 int FUNC_2 (TYPE_11__*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9( sout_stream_t *VAR_1, void *VAR_2 )
{
    sout_stream_sys_t *VAR_3 = VAR_1->p_sys;
    sout_stream_id_sys_t *VAR_4 = (sout_stream_id_sys_t *)VAR_2;

    if( VAR_4->b_transcode )
    {
        int VAR_5 = VAR_4->p_decoder ? VAR_4->p_decoder->fmt_in.i_cat : VAR_0;
        switch( VAR_5 )
        {
        case 130:
            FUNC_1( VAR_1, VAR_4, ((void*)0) );
            FUNC_2( VAR_4->p_decoder );
            FUNC_7( &VAR_3->lock );
            if( VAR_4 == VAR_3->id_master_sync )
                VAR_3->id_master_sync = ((void*)0);
            FUNC_8( &VAR_3->lock );
            FUNC_4( VAR_1, VAR_4 );
            break;
        case 128:
            FUNC_1( VAR_1, VAR_4, ((void*)0) );
            FUNC_2( VAR_4->p_decoder );
            FUNC_7( &VAR_3->lock );
            if( VAR_4 == VAR_3->id_video )
                VAR_3->id_video = ((void*)0);
            FUNC_8( &VAR_3->lock );
            FUNC_6( VAR_1, VAR_4 );
            break;
        case 129:
            FUNC_2( VAR_4->p_decoder );
            FUNC_5( VAR_1, VAR_4 );
            break;
        default:
            break;
        }
    }
    else FUNC_2( VAR_4->p_decoder );

    if( VAR_4->downstream_id ) FUNC_3( VAR_1->p_next, VAR_4->downstream_id );

    FUNC_0( VAR_4 );
}
