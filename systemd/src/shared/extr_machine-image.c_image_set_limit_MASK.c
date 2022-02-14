
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {scalar_t__ type; int path; } ;
typedef TYPE_1__ Image ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;

int FUNC_6(Image *VAR_3, uint64_t VAR_4) {
        FUNC_2(VAR_3);

        if (FUNC_1(VAR_3) || FUNC_0(VAR_3))
                return -VAR_1;

        if (VAR_3->type != VAR_2)
                return -VAR_0;






        (void) FUNC_3(VAR_3->path, 0, VAR_4);
        (void) FUNC_4(VAR_3->path, 0, 1);
        return FUNC_5(VAR_3->path, 0, VAR_4);
}
