
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int poll; int parent; } ;
typedef TYPE_1__ discovery_sys_t ;
typedef scalar_t__ AvahiClientState ;
typedef int AvahiClient ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3( AvahiClient *VAR_2, AvahiClientState VAR_3,
                             void * VAR_4 )
{
    discovery_sys_t *VAR_5 = VAR_4;

    if( VAR_3 == VAR_0 &&
        (FUNC_0(VAR_2) == VAR_1) )
    {
        FUNC_2( VAR_5->parent, "avahi client disconnected" );
        FUNC_1( VAR_5->poll );
    }
}
