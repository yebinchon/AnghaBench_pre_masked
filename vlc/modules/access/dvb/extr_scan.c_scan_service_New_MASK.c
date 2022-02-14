
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int i_channel; int b_crypted; int * psz_original_network_name; int * psz_provider; int * psz_name; int type; int i_original_network_id; int i_program; int * stickyref; int * p_mplex; } ;
typedef TYPE_1__ scan_service_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static scan_service_t *FUNC_1( uint16_t VAR_2 )
{
    scan_service_t *VAR_3 = FUNC_0( sizeof(*VAR_3) );
    if( !VAR_3 )
        return ((void*)0);

    VAR_3->p_mplex = ((void*)0);
    VAR_3->stickyref = ((void*)0);
    VAR_3->i_program = VAR_2;
    VAR_3->i_original_network_id = VAR_0;

    VAR_3->type = VAR_1;
    VAR_3->psz_name = ((void*)0);
    VAR_3->psz_provider = ((void*)0);
    VAR_3->psz_original_network_name = ((void*)0);
    VAR_3->i_channel = -1;
    VAR_3->b_crypted = 0;

    return VAR_3;
}
