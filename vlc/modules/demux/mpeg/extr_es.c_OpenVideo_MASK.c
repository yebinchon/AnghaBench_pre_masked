
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
typedef int ssize_t ;
struct TYPE_6__ {int s; } ;
typedef TYPE_1__ demux_t ;


 int FUNC_0 (TYPE_1__*,int ,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int ,int const**,int) ;

__attribute__((used)) static int FUNC_5( vlc_object_t *VAR_3 )
{
    demux_t *VAR_4 = (demux_t*)VAR_3;


    bool VAR_5 = FUNC_2( VAR_4, ".m4v" );
    bool VAR_6 = !VAR_5 && FUNC_2( VAR_4, ".re4" );
    bool VAR_7 = FUNC_1( VAR_4, "m4v" ) ||
                        FUNC_1( VAR_4, "mp4v" );

    if( !VAR_5 && !VAR_7 && !VAR_6 )
        return VAR_1;

    ssize_t VAR_8 = VAR_6 ? 220 : 0;
    const uint8_t *VAR_9;
    if( FUNC_4( VAR_4->s, &VAR_9, VAR_8 + 4 ) < VAR_8 + 4 )
        return VAR_1;
    if( VAR_9[VAR_8 + 0] != 0x00 || VAR_9[VAR_8 + 1] != 0x00 || VAR_9[VAR_8 + 2] != 0x01 )
    {
        if( !VAR_7)
            return VAR_1;
        FUNC_3( VAR_4,
                  "this doesn't look like an MPEG ES stream, continuing anyway" );
    }
    return FUNC_0( VAR_4, VAR_0, &VAR_2, VAR_8 );
}
