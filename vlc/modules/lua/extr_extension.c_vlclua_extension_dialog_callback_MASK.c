
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* p_address; } ;
typedef TYPE_2__ vlc_value_t ;
typedef int vlc_object_t ;
typedef int extension_widget_t ;
typedef int extension_t ;
struct TYPE_8__ {int event; int * p_data; TYPE_1__* p_dlg; } ;
typedef TYPE_3__ extension_dialog_command_t ;
struct TYPE_6__ {int * p_sys; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *,int ,...) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static int FUNC_3( vlc_object_t *VAR_3,
                                             char const *VAR_4,
                                             vlc_value_t VAR_5,
                                             vlc_value_t VAR_6,
                                             void *VAR_7 )
{

    ( void ) VAR_4;
    ( void ) VAR_5;
    ( void ) VAR_7;

    extension_dialog_command_t *VAR_8 = VAR_6.p_address;
    FUNC_1( VAR_8 != ((void*)0) );
    FUNC_1( VAR_8->p_dlg != ((void*)0));

    extension_t *VAR_9 = VAR_8->p_dlg->p_sys;
    FUNC_1( VAR_9 != ((void*)0) );

    extension_widget_t *VAR_10 = VAR_8->p_data;

    switch( VAR_8->event )
    {
        case 129:
            FUNC_1( VAR_10 != ((void*)0) );
            FUNC_0( VAR_9, VAR_0, VAR_10 );
            break;
        case 128:
            FUNC_0( VAR_9, VAR_1 );
            break;
        default:
            FUNC_2( VAR_3, "Received unknown UI event %d, discarded",
                     VAR_8->event );
            break;
    }

    return VAR_2;
}
