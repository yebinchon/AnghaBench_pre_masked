
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int obj; } ;
typedef TYPE_1__ cam_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int ,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static void FUNC_2( cam_t *VAR_3, int VAR_4 )
{
    uint8_t VAR_5[2];

    VAR_5[0] = VAR_1;
    VAR_5[1] = VAR_2;

    FUNC_0( VAR_3, VAR_4, VAR_0, VAR_5, 2 );

    FUNC_1( VAR_3->obj, "sending DisplayReply on session (%d)", VAR_4 );
}
