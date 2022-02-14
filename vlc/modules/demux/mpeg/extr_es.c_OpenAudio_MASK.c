
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint64_t ;
typedef int demux_t ;
struct TYPE_3__ {scalar_t__ i_codec; int (* pf_probe ) (int *,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,TYPE_1__*,int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2( vlc_object_t *VAR_3 )
{
    demux_t *VAR_4 = (demux_t*)VAR_3;
    for( int VAR_5 = 0; VAR_2[VAR_5].i_codec != 0; VAR_5++ )
    {
        uint64_t VAR_6;
        if( !VAR_2[VAR_5].pf_probe( VAR_4, &VAR_6 ) )
            return FUNC_0( VAR_4, VAR_0, &VAR_2[VAR_5], VAR_6 );
    }
    return VAR_1;
}
