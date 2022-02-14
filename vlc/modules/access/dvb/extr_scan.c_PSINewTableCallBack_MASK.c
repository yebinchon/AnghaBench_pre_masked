
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int p_obj; } ;
typedef TYPE_1__ scan_session_t ;
typedef int dvbpsi_t ;
typedef int dvbpsi_sdt_callback ;
typedef int dvbpsi_nit_callback ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_1 (int *,scalar_t__,int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3( dvbpsi_t *VAR_6, uint8_t VAR_7, uint16_t VAR_8, void *VAR_9 )
{
    scan_session_t *VAR_10 = (scan_session_t *)VAR_9;

    if( VAR_7 == VAR_4 || VAR_7 == VAR_5 )
    {
        if( !FUNC_1( VAR_6, VAR_7, VAR_8, (dvbpsi_sdt_callback)VAR_3, VAR_10 ) )
            FUNC_2( VAR_10->p_obj, "PSINewTableCallback: failed attaching SDTCallback" );
    }
    else if( VAR_7 == VAR_1 || VAR_7 == VAR_2 )
    {
        if( !FUNC_0( VAR_6, VAR_7, VAR_8, (dvbpsi_nit_callback)VAR_0, VAR_10 ) )
            FUNC_2( VAR_10->p_obj, "PSINewTableCallback: failed attaching NITCallback" );
    }
}
