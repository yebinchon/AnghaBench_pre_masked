
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tt_time_t ;
struct TYPE_8__ {int psz_text; } ;
typedef TYPE_1__ tt_textnode_t ;
struct TYPE_11__ {int end; int begin; } ;
struct TYPE_9__ {int psz_node_name; TYPE_3__* p_child; TYPE_4__ timings; } ;
typedef TYPE_2__ tt_node_t ;
struct TYPE_10__ {scalar_t__ i_type; struct TYPE_10__* p_next; } ;
typedef TYPE_3__ tt_basenode_t ;
struct vlc_memstream {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vlc_memstream*,int ) ;
 int FUNC_1 (struct vlc_memstream*,TYPE_2__ const*) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (TYPE_4__*,int const*) ;
 int FUNC_6 (struct vlc_memstream*,char*,int ,int ) ;
 int FUNC_7 (struct vlc_memstream*,char) ;
 int FUNC_8 (struct vlc_memstream*,char*) ;

__attribute__((used)) static void FUNC_9( struct vlc_memstream *VAR_1, const tt_basenode_t *VAR_2,
                            const tt_time_t *VAR_3 )
{
    if( VAR_2->i_type == VAR_0 )
    {
        const tt_node_t *VAR_4 = (const tt_node_t *) VAR_2;

        if( FUNC_4( VAR_3 ) &&
           !FUNC_5( &VAR_4->timings, VAR_3 ) )
            return;

        FUNC_7( VAR_1, '<' );
        FUNC_0( VAR_1, VAR_4->psz_node_name );

        FUNC_1( VAR_1, VAR_4 );

        if( FUNC_2( VAR_4 ) )
        {
            FUNC_7( VAR_1, '>' );







            for( const tt_basenode_t *VAR_5 = VAR_4->p_child;
                                   VAR_5; VAR_5 = VAR_5->p_next )
            {
                FUNC_9( VAR_1, VAR_5, VAR_3 );
            }

            FUNC_8( VAR_1, "</" );
            FUNC_0( VAR_1, VAR_4->psz_node_name );
            FUNC_7( VAR_1, '>' );
        }
        else
            FUNC_8( VAR_1, "/>" );
    }
    else
    {
        const tt_textnode_t *VAR_6 = (const tt_textnode_t *) VAR_2;
        FUNC_0( VAR_1, VAR_6->psz_text );
    }
}
