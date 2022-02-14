
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xml_reader_t ;
typedef int stream_t ;
struct TYPE_7__ {int i_extra; int p_extra; } ;
struct TYPE_8__ {TYPE_1__ fmt_in; } ;
typedef TYPE_2__ decoder_t ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,int ,int) ;
 int * FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,char const**) ;

__attribute__((used)) static void FUNC_9( decoder_t *VAR_1 )
{
    stream_t *VAR_2 = ((void*)0);
    xml_reader_t *VAR_3 = ((void*)0);

    VAR_2 = FUNC_5( FUNC_1(VAR_1),
                              VAR_1->fmt_in.p_extra,
                              VAR_1->fmt_in.i_extra,
                              1 );
    if( !VAR_2 )
        return;

    VAR_3 = FUNC_6( VAR_1, VAR_2 );
    if( FUNC_2(VAR_3) )
    {
        const char *VAR_4;


        if( FUNC_8( VAR_3, &VAR_4 ) == VAR_0
         && !FUNC_3( "usfsubtitles", VAR_4 ) )
            FUNC_0( VAR_1, VAR_3 );

        FUNC_7( VAR_3 );
    }
    FUNC_4( VAR_2 );
}
