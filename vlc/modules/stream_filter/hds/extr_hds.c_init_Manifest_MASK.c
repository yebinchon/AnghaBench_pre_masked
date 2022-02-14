
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {struct TYPE_9__* s; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_10__ {int vlc_reader; } ;
typedef TYPE_2__ manifest_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3( stream_t *VAR_2, manifest_t *VAR_3 )
{
    FUNC_0(VAR_3, 0, sizeof(*VAR_3));
    stream_t *VAR_4 = VAR_2->s;

    VAR_3->vlc_reader = FUNC_2( VAR_4, VAR_4 );
    if( !VAR_3->vlc_reader )
    {
        FUNC_1( VAR_2, "Failed to open source for parsing" );
        return VAR_0;
    }

    return VAR_1;
}
