
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* p_binary; int p_data; } ;
struct TYPE_10__ {scalar_t__ i_type; TYPE_1__ data; } ;
struct TYPE_9__ {int i_blob; scalar_t__ p_blob; } ;
typedef TYPE_3__ MP4_Box_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*) ;
 TYPE_3__* FUNC_2 (TYPE_3__*,char*) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static char * FUNC_6( MP4_Box_t *VAR_1 )
{
    if ( VAR_1->i_type == VAR_0 )
        return FUNC_3( VAR_1->data.p_data );

    MP4_Box_t *VAR_2 = FUNC_2( VAR_1, "data" );
    if ( VAR_2 )
        return FUNC_3( FUNC_0(VAR_2) );
    else if ( VAR_1->data.p_binary && VAR_1->data.p_binary->p_blob )
    {
        char *VAR_3 = FUNC_5( VAR_1->data.p_binary->p_blob,
                                 VAR_1->data.p_binary->i_blob );
        if (FUNC_4( VAR_3 ))
            FUNC_1( VAR_3 );
        return VAR_3;
    }
    else
        return ((void*)0);
}
