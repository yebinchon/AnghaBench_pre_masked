
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_7__ {int s; } ;
typedef TYPE_1__ demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int ,int const**,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7( demux_t *VAR_2, uint64_t *VAR_3 )
{
    bool VAR_4;
    bool VAR_5;

    uint64_t VAR_6;
    const uint8_t *VAR_7;

    VAR_4 = FUNC_1( VAR_2, ".aac" ) ||
               FUNC_1( VAR_2, ".aacp" );
    VAR_5 = FUNC_0( VAR_2, "m4a" ) ||
                     FUNC_0( VAR_2, "aac" ) ||
                     FUNC_0( VAR_2, "mp4a" );

    if( !VAR_5 && !VAR_4 )
        return VAR_0;

    VAR_6 = FUNC_6( VAR_2->s );


    if( FUNC_5( VAR_2->s, &VAR_7, 10 ) < 10 )
    {
        FUNC_2( VAR_2, "cannot peek" );
        return VAR_0;
    }
    if( !FUNC_4( (char *)VAR_7, "ADIF", 4 ) )
    {
        FUNC_3( VAR_2, "ADIF file. Not yet supported. (Please report)" );
        return VAR_0;
    }

    *VAR_3 = VAR_6;
    return VAR_1;
}
