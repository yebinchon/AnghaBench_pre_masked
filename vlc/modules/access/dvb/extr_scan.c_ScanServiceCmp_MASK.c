
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ i_channel; scalar_t__ psz_name; } ;
typedef TYPE_1__ scan_service_t ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1( const void *VAR_0, const void *VAR_1 )
{
    const scan_service_t *VAR_2 = *((const scan_service_t**)VAR_0);
    const scan_service_t *VAR_3 = *((const scan_service_t**)VAR_1);

    if( VAR_2->i_channel == VAR_3->i_channel )
    {
        if( VAR_2->psz_name && VAR_3->psz_name )
            return FUNC_0( VAR_2->psz_name, VAR_3->psz_name );
        return 0;
    }

    if( VAR_2->i_channel < VAR_3->i_channel )
        return -1;
    else if( VAR_2->i_channel > VAR_3->i_channel )
        return 1;
    return 0;
}
