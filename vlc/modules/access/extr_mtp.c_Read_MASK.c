
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef scalar_t__ ssize_t ;




 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_2 (int,void*,size_t) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static ssize_t FUNC_6( stream_t *VAR_1, void *VAR_2, size_t VAR_3 )
{
    int *VAR_4 = VAR_1->p_sys, VAR_5 = *VAR_4;
    ssize_t VAR_6 = FUNC_2( VAR_5, VAR_2, VAR_3 );

    if( VAR_6 < 0 )
    {
        switch( VAR_0 )
        {
            case 128:
            case 129:
                break;

            default:
                FUNC_1( VAR_1, "read failed: %s", FUNC_5(VAR_0) );
                FUNC_3( VAR_1, FUNC_0( "File reading failed" ),
                    FUNC_0( "VLC could not read the file: %s" ),
                    FUNC_4(VAR_0) );
                return 0;
        }
    }

    return VAR_6;
}
