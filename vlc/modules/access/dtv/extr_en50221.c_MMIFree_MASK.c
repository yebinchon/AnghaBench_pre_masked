
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int i_choices; int * ppsz_choices; int * psz_bottom; int * psz_subtitle; int * psz_title; } ;
struct TYPE_8__ {int * psz_answ; int b_ok; } ;
struct TYPE_7__ {int * psz_text; } ;
struct TYPE_10__ {TYPE_3__ menu; TYPE_2__ answ; TYPE_1__ enq; } ;
struct TYPE_11__ {int i_object_type; TYPE_4__ u; } ;
typedef TYPE_5__ mmi_t ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2( mmi_t *VAR_0 )
{
    switch ( VAR_0->i_object_type )
    {
    case 130:
        FUNC_0( VAR_0->u.enq.psz_text );
        break;

    case 131:
        if ( VAR_0->u.answ.b_ok )
        {
            FUNC_0( VAR_0->u.answ.psz_answ );
        }
        break;

    case 128:
    case 129:
        FUNC_0( VAR_0->u.menu.psz_title );
        FUNC_0( VAR_0->u.menu.psz_subtitle );
        FUNC_0( VAR_0->u.menu.psz_bottom );
        for ( int VAR_1 = 0; VAR_1 < VAR_0->u.menu.i_choices; VAR_1++ )
        {
            FUNC_1( VAR_0->u.menu.ppsz_choices[VAR_1] );
        }
        FUNC_0( VAR_0->u.menu.ppsz_choices );
        break;

    default:
        break;
    }
}
