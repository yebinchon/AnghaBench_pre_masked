
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ sout_stream_t ;
struct TYPE_10__ {int i_total_samples; int b_done; int i_duration; TYPE_2__* p_data; TYPE_1__* id; int p_chromaprint_ctx; scalar_t__ b_finished; } ;
typedef TYPE_4__ sout_stream_sys_t ;
struct TYPE_8__ {int i_duration; int psz_fingerprint; } ;
struct TYPE_7__ {int i_samplerate; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char**) ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5( sout_stream_t *VAR_0 )
{
    sout_stream_sys_t *VAR_1 = VAR_0->p_sys;
    char *VAR_2 = ((void*)0);
    if ( VAR_1->b_finished && FUNC_1( VAR_1->p_chromaprint_ctx ) )
    {
        FUNC_2( VAR_1->p_chromaprint_ctx,
                                     &VAR_2 );
        if ( VAR_2 )
        {
            VAR_1->p_data->i_duration = VAR_1->i_total_samples / VAR_1->id->i_samplerate;
            VAR_1->p_data->psz_fingerprint = FUNC_4( VAR_2 );
            FUNC_0( VAR_2 );
            FUNC_3( VAR_0, "DURATION=%u;FINGERPRINT=%s",
                    VAR_1->p_data->i_duration,
                    VAR_1->p_data->psz_fingerprint );
        }
    } else {
        FUNC_3( VAR_0, "Cannot create %us fingerprint (not enough samples?)",
                 VAR_1->i_duration );
    }
    VAR_1->b_done = 1;
    FUNC_3( VAR_0, "Fingerprinting finished" );
}
