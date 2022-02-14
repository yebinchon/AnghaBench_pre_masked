
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_5__ {int force; } ;
struct TYPE_6__ {TYPE_1__ obj; int s; } ;
typedef TYPE_2__ demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 size_t FUNC_2 (int ,char const**,int) ;

__attribute__((used)) static int FUNC_3( demux_t *VAR_2 )
{
    const uint8_t *VAR_3;
    size_t VAR_4 = FUNC_2( VAR_2->s, &VAR_3, 16 );
    if( VAR_4 < 16 )
        return VAR_0;

    if( !FUNC_0( VAR_3, "\xEF\xBB\xBF", 3 ) )
        VAR_3 += 3;

    if( ( FUNC_0( VAR_3, "WEBVTT", 6 ) ||
          ( VAR_3[6] != '\n' &&
            VAR_3[6] != ' ' &&
            VAR_3[6] != '\t' &&
           ( VAR_3[6] != '\r' || VAR_3[7] != '\n' ) )
        ) && !VAR_2->obj.force )
    {
        FUNC_1( VAR_2, "subtitle demux discarded" );
        return VAR_0;
    }

    return VAR_1;
}
