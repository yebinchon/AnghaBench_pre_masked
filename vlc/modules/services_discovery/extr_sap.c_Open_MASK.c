
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {int description; TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_8__ {int thread; int * pp_announces; scalar_t__ i_announces; void* b_parse; void* b_strict; scalar_t__ i_fd; int * pi_fd; int i_timeout; } ;
typedef TYPE_2__ services_discovery_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;
 void* FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_5 (int *,int ,TYPE_1__*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7( vlc_object_t *VAR_5 )
{
    services_discovery_t *VAR_6 = ( services_discovery_t* )VAR_5;
    services_discovery_sys_t *VAR_7 = (services_discovery_sys_t *)
                                FUNC_2( sizeof( services_discovery_sys_t ) );
    if( !VAR_7 )
        return VAR_2;

    VAR_7->i_timeout = FUNC_6(FUNC_4( VAR_6, "sap-timeout" ));

    VAR_6->p_sys = VAR_7;
    VAR_6->description = FUNC_0("Network streams (SAP)");

    VAR_7->pi_fd = ((void*)0);
    VAR_7->i_fd = 0;

    VAR_7->b_strict = FUNC_3( VAR_6, "sap-strict");
    VAR_7->b_parse = FUNC_3( VAR_6, "sap-parse" );

    VAR_7->i_announces = 0;
    VAR_7->pp_announces = ((void*)0);

    if (FUNC_5 (&VAR_7->thread, VAR_0, VAR_6, VAR_4))
    {
        FUNC_1 (VAR_7);
        return VAR_1;
    }

    return VAR_3;
}
