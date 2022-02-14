
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_codec; int i_cat; } ;
typedef TYPE_1__ es_format_t ;
typedef int decoder_t ;


 char* FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int ,int ,...) ;
 char* FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5( decoder_t *VAR_1, const es_format_t *VAR_2, bool VAR_3 )
{
    if (VAR_2->i_codec != VAR_0 && VAR_2->i_codec) {
        const char *VAR_4 = FUNC_4(VAR_2->i_cat, VAR_2->i_codec);
        if (!VAR_4 || !*VAR_4)
            VAR_4 = FUNC_0("No description for this codec");
        FUNC_2( VAR_1, "Codec `%4.4s' (%s) is not supported.", (char*)&VAR_2->i_codec, VAR_4 );
        FUNC_3( VAR_1, FUNC_1("Codec not supported"),
            FUNC_1("VLC could not decode the format \"%4.4s\" (%s)"),
            (char*)&VAR_2->i_codec, VAR_4 );
    } else if( VAR_3 ){
        FUNC_2( VAR_1, "could not identify codec" );
        FUNC_3( VAR_1, FUNC_1("Unidentified codec"),
            FUNC_1("VLC could not identify the audio or video codec" ) );
    }
}
