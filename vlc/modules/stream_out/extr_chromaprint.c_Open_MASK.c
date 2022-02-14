
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_9__ {int pf_send; int pf_del; int pf_add; TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_stream_t ;
struct TYPE_10__ {int b_finished; int b_done; int p_chromaprint_ctx; int p_data; int i_duration; scalar_t__ i_total_samples; int * id; } ;
typedef TYPE_2__ sout_stream_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_9( vlc_object_t *VAR_8 )
{
    sout_stream_t *VAR_9 = (sout_stream_t*)VAR_8;
    sout_stream_sys_t *VAR_10;

    VAR_9->p_sys = VAR_10 = FUNC_3(sizeof(sout_stream_sys_t));
    if ( FUNC_6( ! VAR_10 ) ) return VAR_5;
    VAR_10->id = ((void*)0);
    VAR_10->b_finished = 0;
    VAR_10->b_done = 0;
    VAR_10->i_total_samples = 0;
    VAR_10->i_duration = FUNC_8( VAR_9, "duration" );
    VAR_10->p_data = FUNC_7( VAR_9, "fingerprint-data" );
    if ( !VAR_10->p_data )
    {
        FUNC_5( VAR_9, "Fingerprint data holder not set" );
        FUNC_2( VAR_10 );
        return VAR_6;
    }
    FUNC_4( VAR_9, "chromaprint version %s", FUNC_0() );
    VAR_10->p_chromaprint_ctx = FUNC_1( VAR_1 );
    if ( ! VAR_10->p_chromaprint_ctx )
    {
        FUNC_5( VAR_9, "Can't create chromaprint context" );
        FUNC_2( VAR_10 );
        return VAR_4;
    }
    VAR_9->pf_add = VAR_0;
    VAR_9->pf_del = VAR_2;
    VAR_9->pf_send = VAR_3;
    return VAR_7;
}
