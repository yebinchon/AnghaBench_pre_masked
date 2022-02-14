
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
typedef int dvbsub_regiondef_t ;
typedef int dvbsub_page_t ;
struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_10__ {int b_page; TYPE_5__* p_page; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int bs_t ;
struct TYPE_12__ {int i_version; int i_region_defs; int i_timeout; TYPE_3__* p_region_defs; } ;
struct TYPE_11__ {void* i_y; void* i_x; void* i_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_5__* FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 TYPE_3__* FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7( decoder_t *VAR_2, bs_t *VAR_3, uint16_t VAR_4 )
{
    decoder_sys_t *VAR_5 = VAR_2->p_sys;
    int VAR_6, VAR_7, VAR_8, VAR_9;


    VAR_8 = FUNC_0( VAR_3, 8 );
    VAR_6 = FUNC_0( VAR_3, 4 );
    VAR_7 = FUNC_0( VAR_3, 2 );
    FUNC_1( VAR_3, 2 );

    if( VAR_7 == VAR_1 )
    {




        FUNC_3( VAR_2 );
    }
    else if( !VAR_5->p_page && ( VAR_7 != VAR_0 ) &&
             ( VAR_7 != VAR_1 ) )
    {

        FUNC_5( VAR_2, "didn't receive an acquisition page yet" );






    }







    if( VAR_5->p_page && ( VAR_5->p_page->i_version == VAR_6 ) )
    {
        FUNC_1( VAR_3, 8 * (VAR_4 - 2) );
        return;
    }
    else if( VAR_5->p_page )
    {
        if( VAR_5->p_page->i_region_defs )
            FUNC_2( VAR_5->p_page->p_region_defs );
        VAR_5->p_page->p_region_defs = ((void*)0);
        VAR_5->p_page->i_region_defs = 0;
    }

    if( !VAR_5->p_page )
    {




        VAR_5->p_page = FUNC_4( sizeof(dvbsub_page_t) );
        if( !VAR_5->p_page )
            return;
    }

    VAR_5->p_page->i_version = VAR_6;
    VAR_5->p_page->i_timeout = VAR_8;
    VAR_5->b_page = 1;


    VAR_5->p_page->i_region_defs = (VAR_4 - 2) / 6;

    if( VAR_5->p_page->i_region_defs == 0 ) return;

    VAR_5->p_page->p_region_defs =
        FUNC_6( VAR_5->p_page->i_region_defs, sizeof(dvbsub_regiondef_t) );
    if( VAR_5->p_page->p_region_defs )
    {
        for( VAR_9 = 0; VAR_9 < VAR_5->p_page->i_region_defs; VAR_9++ )
        {
            VAR_5->p_page->p_region_defs[VAR_9].i_id = FUNC_0( VAR_3, 8 );
            FUNC_1( VAR_3, 8 );
            VAR_5->p_page->p_region_defs[VAR_9].i_x = FUNC_0( VAR_3, 16 );
            VAR_5->p_page->p_region_defs[VAR_9].i_y = FUNC_0( VAR_3, 16 );






        }
    }
}
