
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct track_item {int name; int slot; } ;


 int FUNC_0 (int ) ;
 struct track_item* FUNC_1 (struct track_item*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct track_item* FUNC_3(struct track_item *VAR_0) {

        if (!VAR_0)
                return ((void*)0);

        FUNC_2(VAR_0->slot);
        FUNC_0(VAR_0->name);
        return FUNC_1(VAR_0);
}
