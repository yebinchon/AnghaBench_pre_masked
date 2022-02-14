
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_6__ {int s; } ;
typedef TYPE_1__ demux_t ;


 scalar_t__ FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int*,int const*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (int ,int const**,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6( demux_t *VAR_5, uint64_t *VAR_6 )
{
    const uint16_t VAR_7[] = { VAR_2, VAR_3, VAR_4 };
    bool VAR_8;
    bool VAR_9;
    uint64_t VAR_10;

    const uint8_t *VAR_11;
    uint64_t VAR_12;
    ssize_t VAR_13;

    VAR_8 = FUNC_3( VAR_5, ".mp3" );
    VAR_9 = FUNC_2( VAR_5, "mp3" ) ||
                     FUNC_2( VAR_5, "mpga" );

    VAR_10 = FUNC_5( VAR_5->s );

    if( FUNC_1( VAR_5, &VAR_12, VAR_7, ((void*)0) ) )
    {
        if( !VAR_9 )
            return VAR_0;

        return VAR_0;
    }

    VAR_13 = FUNC_4( VAR_5->s, &VAR_11, VAR_12 + 4 );
    if( VAR_13 <= 0 || (uint64_t) VAR_13 < VAR_12 + 4 )
        return VAR_0;

    if( !FUNC_0( &VAR_11[VAR_12] ) )
    {
        bool VAR_14 = 0;

        if( !VAR_9 && !VAR_8 )
            return VAR_0;

        VAR_13 = FUNC_4( VAR_5->s, &VAR_11, VAR_12 + 8096 );
        while( VAR_13 > 0 && VAR_12 + 4 < (uint64_t) VAR_13 )
        {
            if( FUNC_0( &VAR_11[VAR_12] ) )
            {
                VAR_14 = 1;
                break;
            }
            VAR_12++;
        }
        if( !VAR_14 && !VAR_9 )
            return VAR_0;
    }
    *VAR_6 = VAR_10 + VAR_12;
    return VAR_1;
}
