
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int name ;
typedef int input_attachment_t ;
typedef int i_attachments ;


 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (int const*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 char* FUNC_8 (char const*,size_t) ;
 scalar_t__ FUNC_9 (int ) ;
 int * FUNC_10 (char*,char*,char*,int const*,size_t) ;

input_attachment_t* FUNC_11( const uint8_t *VAR_0, size_t VAR_1,
    int VAR_2, int *VAR_3, int *VAR_4 )
{

    static const char VAR_5[] = {
        0,
        5,
        4,
        20,
        19,
        13,
        18,
        17,
        16,
        14,
        15,
        9,
        8,
        7,
        10,
        11,
        6,
        1,
        12,
        3,
        2
    };

    uint32_t VAR_6, VAR_7;

    if( VAR_1 < 8 )
        return ((void*)0);







    VAR_6 = FUNC_2( VAR_0 );
    do { FUNC_0(VAR_1 >= (4)); VAR_1 -= (4); VAR_0 += (4); } while (0);
    VAR_7 = FUNC_2( VAR_0 );
    do { FUNC_0(VAR_1 >= (4)); VAR_1 -= (4); VAR_0 += (4); } while (0);

    if( VAR_1 < VAR_7 )
        return ((void*)0);

    char *VAR_8 = FUNC_8( (const char *)VAR_0, VAR_7 );
    if( FUNC_9(VAR_8 == ((void*)0)) )
        return ((void*)0);
    do { FUNC_0(VAR_1 >= (VAR_7)); VAR_1 -= (VAR_7); VAR_0 += (VAR_7); } while (0);

    if( VAR_1 < 4 )
    {
        FUNC_4( VAR_8 );
        return ((void*)0);
    }

    VAR_7 = FUNC_2( VAR_0 );
    do { FUNC_0(VAR_1 >= (4)); VAR_1 -= (4); VAR_0 += (4); } while (0);

    if( VAR_1 < VAR_7 )
    {
        FUNC_4( VAR_8 );
        return ((void*)0);
    }

    input_attachment_t *VAR_9 = ((void*)0);
    char *VAR_10 = FUNC_8( (const char *)VAR_0, VAR_7 );
    if( FUNC_9(VAR_10 == ((void*)0)) )
        goto error;
    do { FUNC_0(VAR_1 >= (VAR_7)); VAR_1 -= (VAR_7); VAR_0 += (VAR_7); } while (0);

    FUNC_1( VAR_10 );

    if( VAR_1 < 20 )
        goto error;

    do { FUNC_0(VAR_1 >= (4 * 4)); VAR_1 -= (4 * 4); VAR_0 += (4 * 4); } while (0);

    VAR_7 = FUNC_2( VAR_0 );
    do { FUNC_0(VAR_1 >= (4)); VAR_1 -= (4); VAR_0 += (4); } while (0);

    if( VAR_1 < VAR_7 )
        goto error;




    char VAR_11[7 + (sizeof (VAR_2) * 3) + 4 + 1];

    FUNC_5( VAR_11, sizeof (VAR_11), "picture%u", VAR_2 );

    if( !FUNC_6( VAR_8, "image/jpeg" ) )
        FUNC_7( VAR_11, ".jpg" );
    else if( !FUNC_6( VAR_8, "image/png" ) )
        FUNC_7( VAR_11, ".png" );

    VAR_9 = FUNC_10( VAR_11, VAR_8, VAR_10, VAR_0,
                                             VAR_1 );

    if( VAR_6 < FUNC_0(VAR_5) &&
        *VAR_3 < VAR_5[VAR_6] )
    {
        *VAR_4 = VAR_2;
        *VAR_3 = VAR_5[VAR_6];
    }

error:
    FUNC_4( VAR_8 );
    FUNC_4( VAR_10 );
    return VAR_9;
}
