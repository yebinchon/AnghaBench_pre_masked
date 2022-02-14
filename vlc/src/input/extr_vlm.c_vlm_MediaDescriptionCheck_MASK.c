
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int i_media; TYPE_2__** media; } ;
typedef TYPE_3__ vlm_t ;
struct TYPE_10__ {char* psz_name; scalar_t__ id; } ;
typedef TYPE_4__ vlm_media_t ;
struct TYPE_7__ {scalar_t__ id; char* psz_name; } ;
struct TYPE_8__ {TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1( vlm_t *VAR_2, vlm_media_t *VAR_3 )
{
    if( !VAR_3 || !VAR_3->psz_name ||
        !FUNC_0( VAR_3->psz_name, "all" ) || !FUNC_0( VAR_3->psz_name, "media" ) || !FUNC_0( VAR_3->psz_name, "schedule" ) )
        return VAR_0;

    for( int VAR_4 = 0; VAR_4 < VAR_2->i_media; VAR_4++ )
    {
        if( VAR_2->media[VAR_4]->cfg.id == VAR_3->id )
            continue;
        if( !FUNC_0( VAR_2->media[VAR_4]->cfg.psz_name, VAR_3->psz_name ) )
            return VAR_0;
    }
    return VAR_1;
}
