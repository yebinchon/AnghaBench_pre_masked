
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int lock; int * p_sys; int pf_control; } ;
typedef TYPE_1__ extensions_manager_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int *,char*,int ,int *) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;

int FUNC_7( vlc_object_t *VAR_5 )
{
    if( FUNC_1( VAR_5 ) )
        return VAR_1;

    FUNC_2( VAR_5, "Opening Lua Extension module" );

    extensions_manager_t *VAR_6 = ( extensions_manager_t* ) VAR_5;

    VAR_6->pf_control = VAR_0;

    VAR_6->p_sys = ((void*)0);
    FUNC_6( &VAR_6->lock );


    if( FUNC_0( VAR_6 ) != VAR_2 )
    {
        FUNC_3( VAR_6, "Can't load extensions modules" );
        return VAR_1;
    }


    FUNC_5( VAR_5, "dialog-event", VAR_3 );
    FUNC_4( VAR_5, "dialog-event",
                     VAR_4, ((void*)0) );

    return VAR_2;
}
