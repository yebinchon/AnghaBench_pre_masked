
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* psz_name; int lock; scalar_t__ p_meta; } ;
typedef TYPE_1__ input_item_t ;


 char* FUNC_0 (char const*,char const*,char const*,char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static char *FUNC_6( input_item_t *VAR_5 )
{
    char* VAR_6 = ((void*)0);
    const char *VAR_7;
    const char *VAR_8;
    const char *VAR_9;
    const char *VAR_10;
    const char *VAR_11;

    FUNC_4( &VAR_5->lock );

    if( !VAR_5->p_meta )
        VAR_5->p_meta = FUNC_3();
    if( !VAR_5->p_meta )
        goto end;

    VAR_7 = FUNC_2( VAR_5->p_meta, VAR_1 );
    VAR_8 = FUNC_2( VAR_5->p_meta, VAR_0 );
    VAR_9 = FUNC_2( VAR_5->p_meta, VAR_2 );
    VAR_10 = FUNC_2( VAR_5->p_meta, VAR_4 );
    VAR_11 = FUNC_2( VAR_5->p_meta, VAR_3 );
    if( !VAR_10 )
        VAR_10 = VAR_5->psz_name;

    if( (FUNC_1(VAR_7) || FUNC_1(VAR_8) ) && !VAR_9 )
        goto end;

    VAR_6 = FUNC_0( VAR_9, VAR_7, VAR_8, VAR_11, VAR_10 );

end:
    FUNC_5( &VAR_5->lock );
    return VAR_6;
}
