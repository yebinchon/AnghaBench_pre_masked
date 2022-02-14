
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_3__ {int use_odd; } ;
typedef TYPE_1__ csa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;

int FUNC_1( vlc_object_t *VAR_2, csa_t *VAR_3, bool VAR_4 )
{
    if ( !VAR_3 ) return VAR_0;
    VAR_3->use_odd = VAR_4;

        FUNC_0( VAR_2, "using the %s key for scrambling",
                 VAR_4 ? "odd" : "even" );

    return VAR_1;
}
