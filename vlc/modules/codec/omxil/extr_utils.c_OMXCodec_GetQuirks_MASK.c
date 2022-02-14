
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_fourcc_t ;
struct str2quirks {char* member_0; int member_1; char* psz_name; int i_quirks; } ;
typedef enum es_format_category_e { ____Placeholder_es_format_category_e } es_format_category_e ;


 int VAR_0 ;

 int VAR_1 ;



 int VAR_2 ;




 size_t FUNC_0 (size_t,unsigned int) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,size_t) ;

int FUNC_3( enum es_format_category_e VAR_3, vlc_fourcc_t VAR_4,
                        const char *VAR_5, unsigned int VAR_6 )
{
    static const struct str2quirks VAR_7[] = {
        { "OMX.MTK.VIDEO.DECODER.MPEG4", 134 },
        { "OMX.Marvell", 135 },
        { "OMX.SEC.avc.dec", 133 },
        { "OMX.SEC.avcdec", 133 },
        { "OMX.SEC.MPEG4.Decoder", 133 },
        { "OMX.SEC.mpeg4.dec", 133 },
        { "OMX.SEC.vc1.dec", 133 },
        { "OMX.amlogic.avc.decoder.awesome", 132 },
        { ((void*)0), 0 }
    };

    static struct str2quirks VAR_8[] = {
        { ((void*)0), 0 }
    };

    int VAR_9 = VAR_1;

    if( VAR_3 == VAR_2 )
    {
        switch( VAR_4 )
        {
        case 131:
        case 129:
            VAR_9 |= 134;
            break;
        }
    } else if( VAR_3 == VAR_0 )
    {
        switch( VAR_4 )
        {
        case 128:
        case 130:
            VAR_9 |= 134;
            break;
        }
    }



    for( const struct str2quirks *VAR_10 = VAR_7; VAR_10->psz_name;
         VAR_10++ )
    {
        const char *VAR_11 = VAR_10->psz_name;
        if( !FUNC_2( VAR_5, VAR_11,
           FUNC_0( FUNC_1(VAR_11), VAR_6 ) ) )
           VAR_9 |= VAR_10->i_quirks;
    }

    for( const struct str2quirks *VAR_12 = VAR_8; VAR_12->psz_name;
         VAR_12++ )
    {
        const char *VAR_13 = VAR_12->psz_name;
        size_t VAR_14 = FUNC_1( VAR_13 );

        if( VAR_6 > VAR_14
         && !FUNC_2( VAR_5 + VAR_6 - VAR_14, VAR_13,
                      VAR_14 ) )
           VAR_9 |= VAR_12->i_quirks;
    }

    return VAR_9;
}
