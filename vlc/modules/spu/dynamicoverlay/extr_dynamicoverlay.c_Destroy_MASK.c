
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ filter_t ;
struct TYPE_8__ {struct TYPE_8__* psz_outputfile; struct TYPE_8__* psz_inputfile; int lock; int overlays; int processed; int pending; int atomic; int output; int input; } ;
typedef TYPE_2__ filter_sys_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,char*,int ,TYPE_2__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7( vlc_object_t *VAR_1 )
{
    filter_t *VAR_2 = (filter_t *)VAR_1;
    filter_sys_t *VAR_3 = VAR_2->p_sys;

    FUNC_0( &VAR_3->input );
    FUNC_0( &VAR_3->output );
    FUNC_1( &VAR_3->atomic );
    FUNC_1( &VAR_3->pending );
    FUNC_1( &VAR_3->processed );
    FUNC_3( &VAR_3->overlays );
    FUNC_2( VAR_2 );

    FUNC_5( VAR_2, "overlay-input", VAR_0, VAR_3 );
    FUNC_5( VAR_2, "overlay-output", VAR_0, VAR_3 );

    FUNC_6( &VAR_3->lock );
    FUNC_4( VAR_3->psz_inputfile );
    FUNC_4( VAR_3->psz_outputfile );
    FUNC_4( VAR_3 );
}
