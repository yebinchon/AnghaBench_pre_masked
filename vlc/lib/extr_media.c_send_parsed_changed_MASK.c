
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ parsed_status; int is_parsed; int has_asked_preparse; int event_manager; int parsed_lock; int parsed_cond; } ;
typedef TYPE_3__ libvlc_media_t ;
typedef scalar_t__ libvlc_media_parsed_status_t ;
typedef int libvlc_media_list_t ;
struct TYPE_8__ {scalar_t__ new_status; } ;
struct TYPE_9__ {TYPE_1__ media_parsed_changed; } ;
struct TYPE_11__ {TYPE_2__ u; int type; } ;
typedef TYPE_4__ libvlc_event_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int * FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8( libvlc_media_t *VAR_2,
                                 libvlc_media_parsed_status_t VAR_3 )
{
    libvlc_event_t VAR_4;

    FUNC_6( &VAR_2->parsed_lock );
    if( VAR_2->parsed_status == VAR_3 )
    {
        FUNC_7( &VAR_2->parsed_lock );
        return;
    }


    if( !VAR_2->is_parsed )
    {
        VAR_2->is_parsed = 1;
        FUNC_5( &VAR_2->parsed_cond );
    }

    VAR_2->parsed_status = VAR_3;
    if( VAR_2->parsed_status != VAR_1 )
        VAR_2->has_asked_preparse = 0;

    FUNC_7( &VAR_2->parsed_lock );

    if( VAR_3 == VAR_1 )
    {
        libvlc_media_list_t *VAR_5 = FUNC_4( VAR_2, 0 );
        if( VAR_5 != ((void*)0) )
        {

            FUNC_2( VAR_5 );
            FUNC_1( VAR_5 );
            FUNC_3( VAR_5 );
        }
    }


    VAR_4.type = VAR_0;
    VAR_4.u.media_parsed_changed.new_status = VAR_3;


    FUNC_0( &VAR_2->event_manager, &VAR_4 );
}
