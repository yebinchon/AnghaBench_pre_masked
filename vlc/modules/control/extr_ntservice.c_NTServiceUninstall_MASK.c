
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_7__ {int psz_service; } ;
typedef TYPE_2__ intf_sys_t ;
typedef int * SC_HANDLE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;

__attribute__((used)) static int FUNC_6( intf_thread_t *VAR_4 )
{
    intf_sys_t *VAR_5 = VAR_4->p_sys;

    SC_HANDLE VAR_6 = FUNC_2( ((void*)0), ((void*)0), VAR_1 );
    if( VAR_6 == ((void*)0) )
    {
        FUNC_5( VAR_4,
                 "could not connect to Services Control Manager database" );
        return VAR_2;
    }


    SC_HANDLE VAR_7 = FUNC_3( VAR_6, VAR_5->psz_service, VAR_0 );
    if( VAR_7 == ((void*)0) )
    {
        FUNC_5( VAR_4, "could not open service" );
        FUNC_0( VAR_6 );
        return VAR_2;
    }


    if( !FUNC_1( VAR_7 ) )
    {
        FUNC_5( VAR_4, "could not delete service \"%s\"",
                 VAR_5->psz_service );
    }
    else
    {
        FUNC_4( VAR_4, "service deleted successfuly" );
    }

    FUNC_0( VAR_7 );
    FUNC_0( VAR_6 );

    return VAR_3;
}
