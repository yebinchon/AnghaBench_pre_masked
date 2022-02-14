
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int xml_reader_t ;
typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_9__ {int pf_control; int pf_readdir; int s; } ;
typedef TYPE_1__ stream_t ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_1__*,int *,scalar_t__,int) ;
 scalar_t__ FUNC_7 (int ,int const**,int) ;
 int * FUNC_8 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,char const**) ;

int FUNC_11( vlc_object_t *VAR_5 )
{
    stream_t *VAR_6 = (stream_t *)VAR_5;

    FUNC_0(VAR_6);
    if( FUNC_3( VAR_6->s, "text/xml" )
     || FUNC_3( VAR_6->s, "application/xml" ) )
    {



        const uint8_t *VAR_7;
        ssize_t VAR_8 = FUNC_7( VAR_6->s, &VAR_7, 2048 );
        if( FUNC_4( VAR_8 <= 0 ) )
            return VAR_1;

        stream_t *VAR_9 =
            FUNC_6( VAR_6, (uint8_t *)VAR_7, VAR_8, 1 );
        if( FUNC_4( !VAR_9 ) )
            return VAR_1;

        xml_reader_t *VAR_10 = FUNC_8( VAR_6, VAR_9 );
        if( !VAR_10 )
        {
            FUNC_5( VAR_9 );
            return VAR_1;
        }

        const char *VAR_11;
        int VAR_12;
        if( ( VAR_12 = FUNC_10( VAR_10, &VAR_11 ) ) != VAR_3
         || FUNC_2( VAR_11, "rss" ) )
        {
            FUNC_5( VAR_9 );
            FUNC_9( VAR_10 );
            return VAR_1;
        }

        FUNC_9( VAR_10 );
        FUNC_5( VAR_9 );

    }
    else if( !FUNC_3( VAR_6->s, "application/rss+xml" ) )
        return VAR_1;

    VAR_6->pf_readdir = VAR_0;
    VAR_6->pf_control = VAR_4;
    FUNC_1( VAR_6, "using podcast reader" );

    return VAR_2;
}
