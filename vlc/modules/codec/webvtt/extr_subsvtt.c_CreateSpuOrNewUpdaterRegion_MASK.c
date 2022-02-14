
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int region; } ;
typedef TYPE_2__ subtext_updater_sys_t ;
typedef int substext_updater_region_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
struct TYPE_8__ {TYPE_1__ updater; } ;
typedef TYPE_3__ subpicture_t ;
typedef int decoder_t ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 () ;
 TYPE_3__* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( decoder_t *VAR_0,
                                         subpicture_t **VAR_1,
                                         substext_updater_region_t **VAR_2 )
{
    if( *VAR_1 == ((void*)0) )
    {
        *VAR_1 = FUNC_2( VAR_0 );
        if( *VAR_1 )
        {
            subtext_updater_sys_t *VAR_3 = (*VAR_1)->updater.p_sys;
            *VAR_2 = &VAR_3->region;
        }
    }
    else
    {
        substext_updater_region_t *VAR_4 =
                                FUNC_1( );
        if( VAR_4 )
        {
            FUNC_0( *VAR_2, VAR_4 );
            *VAR_2 = VAR_4;
        }
    }
}
