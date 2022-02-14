
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vlc_thread {scalar_t__ cancel_event; int killable; } ;
typedef int ULONG ;
struct TYPE_3__ {int ulUser; void* hsemCur; } ;
typedef TYPE_1__ SEMRECORD ;
typedef void* HSEM ;
typedef int HMUX ;
typedef scalar_t__ HEV ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int,TYPE_1__*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,int,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (struct vlc_thread*) ;
 struct vlc_thread* FUNC_6 () ;

__attribute__((used)) static ULONG FUNC_7( HEV VAR_4, ULONG VAR_5 )
{
    HMUX VAR_6;
    SEMRECORD VAR_7[ 2 ];
    ULONG VAR_8;
    int VAR_9;
    ULONG VAR_10;

    struct vlc_thread *VAR_11 = FUNC_6 ();
    if( VAR_11 == ((void*)0) || !VAR_11->killable )
    {




        if( VAR_4 != VAR_3 )
            return FUNC_3( VAR_4, VAR_5 );

        return FUNC_2( VAR_5 );
    }

    VAR_9 = 0;
    if( VAR_4 != VAR_3 )
    {
        VAR_7[ VAR_9 ].hsemCur = ( HSEM )VAR_4;
        VAR_7[ VAR_9 ].ulUser = 0;
        VAR_9++;
    }
    VAR_7[ VAR_9 ].hsemCur = ( HSEM )VAR_11->cancel_event;
    VAR_7[ VAR_9 ].ulUser = 0xFFFF;
    VAR_9++;

    FUNC_1( ((void*)0), &VAR_6, VAR_9, VAR_7, VAR_0 );
    VAR_10 = FUNC_4( VAR_6, VAR_5, &VAR_8 );
    FUNC_0( VAR_6 );
    if( VAR_10 )
        return VAR_10;

    if( VAR_8 == 0xFFFF )
    {
        FUNC_5( VAR_11 );
        return VAR_1;
    }

    return VAR_2;
}
