
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct MHD_Connection {int dummy; } ;
typedef enum MHD_RequestTerminationCode { ____Placeholder_MHD_RequestTerminationCode } MHD_RequestTerminationCode ;
struct TYPE_3__ {struct TYPE_3__* cursor; int tmp; int journal; } ;
typedef TYPE_1__ RequestMeta ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(
                void *VAR_0,
                struct MHD_Connection *VAR_1,
                void **VAR_2,
                enum MHD_RequestTerminationCode VAR_3) {

        RequestMeta *VAR_4 = *VAR_2;

        if (!VAR_4)
                return;

        FUNC_2(VAR_4->journal);

        FUNC_1(VAR_4->tmp);

        FUNC_0(VAR_4->cursor);
        FUNC_0(VAR_4);
}
