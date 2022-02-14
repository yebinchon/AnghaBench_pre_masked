
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {struct TYPE_13__* p_next; TYPE_1__* p_text; } ;
typedef TYPE_2__ subpicture_region_t ;
struct TYPE_14__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_15__ {int i_align; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_12__ {char* psz_text; } ;


 void* FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,char*,int ) ;
 char* FUNC_2 (char*,char*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,char*,int) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,int) ;
 char* FUNC_11 (char*,int) ;
 int FUNC_12 (char*,int *,int) ;

__attribute__((used)) static subpicture_region_t *FUNC_13( decoder_t *VAR_0,
                                            char *VAR_1 )
{
    decoder_sys_t *VAR_2 = VAR_0->p_sys;
    subpicture_region_t *VAR_3 = ((void*)0);
    subpicture_region_t *VAR_4 = VAR_3;

    while( *VAR_1 )
    {
        if( *VAR_1 == '<' )
        {
            char *VAR_5 = ((void*)0);


            if(( !FUNC_10( VAR_1, "<karaoke ", 9 )) ||
                    ( !FUNC_10( VAR_1, "<karaoke>", 9 )))
            {
                VAR_5 = FUNC_6( VAR_1, "</karaoke>" );

                if( VAR_5 )
                {
                    subpicture_region_t *VAR_6;

                    char *VAR_7 = ((void*)0);
                    char *VAR_8 = FUNC_11( &VAR_1[9], VAR_5 - &VAR_1[9] );
                    if( VAR_8 )
                    {

                        VAR_7 = FUNC_0( VAR_8 );
                        FUNC_5( VAR_8 );
                        if( VAR_7 )
                        {
                            VAR_6 = FUNC_1( VAR_0,
                                                              VAR_7,
                                                              VAR_2->i_align );
                            if( VAR_6 )
                            {
                                FUNC_5( VAR_6->p_text->psz_text );
                                VAR_6->p_text->psz_text = VAR_7;
                                if( !VAR_3 )
                                {
                                    VAR_3 = VAR_4 = VAR_6;
                                }
                                else if( VAR_6 )
                                {
                                    VAR_4->p_next = VAR_6;
                                    VAR_4 = VAR_4->p_next;
                                }
                            }
                            else FUNC_5( VAR_7 );
                        }
                    }

                    VAR_5 += FUNC_8( VAR_5, ">" ) + 1;
                }
            }
            else if(( !FUNC_10( VAR_1, "<image ", 7 )) ||
                    ( !FUNC_10( VAR_1, "<image>", 7 )))
            {
                subpicture_region_t *VAR_9 = ((void*)0);

                VAR_5 = FUNC_6( VAR_1, "</image>" );
                char *VAR_10 = FUNC_7( VAR_1, '>' );
                int VAR_11 = -1;
                char *VAR_12 = FUNC_2( "colorkey", VAR_1 );
                if( VAR_12 )
                {
                    if( *VAR_12 == '#' )
                        VAR_11 = FUNC_12( VAR_12 + 1, ((void*)0), 16 ) & 0x00ffffff;
                    FUNC_5( VAR_12 );
                }
                if( VAR_10 && ( VAR_10 < VAR_5 ) )
                {
                    char *VAR_13 = FUNC_11( &VAR_10[1], VAR_5 - &VAR_10[1] );
                    if( VAR_13 )
                    {
                        VAR_9 = FUNC_3( VAR_0,
                                            VAR_13, VAR_11 );
                        FUNC_5( VAR_13 );
                    }
                }

                if( VAR_5 ) VAR_5 += FUNC_8( VAR_5, ">" ) + 1;

                if( VAR_9 )
                {
                    FUNC_4( VAR_9, VAR_1 );

                    VAR_9->p_next = ((void*)0);
                }
                if( !VAR_3 )
                {
                    VAR_3 = VAR_4 = VAR_9;
                }
                else if( VAR_9 )
                {
                    VAR_4->p_next = VAR_9;
                    VAR_4 = VAR_4->p_next;
                }
            }
            else
            {
                subpicture_region_t *VAR_14;

                VAR_5 = VAR_1 + FUNC_9( VAR_1 );

                VAR_14 = FUNC_1( VAR_0,
                                                  VAR_1,
                                                  VAR_2->i_align );

                if( VAR_14 )
                {
                    FUNC_5( VAR_14->p_text->psz_text );
                    VAR_14->p_text->psz_text = FUNC_0( VAR_1 );
                }

                if( !VAR_3 )
                {
                    VAR_3 = VAR_4 = VAR_14;
                }
                else if( VAR_14 )
                {
                    VAR_4->p_next = VAR_14;
                    VAR_4 = VAR_4->p_next;
                }
            }
            if( VAR_5 )
                VAR_1 = VAR_5 - 1;

            VAR_1 += FUNC_8( VAR_1, ">" );
        }

        VAR_1++;
    }

    return VAR_3;
}
