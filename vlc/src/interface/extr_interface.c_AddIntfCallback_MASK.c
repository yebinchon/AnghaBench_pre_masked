
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int psz_string; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_object_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3( vlc_object_t *VAR_0, char const *VAR_1,
                            vlc_value_t VAR_2, vlc_value_t VAR_3, void *VAR_4 )
{
    int VAR_5 = FUNC_0( FUNC_2(VAR_0), VAR_3.psz_string );
    if( VAR_5 )
        FUNC_1( VAR_0, "interface \"%s\" initialization failed",
                 VAR_3.psz_string );

    (void) VAR_1; (void) VAR_2; (void) VAR_4;
    return VAR_5;
}
