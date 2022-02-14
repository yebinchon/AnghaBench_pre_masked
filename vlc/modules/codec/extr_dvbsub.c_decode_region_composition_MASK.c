
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_13__ {int i_id; int i_version; int i_object_defs; int i_width; int i_height; int i_depth; int i_level_comp; int i_clut; TYPE_2__* p_object_defs; TYPE_2__* p_pixbuf; struct TYPE_13__* p_next; } ;
typedef TYPE_1__ dvbsub_region_t ;
struct TYPE_14__ {void* i_bg_pc; void* i_fg_pc; void* i_type; struct TYPE_14__* psz_text; void* i_y; void* i_x; void* i_id; } ;
typedef TYPE_2__ dvbsub_objectdef_t ;
struct TYPE_15__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_16__ {TYPE_1__* p_regions; } ;
typedef TYPE_4__ decoder_sys_t ;
typedef int bs_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (TYPE_3__*,char*,...) ;
 TYPE_2__* FUNC_6 (int) ;
 TYPE_2__* FUNC_7 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_8( decoder_t *VAR_2, bs_t *VAR_3, uint16_t VAR_4 )
{
    decoder_sys_t *VAR_5 = VAR_2->p_sys;
    dvbsub_region_t *VAR_6, **VAR_7 = &VAR_5->p_regions;
    int VAR_8, VAR_9, VAR_10;
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    int VAR_16, VAR_17, VAR_18;
    bool VAR_19;

    VAR_9 = FUNC_0( VAR_3, 8 );
    VAR_10 = FUNC_0( VAR_3, 4 );


    for( VAR_6 = VAR_5->p_regions; VAR_6 != ((void*)0);
         VAR_6 = VAR_6->p_next )
    {
        VAR_7 = &VAR_6->p_next;
        if( VAR_6->i_id == VAR_9 ) break;
    }


    if( VAR_6 && ( VAR_6->i_version == VAR_10 ) )
    {
        FUNC_1( VAR_3, 8 * (VAR_4 - 1) - 4 );
        return;
    }

    if( !VAR_6 )
    {



        VAR_6 = *VAR_7 = FUNC_2( 1, sizeof(dvbsub_region_t) );
        if( !VAR_6 )
            return;
        VAR_6->p_object_defs = ((void*)0);
        VAR_6->p_pixbuf = ((void*)0);
        VAR_6->p_next = ((void*)0);
    }


    VAR_6->i_id = VAR_9;
    VAR_6->i_version = VAR_10;
    VAR_19 = FUNC_0( VAR_3, 1 );
    FUNC_1( VAR_3, 3 );

    VAR_11 = FUNC_0( VAR_3, 16 );
    VAR_12 = FUNC_0( VAR_3, 16 );



    VAR_13 = FUNC_0( VAR_3, 3 );
    VAR_14 = FUNC_0( VAR_3, 3 );
    FUNC_1( VAR_3, 2 );
    VAR_15 = FUNC_0( VAR_3, 8 );

    VAR_16 = FUNC_0( VAR_3, 8 );
    VAR_17 = FUNC_0( VAR_3, 4 );
    VAR_18 = FUNC_0( VAR_3, 2 );
    FUNC_1( VAR_3, 2 );


    while( VAR_6->i_object_defs )
        FUNC_3( VAR_6->p_object_defs[--VAR_6->i_object_defs].psz_text );

    FUNC_3( VAR_6->p_object_defs );
    VAR_6->p_object_defs = ((void*)0);


    if( ( VAR_6->i_width != VAR_11 ) ||
        ( VAR_6->i_height != VAR_12 ) )
    {
        if( VAR_6->p_pixbuf )
        {
            FUNC_5( VAR_2, "region size changed (%dx%d->%dx%d)",
                     VAR_6->i_width, VAR_6->i_height, VAR_11, VAR_12 );
            FUNC_3( VAR_6->p_pixbuf );
        }

        VAR_6->p_pixbuf = FUNC_6( VAR_12 * VAR_11 );
        VAR_6->i_depth = 0;
        VAR_19 = 1;
    }
    if( VAR_6->i_depth &&
        ( ( VAR_6->i_depth != VAR_14 ) ||
          ( VAR_6->i_level_comp != VAR_13 ) ||
          ( VAR_6->i_clut != VAR_15) ) )
    {
        FUNC_5( VAR_2, "region parameters changed (not allowed)" );
    }


    if( VAR_19 )
    {
        int VAR_20 = ( VAR_14 == 1 ) ? VAR_18 :
            ( ( VAR_14 == 2 ) ? VAR_17 : VAR_16 );
        FUNC_4( VAR_6->p_pixbuf, VAR_20, VAR_11 * VAR_12 );
    }

    VAR_6->i_width = VAR_11;
    VAR_6->i_height = VAR_12;
    VAR_6->i_level_comp = VAR_13;
    VAR_6->i_depth = VAR_14;
    VAR_6->i_clut = VAR_15;


    VAR_8 = 10;
    while( VAR_8 < VAR_4 )
    {
        dvbsub_objectdef_t *VAR_21;


        VAR_6->i_object_defs++;
        VAR_6->p_object_defs = FUNC_7( VAR_6->p_object_defs,
                     sizeof(dvbsub_objectdef_t) * VAR_6->i_object_defs );


        VAR_21 = &VAR_6->p_object_defs[VAR_6->i_object_defs - 1];
        VAR_21->i_id = FUNC_0( VAR_3, 16 );
        VAR_21->i_type = FUNC_0( VAR_3, 2 );
        FUNC_1( VAR_3, 2 );
        VAR_21->i_x = FUNC_0( VAR_3, 12 );
        FUNC_1( VAR_3, 4 );
        VAR_21->i_y = FUNC_0( VAR_3, 12 );
        VAR_21->psz_text = ((void*)0);

        VAR_8 += 6;

        if( ( VAR_21->i_type == VAR_0 ) ||
            ( VAR_21->i_type == VAR_1 ) )
        {
            VAR_21->i_fg_pc = FUNC_0( VAR_3, 8 );
            VAR_21->i_bg_pc = FUNC_0( VAR_3, 8 );
            VAR_8 += 2;
        }
    }
}
