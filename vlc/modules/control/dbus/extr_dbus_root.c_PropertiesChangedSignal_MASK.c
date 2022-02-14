
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_dictionary_t ;
struct TYPE_6__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
struct TYPE_5__ {int * p_conn; } ;
typedef int DBusMessageIter ;
typedef int DBusHandlerResult ;
typedef int DBusConnection ;


 int FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int *,char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ,char*,int *) ;
 scalar_t__ FUNC_6 (int *,char*) ;

__attribute__((used)) static DBusHandlerResult
FUNC_7( intf_thread_t *VAR_10,
                         vlc_dictionary_t *VAR_11 )
{
    DBusConnection *VAR_12 = VAR_10->p_sys->p_conn;
    DBusMessageIter VAR_13, VAR_14;
    const char *VAR_15 = VAR_3;

    FUNC_2( VAR_1,
                 VAR_2,
                 "PropertiesChanged" );

    VAR_6;
    FUNC_0( &VAR_15 );

    if( !FUNC_5( &VAR_9, VAR_4, "{sv}",
                                           &VAR_13 ) )
        return VAR_0;

    if( FUNC_6( VAR_11, "Fullscreen" ) )
    {
        if( FUNC_1( VAR_10, &VAR_13, "Fullscreen", "b",
                     VAR_5 ) != VAR_8 )
        {
            FUNC_3( &VAR_9, &VAR_13 );
            return VAR_0;
        }
    }

    if( !FUNC_4( &VAR_9, &VAR_13 ) )
        return VAR_0;

    if( !FUNC_5( &VAR_9, VAR_4, "s",
                                           &VAR_14 ) )
        return VAR_0;

    if( !FUNC_4( &VAR_9, &VAR_14 ) )
        return VAR_0;

    VAR_7;
}
