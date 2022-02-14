
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xml_entity_s {int psz_entity; int psz_char; } ;


 int FUNC_0 (int ) ;
 struct xml_entity_s* FUNC_1 (char*,int ,int ,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ,size_t) ;
 int FUNC_3 (int ) ;
 unsigned long FUNC_4 (char*,char**,int) ;
 int VAR_1 ;

void FUNC_5( char *VAR_2 )
{
    char *VAR_3 = VAR_2;

    while ( *VAR_2 )
    {
        if( *VAR_2 == '&' )
        {
            if( VAR_2[1] == '#' )
            {
                char *VAR_4;
                unsigned long VAR_5;

                if( VAR_2[2] == 'x' )
                    VAR_5 = FUNC_4( VAR_2 + 3, &VAR_4, 16 );
                else
                    VAR_5 = FUNC_4( VAR_2 + 2, &VAR_4, 10 );

                if( *VAR_4 == ';' )
                {
                    VAR_2 = VAR_4 + 1;
                    if( VAR_5 == 0 )
                        (void)0;
                    else
                    if( VAR_5 <= 0x7F )
                    {
                        *VAR_3 = VAR_5;
                    }
                    else


                    if( VAR_5 <= 0x7FF )
                    {
                        *VAR_3++ = 0xC0 | (VAR_5 >> 6);
                        *VAR_3 = 0x80 | (VAR_5 & 0x3F);
                    }
                    else
                    if( VAR_5 <= 0xFFFF )
                    {
                        *VAR_3++ = 0xE0 | (VAR_5 >> 12);
                        *VAR_3++ = 0x80 | ((VAR_5 >> 6) & 0x3F);
                        *VAR_3 = 0x80 | (VAR_5 & 0x3F);
                    }
                    else
                    if( VAR_5 <= 0x1FFFFF )
                    {
                        *VAR_3++ = 0xF0 | (VAR_5 >> 18);
                        *VAR_3++ = 0x80 | ((VAR_5 >> 12) & 0x3F);
                        *VAR_3++ = 0x80 | ((VAR_5 >> 6) & 0x3F);
                        *VAR_3 = 0x80 | (VAR_5 & 0x3F);
                    }
                }
                else
                {

                    *VAR_3 = *VAR_2;
                    VAR_2++;
                }
            }
            else
            {
                const struct xml_entity_s *VAR_6;

                VAR_6 = FUNC_1 (VAR_2 + 1, VAR_1,
                               FUNC_0 (VAR_1),
                               sizeof (*VAR_6), VAR_0);
                if (VAR_6 != ((void*)0))
                {
                    size_t VAR_7 = FUNC_3 (VAR_6->psz_char);
                    FUNC_2 (VAR_3, VAR_6->psz_char, VAR_7);
                    VAR_3 += VAR_7 - 1;
                    VAR_2 += FUNC_3 (VAR_6->psz_entity) + 1;
                }
                else
                {
                    *VAR_3 = *VAR_2;
                    VAR_2++;
                }
            }
        }
        else
        {
            *VAR_3 = *VAR_2;
            VAR_2++;
        }

        VAR_3++;
    }

    *VAR_3 = '\0';
}
