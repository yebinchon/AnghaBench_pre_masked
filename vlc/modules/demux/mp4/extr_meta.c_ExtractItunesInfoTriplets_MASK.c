
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vlc_meta_t ;
struct TYPE_10__ {TYPE_1__* p_binary; } ;
struct TYPE_11__ {scalar_t__ i_type; TYPE_2__ data; } ;
struct TYPE_9__ {int i_blob; scalar_t__ p_blob; } ;
typedef TYPE_3__ MP4_Box_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 char* FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char*,int) ;
 int FUNC_6 (int *,char*,char*) ;

__attribute__((used)) static void FUNC_7( vlc_meta_t *VAR_1, MP4_Box_t *VAR_2 )
{
    if( VAR_2->i_type != VAR_0 )
        return;
    MP4_Box_t *VAR_3 = FUNC_2( VAR_2, "mean" );
    MP4_Box_t *VAR_4 = FUNC_2( VAR_2, "name" );
    MP4_Box_t *VAR_5 = FUNC_2( VAR_2, "data" );
    if( !VAR_3 || VAR_3->data.p_binary->i_blob < 4 + 16 ||
        !VAR_4 || VAR_4->data.p_binary->i_blob < 5 ||
        !VAR_5 || !FUNC_0(VAR_5) )
        return;

    if( !FUNC_4( &((char*)VAR_3->data.p_binary->p_blob)[4], "com.apple.iTunes",
                  VAR_3->data.p_binary->i_blob - 4 ) )
    {
        char *VAR_6 = FUNC_5( &((char*)VAR_4->data.p_binary->p_blob)[4],
                                 VAR_4->data.p_binary->i_blob - 4 );
        char *VAR_7 = FUNC_1( VAR_5 );
        if( VAR_6 && VAR_7 )
            FUNC_6( VAR_1, VAR_6, VAR_7 );
        FUNC_3( VAR_6 );
        FUNC_3( VAR_7 );
    }
}
