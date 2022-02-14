
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vlc_readdir_helper {int dummy; } ;
struct TYPE_3__ {char* psz_location; } ;
typedef TYPE_1__ stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,char*,char const*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct vlc_readdir_helper*,char*,int *,char const*,int,int ) ;
 char* FUNC_4 (char const*) ;

__attribute__((used)) static int FUNC_5( stream_t *VAR_2, struct vlc_readdir_helper *VAR_3,
                     const char *VAR_4, int VAR_5 )
{
    char *VAR_6;
    int VAR_7;

    char *VAR_8 = FUNC_4( VAR_4 );
    if( VAR_8 == ((void*)0) )
        return VAR_1;
    const char *VAR_9 = VAR_2->psz_location[0] != '\0'
        && VAR_2->psz_location[FUNC_2(VAR_2->psz_location) -1] != '/'
        ? "/" : "";
    VAR_7 = FUNC_0( &VAR_6, "smb://%s%s%s", VAR_2->psz_location,
                      VAR_9, VAR_8 );
    FUNC_1( VAR_8 );
    if( VAR_7 == -1 )
        return VAR_1;

    VAR_7 = FUNC_3( VAR_3, VAR_6, ((void*)0), VAR_4, VAR_5,
                                        VAR_0 );
    FUNC_1( VAR_6 );
    return VAR_7;
}
