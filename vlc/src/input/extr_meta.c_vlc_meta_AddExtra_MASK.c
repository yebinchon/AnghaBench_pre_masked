
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int extra_tags; } ;
typedef TYPE_1__ vlc_meta_t ;


 char* VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int *,char const*,int ,int *) ;
 scalar_t__ FUNC_3 (int *,char const*) ;
 int VAR_1 ;

void FUNC_4( vlc_meta_t *VAR_2, const char *VAR_3, const char *VAR_4 )
{
    char *VAR_5 = (char *)FUNC_3( &VAR_2->extra_tags, VAR_3 );
    if( VAR_5 != VAR_0 )
        FUNC_2( &VAR_2->extra_tags, VAR_3,
                                            VAR_1, ((void*)0) );
    FUNC_1( &VAR_2->extra_tags, VAR_3, FUNC_0(VAR_4) );
}
