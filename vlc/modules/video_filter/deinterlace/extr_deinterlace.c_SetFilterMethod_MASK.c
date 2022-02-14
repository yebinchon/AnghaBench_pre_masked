
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_11__ {int pf_render_ordered; int settings; } ;
struct TYPE_13__ {TYPE_2__ context; TYPE_1__* chroma; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_14__ {char* psz_mode; int pf_render_ordered; int settings; int b_high_bit_depth; int can_pack; } ;
struct TYPE_10__ {int pixel_size; } ;


 size_t FUNC_0 (TYPE_7__*) ;
 TYPE_7__* VAR_0 ;
 int FUNC_1 (TYPE_3__*,char*,char const*) ;
 int FUNC_2 (TYPE_3__*,char*,char const*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static void FUNC_4( filter_t *VAR_1, const char *VAR_2, bool VAR_3 )
{
    filter_sys_t *VAR_4 = VAR_1->p_sys;

    if ( VAR_2 == ((void*)0) || !FUNC_3( VAR_2, "auto" ) )
        VAR_2 = "x";

    for ( size_t VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++ )
    {
        if( !FUNC_3( VAR_2, VAR_0[VAR_5].psz_mode ) )
        {
            if ( VAR_3 && !VAR_0[VAR_5].can_pack )
            {
                FUNC_2( VAR_1, "unknown or incompatible deinterlace mode \"%s\""
                        " for packed format", VAR_2 );
                FUNC_4( VAR_1, "blend", VAR_3 );
                return;
            }
            if( VAR_4->chroma->pixel_size > 1 && !VAR_0[VAR_5].b_high_bit_depth )
            {
                FUNC_2( VAR_1, "unknown or incompatible deinterlace mode \"%s\""
                        " for high depth format", VAR_2 );
                FUNC_4( VAR_1, "blend", VAR_3 );
                return;
            }

            FUNC_1( VAR_1, "using %s deinterlace method", VAR_2 );
            VAR_4->context.settings = VAR_0[VAR_5].settings;
            VAR_4->context.pf_render_ordered = VAR_0[VAR_5].pf_render_ordered;
            return;
        }
    }

    FUNC_2( VAR_1, "unknown deinterlace mode \"%s\"", VAR_2 );
}
