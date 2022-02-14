
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_9__ {int b_fragments_probed; int b_error; TYPE_1__* p_moov; int b_fastseekable; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_7__ {scalar_t__ const i_size; scalar_t__ const i_pos; } ;


 int FUNC_0 (TYPE_2__*,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,int ,char*,char*,int *,char*,char*,char const*) ;
 int FUNC_3 (int ,scalar_t__ const) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_3->p_sys;

    if( VAR_4->b_fragments_probed )
        return VAR_2;

    if( !VAR_4->b_fastseekable )
    {
        const char *VAR_5 = FUNC_1(
            "Because this file index is broken or missing, "
            "seeking will not work correctly.\n"
            "VLC won't repair your file but can temporary fix this "
            "problem by building an index in memory.\n"
            "This step might take a long time on a large file.\n"
            "What do you want to do?");
        bool VAR_6 = FUNC_2( VAR_3,
                                               VAR_0,
                                               FUNC_1("Do not seek"),
                                               FUNC_1("Build index"),
                                               ((void*)0),
                                               FUNC_1("Broken or missing Index"),
                                               "%s", VAR_5 );
        if( !VAR_6 )
            return VAR_1;
    }

    const uint64_t VAR_7 = FUNC_4( VAR_3->s );
    int VAR_8 = FUNC_3( VAR_3->s, VAR_4->p_moov->i_pos + VAR_4->p_moov->i_size );
    if( VAR_8 == VAR_2 )
    {
        bool VAR_9;
        VAR_8 = FUNC_0( VAR_3, 1, &VAR_9 );
        VAR_4->b_fragments_probed = 1;
    }

    if( VAR_8 != VAR_2 )
        VAR_4->b_error = (FUNC_3( VAR_3->s, VAR_7 ) != VAR_2);

    return VAR_8;
}
