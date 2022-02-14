
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int i_object_defs; struct TYPE_7__* p_region_defs; scalar_t__ i_region_defs; struct TYPE_7__* p_pixbuf; struct TYPE_7__* p_object_defs; struct TYPE_7__* psz_text; struct TYPE_7__* p_next; } ;
typedef TYPE_1__ dvbsub_region_t ;
typedef TYPE_1__ dvbsub_clut_t ;
struct TYPE_8__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_9__ {TYPE_1__* p_page; TYPE_1__* p_regions; TYPE_1__* p_cluts; } ;
typedef TYPE_4__ decoder_sys_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1( decoder_t *VAR_0 )
{
    decoder_sys_t *VAR_1 = VAR_0->p_sys;
    dvbsub_region_t *VAR_2, *VAR_3;
    dvbsub_clut_t *VAR_4, *VAR_5;



    for( VAR_4 = VAR_1->p_cluts; VAR_4 != ((void*)0); VAR_4 = VAR_5 )
    {
        VAR_5 = VAR_4->p_next;
        FUNC_0( VAR_4 );
    }
    VAR_1->p_cluts = ((void*)0);

    for( VAR_2 = VAR_1->p_regions; VAR_2 != ((void*)0); VAR_2 = VAR_3 )
    {
        VAR_3 = VAR_2->p_next;
        for( int VAR_6 = 0; VAR_6 < VAR_2->i_object_defs; VAR_6++ )
            FUNC_0( VAR_2->p_object_defs[VAR_6].psz_text );
        if( VAR_2->i_object_defs ) FUNC_0( VAR_2->p_object_defs );
        FUNC_0( VAR_2->p_pixbuf );
        FUNC_0( VAR_2 );
    }
    VAR_1->p_regions = ((void*)0);

    if( VAR_1->p_page )
    {
        if( VAR_1->p_page->i_region_defs )
            FUNC_0( VAR_1->p_page->p_region_defs );
        FUNC_0( VAR_1->p_page );
    }
    VAR_1->p_page = ((void*)0);
}
