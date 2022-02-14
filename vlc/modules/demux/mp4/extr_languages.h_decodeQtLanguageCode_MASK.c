
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (char*,void const*,int) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static bool FUNC_2( uint16_t VAR_0, char *VAR_1,
                                  bool *VAR_2 )
{
    static const char * VAR_3 =
            "eng" "fra" "deu" "ita" "nld"
            "swe" "spa" "dan" "por" "nor"
            "heb" "jpn" "ara" "fin" "gre"
            "isl" "mlt" "tur" "hrv" "zho"
            "urd" "hin" "tha" "kor" "lit"
            "pol" "hun" "est" "lav" "sme"
            "fao" "fas" "rus" "zho" "nld"
            "gle" "sqi" "ron" "ces" "slk"
            "slv" "yid" "srp" "mkd" "bul"
            "ukr" "bel" "uzb" "kaz" "aze"
            "aze" "hye" "kat" "mol" "kir"
            "tgk" "tuk" "mon" "mon" "pus"
            "kur" "kas" "snd" "bod" "nep"
            "san" "mar" "ben" "asm" "guj"
            "pan" "ori" "mal" "kan" "tam"
            "tel" "sin" "mya" "khm" "lao"
            "vie" "ind" "tgl" "msa" "msa"
            "amh" "tir" "orm" "som" "swa"
            "kin" "run" "nya" "mlg" "epo"
            ;

    static const char * VAR_4 =
            "cym" "eus" "cat" "lat" "que"
            "grn" "aym" "tat" "uig" "dzo"
            "jaw" "sun" "glg" "afr" "bre"
            "iku" "gla" "glv" "gle" "ton"
            "gre"
            ;

    if ( VAR_0 < 0x400 || VAR_0 == 0x7FFF )
    {
        const void *VAR_5;
        *VAR_2 = 1;
        if ( VAR_0 <= 94 )
        {
            VAR_5 = VAR_3 + VAR_0 * 3;
        }
        else if ( VAR_0 >= 128 && VAR_0 <= 148 )
        {
            VAR_0 -= 128;
            VAR_5 = VAR_4 + VAR_0 * 3;
        }
        else
            return 0;
        FUNC_0( VAR_1, VAR_5, 3 );
    }
    else
    {
        *VAR_2 = 0;



        if( VAR_0 == 0x55C4 )
        {
            FUNC_1( VAR_1, 0, 3 );
            return 0;
        }

        for( unsigned VAR_6 = 0; VAR_6 < 3; VAR_6++ )
            VAR_1[VAR_6] = ( ( VAR_0 >> ( (2-VAR_6)*5 ) )&0x1f ) + 0x60;
    }
    return 1;
}
