
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* p_sys; } ;
typedef TYPE_2__ intf_thread_t ;
typedef int WCHAR ;
struct TYPE_14__ {int * member_1; int * member_0; } ;
struct TYPE_12__ {scalar_t__ psz_service; } ;
typedef TYPE_3__ SERVICE_TABLE_ENTRY ;
typedef int * LPSERVICE_MAIN_FUNCTION ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,char*) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static void *FUNC_11( void *VAR_3 )
{
    intf_thread_t *VAR_4 = VAR_3;
    SERVICE_TABLE_ENTRY VAR_5[] =
    {
        { (WCHAR*) FUNC_3(VAR_1), (LPSERVICE_MAIN_FUNCTION) &VAR_0 },
        { ((void*)0), ((void*)0) }
    };

    VAR_2 = VAR_4;
    VAR_4->p_sys->psz_service = FUNC_9( VAR_4, "ntservice-name" );
    VAR_4->p_sys->psz_service = VAR_4->p_sys->psz_service ?
        VAR_4->p_sys->psz_service : FUNC_7(VAR_1);

    if( FUNC_8( VAR_4, "ntservice-install" ) )
    {
        FUNC_0( VAR_4 );
        return ((void*)0);
    }

    if( FUNC_8( VAR_4, "ntservice-uninstall" ) )
    {
        FUNC_1( VAR_4 );
        return ((void*)0);
    }

    if( FUNC_2( VAR_5 ) == 0 )
    {
        FUNC_6( VAR_4, "StartServiceCtrlDispatcher failed" );
    }

    FUNC_4( VAR_4->p_sys->psz_service );


    FUNC_5( FUNC_10(VAR_4) );
    return ((void*)0);
}
