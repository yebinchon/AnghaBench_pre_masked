
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_8__ {TYPE_4__* ic; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_9__ {unsigned int nb_streams; } ;
typedef int AVDictionary ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int **) ;
 int FUNC_2 (int **,int *,int ) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (TYPE_4__*,int **) ;
 int FUNC_5 (TYPE_1__*,char*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9( demux_t *VAR_0, AVDictionary *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_0->p_sys;
    unsigned VAR_3 = VAR_2->ic->nb_streams;

    AVDictionary *VAR_4[VAR_3 ? VAR_3 : 1];

    VAR_4[0] = VAR_1;
    for ( unsigned VAR_5 = 1; VAR_5 < VAR_3; VAR_5++ )
    {
        VAR_4[VAR_5] = ((void*)0);
        if( VAR_4[0] )
            FUNC_2( &VAR_4[VAR_5], VAR_4[0], 0 );
    }

    FUNC_6();
    int VAR_6 = FUNC_4( VAR_2->ic, VAR_4 );
    FUNC_7();

    FUNC_1( VAR_0, &VAR_4[0] );
    for ( unsigned VAR_7 = 1; VAR_7 < VAR_3; VAR_7++ ) {
        FUNC_3( &VAR_4[VAR_7] );
    }

    if( VAR_6 < 0 )
    {
        FUNC_5( VAR_0, "Could not find stream info: %s",
                  FUNC_8(FUNC_0(VAR_6)) );
    }
}
