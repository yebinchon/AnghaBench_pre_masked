
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_9__ {int p_cfg; int pf_sub_source; TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_10__ {int i_inputfd; int i_outputfd; int b_updated; int b_atomic; void* psz_outputfile; void* psz_inputfile; int lock; int overlays; int processed; int pending; int atomic; int output; int input; } ;
typedef TYPE_2__ filter_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,char*,int ,int ) ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*,char*,int ,TYPE_2__*) ;
 void* FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9( vlc_object_t *VAR_5 )
{
    filter_t *VAR_6 = (filter_t *)VAR_5;
    filter_sys_t *VAR_7;


    VAR_6->p_sys = FUNC_5( sizeof( filter_sys_t ) );
    if( VAR_6->p_sys == ((void*)0) )
        return VAR_2;
    VAR_7 = VAR_6->p_sys;

    FUNC_0( &VAR_7->input );
    FUNC_0( &VAR_7->output );
    FUNC_1( &VAR_7->atomic );
    FUNC_1( &VAR_7->pending );
    FUNC_1( &VAR_7->processed );
    FUNC_4( &VAR_7->overlays );

    VAR_7->i_inputfd = -1;
    VAR_7->i_outputfd = -1;
    VAR_7->b_updated = 1;
    VAR_7->b_atomic = 0;
    FUNC_8( &VAR_7->lock );

    VAR_6->pf_sub_source = VAR_1;

    FUNC_3( VAR_6, "overlay-", VAR_4,
                       VAR_6->p_cfg );

    VAR_7->psz_inputfile = FUNC_7( VAR_6,
                                                       "overlay-input" );
    VAR_7->psz_outputfile = FUNC_7( VAR_6,
                                                        "overlay-output" );

    FUNC_6( VAR_6, "overlay-input", VAR_0, VAR_7 );
    FUNC_6( VAR_6, "overlay-output", VAR_0, VAR_7 );

    FUNC_2( VAR_6 );
    return VAR_3;
}
