
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* data; TYPE_1__* parent; struct TYPE_8__* matches; } ;
struct TYPE_7__ {int matches; } ;
typedef TYPE_2__ Match ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(Match *VAR_1) {
        FUNC_1(VAR_1);

        while (VAR_1->matches)
                FUNC_3(VAR_1->matches);

        if (VAR_1->parent)
                FUNC_0(VAR_0, VAR_1->parent->matches, VAR_1);

        FUNC_2(VAR_1->data);
        FUNC_2(VAR_1);
}
