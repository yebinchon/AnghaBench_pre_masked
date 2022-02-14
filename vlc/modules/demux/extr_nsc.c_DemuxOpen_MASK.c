
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_2__ {int pf_control; int pf_demux; int s; } ;
typedef TYPE_1__ demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,int const**,int ) ;

__attribute__((used)) static int FUNC_2( vlc_object_t * VAR_5 )
{
    demux_t *VAR_6 = (demux_t *)VAR_5;
    const uint8_t *VAR_7;
    int VAR_8;


    VAR_8 = FUNC_1( VAR_6->s, &VAR_7, VAR_2 );
    VAR_8 -= sizeof("NSC Format Version=") - 1;

    if ( VAR_8 > 0 )
    {
        while ( VAR_8 && FUNC_0( (char *)VAR_7, "NSC Format Version=",
                                       (int) sizeof("NSC Format Version=") - 1 ) )
        {
            VAR_7++;
            VAR_8--;
        }
        if ( !FUNC_0( (char *)VAR_7, "NSC Format Version=",
                           (int) sizeof("NSC Format Version=") -1 ) )
        {
            VAR_6->pf_demux = VAR_1;
            VAR_6->pf_control = VAR_0;
            return VAR_4;
        }
    }
    return VAR_3;
}
