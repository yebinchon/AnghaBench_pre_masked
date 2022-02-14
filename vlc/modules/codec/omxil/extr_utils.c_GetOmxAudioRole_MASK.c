
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vlc_fourcc_t ;
struct TYPE_2__ {scalar_t__ i_codec; scalar_t__ i_fourcc; char const* psz_role; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static const char *FUNC_1( vlc_fourcc_t VAR_2 )
{
    unsigned int VAR_3;

    VAR_2 = FUNC_0( VAR_0, VAR_2 );

    for( VAR_3 = 0; VAR_1[VAR_3].i_codec != 0; VAR_3++ )
        if( VAR_1[VAR_3].i_fourcc == VAR_2 ) break;

    return VAR_1[VAR_3].psz_role;
}
