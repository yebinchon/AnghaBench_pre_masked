
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int name; } ;
typedef TYPE_1__ opt_t ;
typedef int libvlc_media_player_t ;




 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (char*,char const*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5( libvlc_media_player_t *VAR_0, const char *restrict VAR_1,
         const opt_t *restrict VAR_2 )
{
    if( !VAR_2 ) return 0;

    switch( VAR_2->type )
    {
        case 0:
        {
            bool VAR_3 = FUNC_0( VAR_0, VAR_1 );
            return VAR_3 ? 1 : 0;
        }
    case 128:
        return FUNC_4(VAR_0, VAR_2->name);
    case 129:
        return FUNC_2(FUNC_3(VAR_0, VAR_2->name));
    default:
        FUNC_1( "Invalid argument to %s in %s", VAR_1, "get int" );
        return 0;
    }
}
