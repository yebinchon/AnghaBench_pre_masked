
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t vlc_meta_type_t ;
struct TYPE_3__ {int ** ppsz_meta; } ;
typedef TYPE_1__ vlc_meta_t ;


 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*) ;

void FUNC_4( vlc_meta_t *VAR_0, vlc_meta_type_t VAR_1, const char *VAR_2 )
{
    FUNC_2( VAR_0->ppsz_meta[VAR_1] );
    FUNC_1( VAR_2 == ((void*)0) || FUNC_0( VAR_2 ) );
    VAR_0->ppsz_meta[VAR_1] = VAR_2 ? FUNC_3( VAR_2 ) : ((void*)0);
}
