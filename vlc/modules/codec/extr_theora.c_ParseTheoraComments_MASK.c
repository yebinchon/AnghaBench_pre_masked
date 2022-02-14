
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ p_description; TYPE_3__* p_sys; } ;
typedef TYPE_2__ decoder_t ;
struct TYPE_5__ {int comments; int* comment_lengths; scalar_t__* user_comments; } ;
struct TYPE_7__ {TYPE_1__ tc; } ;
typedef TYPE_3__ decoder_sys_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (void*,void*,int) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (scalar_t__,char*,char*) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static void FUNC_6( decoder_t *VAR_1 )
{
    char *VAR_2, *VAR_3, *VAR_4;
    int VAR_5 = 0;

    decoder_sys_t *VAR_6 = VAR_1->p_sys;
    while ( VAR_5 < VAR_6->tc.comments )
    {
        int VAR_7 = VAR_6->tc.comment_lengths[VAR_5];
        if ( VAR_7 <= 0 || VAR_7 >= VAR_0 ) { VAR_5++; continue; }
        VAR_4 = (char *)FUNC_1( VAR_7 + 1 );
        if( !VAR_4 )
            break;
        FUNC_2( (void*)VAR_4, (void*)VAR_6->tc.user_comments[VAR_5], VAR_7 + 1 );
        VAR_2 = VAR_4;
        VAR_3 = FUNC_3( VAR_4, '=' );
        if( VAR_3 )
        {
            *VAR_3 = '\0';
            VAR_3++;

            if( !VAR_1->p_description )
                VAR_1->p_description = FUNC_5();


            if( VAR_1->p_description )
                FUNC_4( VAR_1->p_description, VAR_2, VAR_3 );
        }
        FUNC_0( VAR_4 );
        VAR_5++;
    }
}
