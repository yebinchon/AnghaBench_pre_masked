
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int name; } ;
typedef TYPE_1__ opt_t ;
typedef int libvlc_media_player_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char const*,char*) ;
 float FUNC_1 (int *,int ) ;

__attribute__((used)) static float
FUNC_2( libvlc_media_player_t *VAR_1, const char *restrict VAR_2,
            const opt_t *restrict VAR_3 )
{
    if( !VAR_3 ) return 0.0;

    if( VAR_3->type != VAR_0 )
    {
        FUNC_0( "Invalid argument to %s in %s", VAR_2, "get float" );
        return 0.0;
    }

    return FUNC_1( VAR_1, VAR_3->name );
}
